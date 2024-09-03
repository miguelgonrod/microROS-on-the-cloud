from setuptools import find_packages
from setuptools import setup

setup(
    name='builtin_interfaces',
    version='1.2.1',
    packages=find_packages(
        include=('builtin_interfaces', 'builtin_interfaces.*')),
)
