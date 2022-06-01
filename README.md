# ENA-database-Dowloader
Using download multi fastq on ENA database

Requitment:
Python 2.7.18
tqdm

python Ebidatabase_Downloader.py -h
optional arguments:
  -h, --help            show this help message and exit
  -i IFILE, --ifile IFILE
                        Input list accession number by file (.csv)
  -l LIST, --list LIST  Input list accession number by hand. Format is
                        accesion1,...,accessionN. Note: no space between
                        accession with comma
  -o OUTPUT, --output OUTPUT
                        Path directory to save file