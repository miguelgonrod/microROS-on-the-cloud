from setuptools import find_packages
from setuptools import setup

setup(
    name='statistics_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('statistics_msgs', 'statistics_msgs.*')),
)
