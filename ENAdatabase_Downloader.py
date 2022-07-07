import argparse
import csv
import os
import re
import sys
import requests
import urllib.error
import urllib.request as urlrequest
import urllib.parse as urlparse
from tqdm import tqdm
from multiprocessing.dummy import Pool

VIEW_URL_BASE = 'https://www.ebi.ac.uk/ena/browser/api/'
PORTAL_SEARCH_BASE = 'https://www.ebi.ac.uk/ena/portal/api/filereport?'
XML_DISPLAY = 'xml/'
ALLOWED_EXTENSIONS = {'.csv'}

run_pattern = re.compile('^[EDS]RR\d{6,}$')
experiment_pattern = re.compile('^[EDS]RX\d{6,}$')
sample_pattern_1 = re.compile('^SAM[ND]\d{8}$')
sample_pattern_2 = re.compile('^SAMEA\d{6,}$')
sample_pattern_3 = re.compile('^[EDS]RS\d{6,}$')


def is_run(accession):
    return run_pattern.match(accession)


def is_experiment(accession):
    return experiment_pattern.match(accession)


def is_sample(accession):
    return sample_pattern_1.match(accession) or sample_pattern_2.match(accession) or sample_pattern_3.match(accession)


def get_accession_type(accession):
    if is_run(accession):
        return 1
    elif is_experiment(accession):
        return 2
    elif is_sample(accession):
        return 3
    return 0


def get_file_search_query(accession):
    return PORTAL_SEARCH_BASE + 'accession={0}'.format(accession) + '&result=read_run&' \
                                                                    'fields=submitted_ftp,fastq_ftp,sra_ftp&limit=0'


def split_filelist(filelist_string):
    if filelist_string.strip() == '':
        return []
    return filelist_string.strip().split(';')


def parse_file_search_result_line(line):
    cols = line.split('\t')
    data_acc = cols[0].strip()
    submitted_ftp = split_filelist(cols[1])
    fastq_filelist = split_filelist(cols[2])
    sra_filelist = split_filelist(cols[3])
    if not fastq_filelist:
        if not submitted_ftp:
            return data_acc, sra_filelist
        if not sra_filelist:
            return data_acc, submitted_ftp
    return data_acc, fastq_filelist


def get_report_from_portal(url):
    request = urlrequest.Request(url)
    response = urlrequest.urlopen(request)
    if response.status == 200:
        return response
    elif response.status == 204:
        print('ERROR: No records of the requested data group are available associated with the provided accession')
    else:
        print('ERROR: ' + response.msg + '\n')
        print('ERROR: Unable to fetch data from url: ' + url + '\n')


def download_report_from_portal(url):
    response = get_report_from_portal(url)
    lines = []
    for line in response:
        lines.append(line.decode('utf-8'))
    return lines


def is_available(accession):
    url = VIEW_URL_BASE + XML_DISPLAY + accession
    try:
        print('Checking availability of ' + url)
        response = requests.get(url)
        return response.status_code == 200 and len(response.content) != 0
    except urllib.error.URLError as e:
        if 'CERTIFICATE_VERIFY_FAILED' in str(e):
            print('Error verifying SSL certificate. Have you run "Install Certificates" as part of your Python3 '
                  'installation?')
            print('This is a commonly missed step in Python3 installation on a Mac.')
            print('Please run the following from a terminal window (update to your Python3 version as needed):')
            print('open "/Applications/Python 3.6/Install Certificates.command"')
        raise


def check_availability(accession):
    if not is_available(accession):
        print('ERROR: Record does not exist or is not available for accession provided\n')
        return -1
    return 1


class DownloadProgressBar(tqdm):
    def update_to(self, b=1, bsize=1, tsize=None):
        if tsize is not None:
            self.total = tsize
        self.update(b * bsize - self.n)


def sub_download(position, ftp_url, path_save):
    try:
        file_name = urlparse.unquote(ftp_url.split('/')[-1])
        dest_file = os.path.join(path_save, file_name)
        with DownloadProgressBar(unit='B', unit_scale=True, miniters=1, desc=file_name, position = position) as t:
            urlrequest.urlretrieve("ftp://" + ftp_url, dest_file, reporthook=t.update_to)
    except Exception as e:
        print("Error with FTP transfer: {0}".format(e))
        print("Error with FTP transfer occurred for file: {}".format(file_name))


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

    check_code = check_availability(accession_code)
    if check_code != -1:
        print("Checking availability: Done")
        search_url = get_file_search_query(accession_code)
        print("Get data from: " + search_url)
        lines = download_report_from_portal(search_url)
        for line in lines[1:]:
            data_accession, ftp_list = parse_file_search_result_line(line)
            pool = Pool(len(ftp_list))
            for position, ftp_url in enumerate(ftp_list, 1):
                pool.apply_async(sub_download, args=(position, ftp_url, path_save))
            pool.close()
            pool.join()


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
        with open(filename, 'rt', encoding='utf-8-sig') as f:
            file_content = csv.reader(f, delimiter=',')
            for i in file_content:
                if len(i) == 1:
                    if get_accession_type(i[0]) != 0:
                        list_accession.append(i[0])
                    else:
                        list_wrong.append(i[0])
                else:
                    for j in i:
                        if get_accession_type(i) != 0:
                            list_accession.append(j)
                        else:
                            list_wrong.append(j)

    if args.list != '':
        str_accession = args.list
        for i in str_accession.split(','):
            if get_accession_type(i) != 0:
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
