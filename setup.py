import sys
from cx_Freeze import setup, Executable

setup(name="myProgram", version="0.1", description="", executables=[Executable("ENAdatabase_Downloader_py2.py")])