from distutils.core import Extension, setup
from Cython.Build import cythonize
# define an extension that will be cythonized and compiled
ext = Extension(name="ENAdatabase_Downloader", sources=["ENAdatabase_Downloader_py2.py"])
setup(ext_modules=cythonize(ext))