from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_cmake',
    version='3.1.5',
    packages=find_packages(
        include=('rosidl_cmake', 'rosidl_cmake.*')),
)
