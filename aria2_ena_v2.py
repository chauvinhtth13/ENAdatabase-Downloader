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

# Regular expressions
run_pattern = re.compile("^[EDS]RR\d{6,}$")
experiment_pattern = re.compile("^[EDS]RX\d{6,}$")
sample_patterns = [
    re.compile("^SAM[ND]\d{8}$"),
    re.compile("^SAMEA\d{6,}$"),
    re.compile("^[EDS]RS\d{6,}$")
]
study_patterns = [
    re.compile("^[EDS]RP\d{6,}$"),
    re.compile("^PRJ[EDN][AB]\d+$")
]

def get_accession_type(accession):
    for pattern_type, patterns in enumerate([run_pattern, experiment_pattern] + sample_patterns + study_patterns, start=1):
        if any(pattern.match(accession) for pattern in [patterns]):
            return pattern_type
    return 0

def get_file_search_query(accession):
    return f"{PORTAL_SEARCH_BASE}accession={accession}&result=read_run&fields=study_accession,sample_accession," \
           f"experiment_accession,run_accession," \
           f"submission_accession,tax_id,scientific_name," \
           f"instrument_model,library_name,library_layout," \
           f"library_source,read_count," \
           f"first_public,study_alias,fastq_ftp," \
           f"submitted_ftp,sra_ftp&limit=0"

def split_filelist(filelist_string):
    return filelist_string.strip().split(";") if filelist_string.strip() else []

def parse_file_search_result_line(line):
    cols = line.split("\t")
    fastq_filelist = split_filelist(cols[14])
    submitted_ftp = split_filelist(cols[15])
    sra_filelist = split_filelist(cols[16])
    if not fastq_filelist:
        return cols[0:14], sra_filelist if not submitted_ftp else submitted_ftp
    return cols[0:14], fastq_filelist

def get_report_from_portal(url):
    try:
        with urlrequest.urlopen(url) as response:
            if response.status == 200:
                return response
            elif response.status == 204:
                print("ERROR: No records of the requested data group are available associated with the provided accession")
            else:
                print(f"ERROR: {response.msg}\n")
                print(f"ERROR: Unable to fetch data from url: {url}\n")
    except urllib.error.HTTPError:
        print("ERROR: request time out")

def download_report_from_portal(url):
    try:
        with urlrequest.urlopen(url) as response:
            lines = [line.decode("utf-8") for line in response]
        return lines
    except urllib.error.HTTPError:
        print("ERROR: request time out")

def check_availability(accession):
    url = f"{VIEW_URL_BASE}{XML_DISPLAY}{accession}"
    try:
        print(f"Checking availability of {url}")
        requests.get(url)
        return 1
    except urllib.error.URLError:
        return -1

def get_meta_data_from_xml(accession):
    url = f"https://www.ncbi.nlm.nih.gov/biosample/?term={accession}&report=full&format=text"
    with urlrequest.urlopen(url) as response:
        result = ["", "", "", "", ""]
        for line in response:
            line_decode = line.decode("utf-8")
            line_split = line_decode.split("=")
            for index, field in enumerate(["/collection date", "/geographic location", "/host", "host_disease", "/isolation source"]):
                if line_split[0].strip() == field:
                    result[index] = line_split[1].strip()
    return result

def append_links_to_file(ftp_links, path_save):
    with open(os.path.join(path_save, links_txt_file), 'a') as links_file:
        links_file.write('\n'.join(f'ftp://{link}' for link in ftp_links) + '\n')

