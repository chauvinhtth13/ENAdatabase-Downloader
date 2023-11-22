#!/usr/bin/env python3
import argparse
import csv
import os
import re
import requests
import sys
import subprocess
import urllib.error
import urllib.parse as urlparse
import urllib.request as urlrequest
from datetime import datetime
from multiprocessing.dummy import Pool

now = datetime.now()
path_to_aria2 = 'PATH_TO_ARIA2'
links_txt_file = 'links.txt'
current_time = now.strftime("%d_%m_%Y %H_%M_%S")
VIEW_URL_BASE = "https://www.ebi.ac.uk/ena/browser/api/"
PORTAL_SEARCH_BASE = "https://www.ebi.ac.uk/ena/portal/api/filereport?"
XML_DISPLAY = "xml/"
ALLOWED_EXTENSIONS = {".csv"}

run_pattern = re.compile("^[EDS]RR\d{6,}$")
experiment_pattern = re.compile("^[EDS]RX\d{6,}$")
sample_pattern_1 = re.compile("^SAM[ND]\d{8}$")
sample_pattern_2 = re.compile("^SAMEA\d{6,}$")
sample_pattern_3 = re.compile("^[EDS]RS\d{6,}$")
study_pattern_1 = re.compile("^[EDS]RP\d{6,}$")
study_pattern_2 = re.compile("^PRJ[EDN][AB]\d+$")


def get_accession_type(accession):
    if run_pattern.match(accession):
        return 1
    elif experiment_pattern.match(accession):
        return 2
    elif sample_pattern_1.match(accession) or sample_pattern_2.match(accession) or sample_pattern_3.match(accession):
        return 3
    elif study_pattern_1.match(accession) or study_pattern_2.match(accession):
        return 4
    return 0


def get_file_search_query(accession):
    return PORTAL_SEARCH_BASE + "accession={0}".format(accession) + "&result=read_run&" \
                                                                    "fields=study_accession,sample_accession," \
                                                                    "experiment_accession,run_accession," \
                                                                    "submission_accession,tax_id,scientific_name," \
                                                                    "instrument_model,library_name,library_layout," \
                                                                    "library_source,read_count," \
                                                                    "first_public,study_alias,fastq_ftp," \
                                                                    "submitted_ftp,sra_ftp&limit=0"


def split_filelist(filelist_string):
    if filelist_string.strip() == "":
        return []
    return filelist_string.strip().split(";")


def parse_file_search_result_line(line):
    cols = line.split("\t")
    fastq_filelist = split_filelist(cols[14])
    submitted_ftp = split_filelist(cols[15])
    sra_filelist = split_filelist(cols[16])
    if not fastq_filelist:
        if not submitted_ftp:
            return cols[0:14], sra_filelist
        if not sra_filelist:
            return cols[0:14], submitted_ftp
    return cols[0:14], fastq_filelist


def get_report_from_portal(url):
    request = urlrequest.Request(url)
    try:
        response = urlrequest.urlopen(request)
        if response.status == 200:
            return response
        elif response.status == 204:
            print("ERROR: No records of the requested data group are available associated with the provided accession")
        else:
            print("ERROR: " + response.msg + "\n")
            print("ERROR: Unable to fetch data from url: " + url + "\n")
    except urllib.error.HTTPError:
        print("ERROR: request time out")


def download_report_from_portal(url):
    response = get_report_from_portal(url)
    lines = []
    for line in response:
        lines.append(line.decode("utf-8"))
    return lines


def check_availability(accession):
    url = VIEW_URL_BASE + XML_DISPLAY + accession
    try:
        print("Checking availability of " + url)
        requests.get(url)
        return 1
    except urllib.error.URLError:
        return -1


def get_meta_data_from_xml(accession):
    url = "https://www.ncbi.nlm.nih.gov/biosample/?term=" + accession + "&report=full&format=text"
    request = urlrequest.Request(url)
    response = urlrequest.urlopen(request)
    result = ["", "", "", "", ""]
    for line in response:
        line_decode = line.decode("utf-8")
        line_split = line_decode.split("=")
        if line_split[0].strip() == "/collection date":
            result[0] = line_split[1].strip()
        if line_split[0].strip() == "/geographic location":
            result[1] = line_split[1].strip()
        if line_split[0].strip() == "/host":
            result[2] = line_split[1].strip()
        if line_split[0].strip() == "host_disease":
            result[3] = line_split[1].strip()
        if line_split[0].strip() == "/isolation source":
            result[4] = line_split[1].strip()
    return result

def append_links_to_file(ftp_links, path_save):
    with open(os.path.join(path_save, links_txt_file), 'a') as links_file:
        for link in ftp_links:
            links_file.write(f'ftp://{link}\n')

