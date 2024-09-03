from setuptools import find_packages
from setuptools import setup

setup(
    name='visualization_msgs',
    version='4.2.4',
    packages=find_packages(
        include=('visualization_msgs', 'visualization_msgs.*')),
)
