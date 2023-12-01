# ENA Database Downloader
Using download multi fastq on ENA database
## Overview
`ENAdatabase-Downloader` is a versatile tool for effortlessly downloading FASTQ sequences and metadata from the European Nucleotide Archive (ENA). This tool is written on Python, providing an 'easy-to-use command-line interface' and enhanced download speed compared to traditional method like `wget`.

## Features
- **Easy to Use:** simplifies the process of downloading FASTQ sequences and metadata from ENA.
- **Compatibility:** optimized for Unix operating systems and maintains good compatibility with Windows.
- **Fast Load Speed:** increase download speeds compared to traditional tools like `wget` on Unix systems.
- **Customizable:** easily adjustable, allowing users to tailor the tool for specific download requirements.

## Inspiration
This tool draws inspiration from notable repositories:
- [ENAdatabase-Downloader](https://github.com/chauvinhtth13/enadatabase-downloader)
- [aria2](https://github.com/aria2/aria2)
- [aria2c_modified](https://github.com/whtjeon/aria2c_modified)

## Versions
### Version 1 ([ENAdatabase_Downloader.py](https://github.com/chauvinhtth13/ENAdatabase-Downloader/blob/main/ENAdatabase_Downloader.py))
The initial version, following the structure of the original by [@chauvinhtth13](https://github.com/chauvinhtth13), without integration of `aira2`.
### Version 2 ([aria2_ena_v1.py](https://github.com/tnmquann/ENAdatabase-Downloader/blob/main/aria2_ena_v1.py))
Integrated `aria2` into the tool with notable changes:
- Import `subprocess` package
- Remove `tqdm.auto` module and download progress bar
- Remove `sub_download` function
- Support for output results containing download links for `fastq.gz` files.
### Version 3 ([aria2_ena_v2.py](https://github.com/tnmquann/ENAdatabase-Downloader/blob/main/aria2_ena_v2.py))
Building upon the improvements in Version 2, Version 3 introduces:
- Combined similar regular expression patterns into lists for better readability.
- Used f-strings for string formatting for improved readability.
- Combined multiple elif statements into a single loop in get_accession_type for simplicity.
- Simplified the use of with statements for file operations.
- Adjusted conditional checks and input validations for better user interaction.

## Requirements
* Python >= 3.10 (for version 2 & 3)
* aria2 >= 1.36.0

## Usages
1. Clone the repository.
   ```
    git clone https://github.com/tnmquann/ENAdatabase-Downloader.git
   ```
2. Ensure `aria2` is installed.
4. Replace `'PATH_TO_ARIA2'` in the code with the actual path to `aria2` on your computer.
5. Run the tool, providing the necessary parameters for downloading sequences.

## Options

```
 -if, --ifile DIR_TO_FILE                  Input list accession number by text file (*.txt, *.csv, .etc).
                                           Each accession should be written into separate lines.
 -il, --ilist STRING                       Input list accession number by string.
                                           Each accession should be separated by comma, without any spaces between. For example: accession_1,accession_2,...,accession_N.
 -o, --output DIR                          Path to output directory.
 -m, --meta_file NAME                      Change the name of metadata `*.csv` file output.
 -op, --download_option NUMBER             Change download option (default = 0).
                                           0: Download both `fastq.gz` files and metadata
                                           1: Download only metadata
                                           2: Download only `fastq.gz` files.
```

## Notes
- In `aria2`, the option `max-connections-per-server` is hardcode limit to 16, if you want to increase the connection, you have to build your own version by following [original instruction](https://github.com/aria2/aria2?tab=readme-ov-file#how-to-build) **or** download the custom version from [Whtjeon's repository](https://github.com/WHTJEON/aria2c_modified)
- You can use other package to download data instead of using `aria2`.
- Other customization for `aria2` please following at the developer's [homepage](https://github.com/aria2/aria2).

## How to cite
- Version 1:
```
@misc{ENACV,
  author = {Vinh Chau},
  title = {ENAdatabase-Downloader},
  year = {2018},
  publisher = {GitHub},
  journal = {GitHub repository},
  howpublished = {\url{https://github.com/chauvinhtth13/ENAdatabase-Downloader}},
}
```
- Version 2 & 3:
```
@misc{tnmquannENACV,
  author = {Minh-Quan Ton-Ngoc}
  title = {tnmquann/{{ENAdatabase-Downloader}}: {{Using}} aria2 package to download multi FASTQ on {{ENA}} Database.},
  urldate = {2023-11-22},
  howpublished = {\url{https://github.com/tnmquann/ENAdatabase-Downloader}},
}
```
Feel free to explore the different versions and choose the one that best fits your needs. Happy coding!
