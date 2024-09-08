from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_generator_dds_idl',
    version='0.8.1',
    packages=find_packages(
        include=('rosidl_generator_dds_idl', 'rosidl_generator_dds_idl.*')),
)
