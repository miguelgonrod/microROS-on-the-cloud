from setuptools import find_packages
from setuptools import setup

setup(
    name='unique_identifier_msgs',
    version='2.2.1',
    packages=find_packages(
        include=('unique_identifier_msgs', 'unique_identifier_msgs.*')),
)
