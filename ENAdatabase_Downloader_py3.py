import argparse
import codecs
import csv
import ftplib
import os
import re
import sys
import xml.etree.ElementTree
import requests
from tqdm import tqdm
from multiprocessing import Process

VIEW_URL_BASE = 'https://www.ebi.ac.uk/ena/browser/api/'
XML_DISPLAY = 'xml/'
ALLOWED_EXTENSIONS = {'.csv'}

run_pattern = re.compile('^[EDS]RR[0-9]{6,}$')
experiment_pattern = re.compile('^[EDS]RX[0-9]{6,}$')
study_pattern_1 = re.compile('^[EDS]RP[0-9]{6,}$')
study_pattern_2 = re.compile('^PRJ[EDN][AB][0-9]+$')
sample_pattern_1 = re.compile('^SAM[ND][0-9]{8}$')
sample_pattern_2 = re.compile('^SAMEA[0-9]{6,}$')
sample_pattern_3 = re.compile('^[EDS]RS[0-9]{6,}$')


def is_run(accession):
    return run_pattern.match(accession)


def is_experiment(accession):
    return experiment_pattern.match(accession)


def is_study(accession):
    return study_pattern_1.match(accession) or study_pattern_2.match(accession)


def is_sample(accession):
    return sample_pattern_1.match(accession) or sample_pattern_2.match(accession) \
           or sample_pattern_3.match(accession)


def check_accession_number(accession):
    list_accession_number = []
    url = VIEW_URL_BASE + XML_DISPLAY + accession
    if is_sample(accession):
        try:
            print('Checking availability of ' + url)
            response = requests.get(url)
            tree = xml.etree.ElementTree.fromstring(response.content)
            for child in tree.iter('ID'):
                if is_run(child.text):
                    list_accession_number.append(child.text)
            return list_accession_number
        except requests.ConnectionError:
            print("No data" + accession + "in the database system")
            return -1
    elif is_run(accession):
        return [accession]
    elif is_study(accession) or is_experiment(accession):
        try:
            print('Checking availability of ' + url)
            response = requests.get(url)
            tree = xml.etree.ElementTree.fromstring(response.content)
            for child in tree.iter('ID'):
                list_code = re.split('-|,', child.text)
                if is_run(list_code[0]):
                    pattern = list_code[0][0:6]
                    first_id = list_code[0][6:10]
                    end_id = list_code[1][6:10]
                    for num_id in range(int(first_id), int(end_id) + 1):
                        list_accession_number.append(pattern + str(num_id))
            return list_accession_number
        except requests.ConnectionError:
            print("No data" + accession + "in the database system")
            return -1
    else:
        print("Your accession code is not supported. "
              "Please input another code ([EDS]RR, [EDS]RX, [EDS]RP, PRJ[EDN], SAM[ND], SAMEA, [EDS]RS)")
        return -1


def sub_download(position, file_name, path_save, initial, id_code, accession):
    ftp = ftplib.FTP('ftp.sra.ebi.ac.uk')
    ftp.login()
    ftp.cwd('vol1')
    ftp.cwd('fastq')
    try:
        ftp.cwd(initial)
    except ftplib.error_perm:
        print("Error Link. May be accession number had been deleted")
    else:
        try:
            ftp.cwd(id_code)
            ftp.cwd(accession)
        except ftplib.error_perm:
            ftp.cwd(accession)
        finally:
            total_size = ftp.size(file_name)
            print(total_size)
            with open('%s/%s' % (path_save, file_name), 'wb') as file_save:
                with tqdm(total=total_size, unit='B', unit_scale=True, desc=file_name, position=position) as pbar:
                    def cb(data):
                        pbar.update(len(data))
                        file_save.write(data)

                    ftp.retrbinary('RETR {}'.format(file_name), cb)
    ftp.close()


