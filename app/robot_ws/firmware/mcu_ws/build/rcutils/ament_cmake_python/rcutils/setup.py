from setuptools import find_packages
from setuptools import setup

setup(
    name='rcutils',
    version='5.1.6',
    packages=find_packages(
        include=('rcutils', 'rcutils.*')),
)