def download_from_ena(accession_code, path_save, option):
    while not os.path.isdir(path_save):
        print(f"Path Folder: {path_save} does not exist")
        option_path = str(input("Do you want to create a destination directory or input a new destination directory? (Create, [c] | Input, [i]): "))
        while option_path not in {"c", "i"}:
            option_path = str(input("Invalid input. Please input again (Create, [c] | Input, [i]): "))
        if option_path == "c":
            try:
                os.mkdir(path_save)
            except FileNotFoundError:
                print(f"Cannot create destination directory ({path_save})!")
                new_path = str(input("Please input your new path: "))
                path_save = new_path
        else:
            new_path = str(input("Please input your new path: "))
            path_save = new_path

    check_code = check_availability(accession_code)
    metadata = []
    ftp_links = []
    if check_code != -1:
        print("Checking availability: Done")
        search_url = get_file_search_query(accession_code)
        print(f"Get data from: {search_url}")
        lines = download_report_from_portal(search_url)
        for line in lines[1:]:
            meta_data_report, ftp_list = parse_file_search_result_line(line)
            ftp_links.extend(ftp_list)
            meta_data_xml = get_meta_data_from_xml(meta_data_report[1])
            meta_data_report.extend(meta_data_xml)
            metadata.append(meta_data_report)

        print("Get data: Done")

        # Save ftp links ending in "fastq.gz" to links.txt
        if option != 1:
            append_links_to_file(ftp_links, path_save)
    else:
        print("ERROR: Record does not exist or is not available for the provided accession\n")

    return metadata

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Download Fastq on ENA database by using aria2 package. Made by tnmquann (github.com/tnmquann), inspired by Vinh Chau (chauvinhtth13@gmail.com)")
    parser.add_argument("-if", "--ifile", type=str, default="", help="Input list accession number by file (.csv)")
    parser.add_argument("-il", "--list", type=str, default="", help="Input list accession number by hand. Format is accession1,...,accessionN. Note: no space between accession with comma")
    parser.add_argument("-o", "--output", default=os.getenv("HOME") + "/Downloads", type=str, help="Path directory to save file")
    parser.add_argument("-m", "--meta_file", default=f"[metadata][{current_time}].csv", type=str, help="Filename metadata file")
    parser.add_argument("-op", "--download_option", default=0, type=int,
                        help="0: Default Download Metadata and Fastq file \n "
                             "1: Download Only Metafile \n"
                             "2: Download Only Fastq file ")
    args = parser.parse_args()

    list_accession = []
    list_wrong = []

    if args.ifile:
        filename = args.ifile
        extension = os.path.splitext(filename)[1]
        if extension in ALLOWED_EXTENSIONS:
            with open(filename, "rt", encoding="utf-8-sig") as f:
                file_content = csv.reader(f, delimiter=",")
                for i in file_content:
                    if len(i) == 1:
                        list_accession.extend(j for j in i if get_accession_type(j) != 0)
                        list_wrong.extend(j for j in i if get_accession_type(j) == 0)
                    else:
                        list_accession.extend(j for i in i if get_accession_type(j) != 0)
                        list_wrong.extend(j for i in i if get_accession_type(j) == 0)

    if args.list:
        str_accession = args.list
        list_accession.extend(i for i in str_accession.split(",") if get_accession_type(i) != 0)
        list_wrong.extend(i for i in str_accession.split(",") if get_accession_type(i) == 0)

    if list_accession:
        print("Please check list accession number for download again")
        print(f"List accession number will be downloaded: {len(list_accession)} accession: {list_accession}")
        print(f"List accession number will not be downloaded: {len(list_wrong)} accession: {list_wrong}")
        check = str(input("Do you want to continue to download? (Yes, [y] | No, [n]): "))
        while check.lower() not in {"yes", "y", "no", "n"}:
            check = str(input("Invalid input. Please input again (Yes, [y] | No, [n]): "))
        if check.lower() in {"yes", "y"}:
            full_metadata = [
                ["study_accession", "sample_accession", "experiment_accession", "run_accession",
                 "submission_accession", "tax_id", "scientific_name", "instrument_model",
                 "library_name", "library_layout", "library_source", "read_count", "first_public",
                 "study_alias", "collection_date", "geographic_location", "host", "host_disease",
                 "isolation_source"]
            ]
            for each_accession in list_accession:
                each_metadata = download_from_ena(each_accession, args.output, args.download_option)
                if each_metadata:
                    full_metadata.extend(each_metadata)

            if args.download_option in {0, 1}:
                with open(os.path.join(args.output, args.meta_file), "w") as f:
                    fc = csv.writer(f, lineterminator="\n")
                    fc.writerows(full_metadata)
                print(f"Path to metadata: {os.path.join(args.output, args.meta_file)}")
                print("Done.")

            if args.download_option in {0, 2}:
                links_file_path = os.path.join(args.output, links_txt_file)
                if os.path.exists(links_file_path):
                    subprocess.run([path_to_aria2, '-x', '64', '--continue=true', '-i', links_file_path, '-d', args.output])
                else:
                    print(f"ERROR: '{links_txt_file}' not found!")
        else:
            print("Thank you. Goodbye :)")
            sys.exit(0)
    else:
        parser.print_help()