def download_from_ena(accession_code, path_save):
    check_path = os.path.isdir(path_save)
    while not check_path:
        print('Path Folder: ' + path_save + ' is not exist')
        option_path = str(input('You wants create destination directory or input new destination directory ? (Create,'
                                '[c] | Input,[i]): '))
        while option_path not in {'c', 'i'}:
            option_path = str(input("I think you have some mistake to input wrong character. Please input again ("
                                    "Create,[c] | Input,[i]): "))
        if option_path in {'c'}:
            try:
                os.mkdir(path_save)
            except FileNotFoundError:
                print("Can't create destination directory (%s)!" % path_save)
                new_path = str(input("Please input your new path: "))
                path_save = new_path
            finally:
                check_path = os.path.isdir(path_save)
        else:
            new_path = str(input("Please input your new path: "))
            path_save = new_path
            check_path = os.path.isdir(path_save)

    accession_code_run = check_accession_number(accession_code)
    if accession_code_run != -1:
        if accession_code != accession_code_run:
            print("Run Accession Number For Downloads: %s" % accession_code_run)
        for accession in accession_code_run:
            initial = accession[0:6]
            id_code = "00" + accession[-1]
            list_file_download = ['%s_1.fastq.gz' % accession, '%s_2.fastq.gz' % accession]
            processes = []
            for position, file_name in enumerate(list_file_download, 1):
                pool = Process(target=sub_download, args=(position, file_name, path_save, initial, id_code, accession))
                pool.start()
                processes.append(pool)
            for p in processes:
                p.join()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Download Fastq on ENA database. Make by Vinh Chau ('
                                                 'chauvinhtth13@gmail.com)')
    parser.add_argument('-i', '--ifile', type=str, default='',
                        help='Input list accession number by file (.csv)')
    parser.add_argument('-l', '--list', type=str, default='',
                        help='Input list accession number by hand. Format is accession1,...,accessionN. Note: no space '
                             'between accession with comma')
    parser.add_argument('-o', '--output', default=os.getenv("HOME") + '/Downloads', type=str,
                        help='Path directory to save file')
    args = parser.parse_args()
    list_accession = list()
    list_wrong = list()
    if args.ifile != '':
        while True:
            filename = args.ifile
            extension = os.path.splitext(filename)[1]
            if extension in ALLOWED_EXTENSIONS:
                break
            else:
                print(
                    'Extension file is not supported. Please input another file (Supported .csv with comma delimited)')
                sys.exit(0)
        with open(filename, 'rb') as f:
            file_content = csv.reader(codecs.EncodedFile(f, 'utf-8', 'utf-8-sig'), delimiter=',')
            for i in file_content:
                if len(i) == 1:
                    if is_study(i[1]) or is_sample(i[1]) or is_experiment(i[1]) or is_run(i[1]):
                        list_accession.append(i[1])
                    else:
                        list_wrong.append(i[1])
                else:
                    for j in i:
                        if is_study(j) or is_sample(j) or is_experiment(j) or is_run(j):
                            list_accession.append(j)
                        else:
                            list_wrong.append(j)

    if args.list != '':
        str_accession = args.list
        for i in str_accession.split(','):
            if is_study(i) or is_sample(i) or is_experiment(i) or is_run(i):
                list_accession.append(i)
            else:
                list_wrong.append(i)
    if len(list_accession) > 0:
        print("Please check list accession number for download again")
        print("List accession number will be download: " + str(list_accession))
        print("List accession number will not be download: " + str(list_wrong))
        check = str(input("Do you want continue to download ? (Yes,[y] | No,[n]): "))
        while check not in {'yes', 'y', 'Y', 'no', 'n', 'N'}:
            check = str(input("I think you have some mistake with input wrong character. Please input again (Yes,"
                              "[y] | No,[n]): "))
        if check in {'yes', 'y', 'Y'}:
            for each_accession in list_accession:
                download_from_ena(each_accession, args.output)
            print("Done. See ya!!!! ^_^")
        else:
            print("Thank you")
            sys.exit(0)
    else:
        parser.print_help()
