from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_generator_c',
    version='3.1.5',
    packages=find_packages(
        include=('rosidl_generator_c', 'rosidl_generator_c.*')),
)
