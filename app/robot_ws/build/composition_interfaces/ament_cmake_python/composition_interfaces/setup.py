from setuptools import find_packages
from setuptools import setup

setup(
    name='composition_interfaces',
    version='1.2.1',
    packages=find_packages(
        include=('composition_interfaces', 'composition_interfaces.*')),
)
