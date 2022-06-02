import ftplib
ftp = ftplib.FTP('ftp.sra.ebi.ac.uk')
ftp.login()
ftp.cwd('vol1')
ftp.cwd('fastq')