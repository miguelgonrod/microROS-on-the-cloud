from setuptools import find_packages
from setuptools import setup

setup(
    name='stereo_msgs',
    version='4.2.4',
    packages=find_packages(
        include=('stereo_msgs', 'stereo_msgs.*')),
)
