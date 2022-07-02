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
from multiprocessing.pool import ThreadPool

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
    if is_study(accession) or is_sample(accession) or is_experiment(accession):
        url = VIEW_URL_BASE + XML_DISPLAY + accession
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
    else:
        print("Your accession code is not supported. "
              "Please input another code ([EDS]RR, [EDS]RX, [EDS]RP, PRJ[EDN], SAM[ND], SAMEA, [EDS]RS)")
        return -1

list_code = ['ERS3050782','ERS3050783','ERS3050785','ERS3050788','ERS3050789','ERS3050791','ERS3050792','ERS3050793','ERS3050794','ERS3050795','ERS3050796','ERS3050797','ERS3050798','ERS3050799','ERS3050800','ERS3050801','ERS3050803','ERS3050808','ERS3050809','ERS3050810','ERS3050811','ERS3050813','ERS3050814','ERS3050817','ERS3050818','ERS3050819','ERS3050821','ERS3050823','ERS3050824','ERS3050826','ERS3050830','ERS3050833','ERS3050834','ERS3050835','ERS3050836','ERS3050839','ERS3050840','ERS3050841','ERS3050845','ERS3050848','ERS3050849','ERS3050850','ERS3050851','ERS3050853','ERS3050855','ERS3050857','ERS3050859']

list_ERR = {}
for i in list_code:
    result = check_accession_number(i)
    list_ERR[i]=result

import csv
with open('ERStoERR.csv', 'w') as f:
    for key in list_ERR.keys():
        f.write("%s,%s\n"%(key,list_ERR[key]))