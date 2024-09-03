from setuptools import find_packages
from setuptools import setup

setup(
    name='complex_msgs',
    version='3.0.2',
    packages=find_packages(
        include=('complex_msgs', 'complex_msgs.*')),
)