def download_from_ena(accession_code, path_save, option):
    check_path = os.path.isdir(path_save)
    while not check_path:
        print("Path Folder: " + path_save + " is not exist")
        option_path = str(input("You want to create destination directory or input new destination directory ? (Create,"
                                "[c] | Input,[i]): "))
        while option_path not in {"c", "i"}:
            option_path = str(input("I think you have some mistake to input wrong character. Please input again ("
                                    "Create,[c] | Input,[i]): "))
        if option_path in {"c"}:
            try:
                os.mkdir(path_save)
            except FileNotFoundError:
                print("Can not create destination directory (%s)!" % path_save)
                new_path = str(input("Please input your new path: "))
                path_save = new_path
            finally:
                check_path = os.path.isdir(path_save)
        else:
            new_path = str(input("Please input your new path: "))
            path_save = new_path
            check_path = os.path.isdir(path_save)
    check_code = check_availability(accession_code)
    metadata = list()
    ftp_links = list()  # to store fastq ftp links
    if check_code != -1:
        print("Checking availability: Done")
        search_url = get_file_search_query(accession_code)
        print("Get data from: " + search_url)
        lines = download_report_from_portal(search_url)
        for line in lines[1:]:
            meta_data_report, ftp_list = parse_file_search_result_line(line)
            ftp_links.extend(ftp_list)  # append fastq ftp links
            meta_data_xml = get_meta_data_from_xml(meta_data_report[1])
            meta_data_report.extend(meta_data_xml)
            metadata.append(meta_data_report)

        print("Get data: Done")

        # Save ftp links ending in "fastq.gz" to text file
        if option != 1:
            append_links_to_file(ftp_links, path_save)

    else:
        print("ERROR: Record does not exist or is not available for accession provided\n")

    return metadata


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Download Fastq on ENA database. Made by Vinh Chau "
                                                 "(chauvinhtth13@gmail.com)")
    parser.add_argument("-if", "--ifile", type=str, default="",
                        help="Input list accession number by file (.csv)")
    parser.add_argument("-il", "--list", type=str, default="",
                        help="Input list accession number by hand. Format is accession1,...,accessionN. Note: no space "
                             "between accession with comma")
    parser.add_argument("-o", "--output", default=os.getenv("HOME") + "/Downloads", type=str,
                        help="Path directory to save file")
    parser.add_argument("-m", "--meta_file", default="[metadata][" + current_time + "].csv", type=str,
                        help="Filename metadata file")
    parser.add_argument("-op", "--download_option", default=0, type=int,
                        help="0: Default Download Metadata and Fastq file \n "
                             "1: Download Only Metafile \n"
                             "2: Download Only Fastq file ")
    args = parser.parse_args()
    list_accession = list()
    list_wrong = list()
    if args.ifile != "":
        while True:
            filename = args.ifile
            extension = os.path.splitext(filename)[1]
            if extension in ALLOWED_EXTENSIONS:
                break
            else:
                print(
                    "Extension file is not supported. Please input another file (Supported .csv with comma delimited)")
                sys.exit(0)
        with open(filename, "rt", encoding="utf-8-sig") as f:
            file_content = csv.reader(f, delimiter=",")
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

    if args.list != "":
        str_accession = args.list
        for i in str_accession.split(","):
            if get_accession_type(i) != 0:
                list_accession.append(i)
            else:
                list_wrong.append(i)

    if len(list_accession) > 0:
        print("Please check list accession number for download again")
        print("List accession number will be download", len(list_accession), "accession:", str(list_accession))
        print("List accession number will not be download", len(list_wrong), "accession:", str(list_wrong))
        check = str(input("Do you want continue to download ? (Yes,[y] | No,[n]): "))
        while check not in {"yes", "y", "Y", "no", "n", "N"}:
            check = str(input("I think you have some mistake with input wrong character. Please input again (Yes,"
                              "[y] | No,[n]): "))
        if check in {"yes", "y", "Y"}:
            full_metadata = [["study_accession", "sample_accession", "experiment_accession", "run_accession",
                              "submission_accession", "tax_id", "scientific_name", "instrument_model",
                              "library_name", "library_layout", "library_source", "read_count", "first_public",
                              "study_alias", "collection_date", "geographic_location", "host", "host_disease",
                              "isolation_source"]]
            for each_accession in list_accession:
                each_metadata = download_from_ena(each_accession, args.output, args.download_option)
                if not each_metadata:
                    pass
                full_metadata.extend(each_metadata)

            if (args.download_option == 0 or args.download_option == 1):
                with open(os.path.join(args.output, args.meta_file), "w") as f:
                    fc = csv.writer(f, lineterminator="\n")
                    fc.writerows(full_metadata)
                print("Path metadata: " + os.path.join(args.output, args.meta_file))
                print("Done. See ya!!!! ^_^.")

            if (args.download_option == 0 or args.download_option == 2):
                if os.path.exists(os.path.join(args.output, links_txt_file)):
                    subprocess.run([path_to_aria2, '-x', '64', '--continue=true', '-i', os.path.join(args.output, links_txt_file), '-d', args.output])
                else:
                    print(f"ERROR: '{links_txt_file}' not found.")
        else:
            print("Thank you. Bye!! T_T ")
            sys.exit(0)

    else:
        parser.print_help()