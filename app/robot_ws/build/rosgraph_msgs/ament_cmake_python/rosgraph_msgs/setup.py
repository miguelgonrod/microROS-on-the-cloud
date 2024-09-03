from setuptools import find_packages
from setuptools import setup

setup(
    name='rosgraph_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('rosgraph_msgs', 'rosgraph_msgs.*')),
)
