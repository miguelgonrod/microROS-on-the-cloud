from setuptools import find_packages
from setuptools import setup

setup(
    name='action_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('action_msgs', 'action_msgs.*')),
)
