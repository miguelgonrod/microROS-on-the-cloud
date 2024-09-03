from setuptools import find_packages
from setuptools import setup

setup(
    name='shape_msgs',
    version='4.2.4',
    packages=find_packages(
        include=('shape_msgs', 'shape_msgs.*')),
)
