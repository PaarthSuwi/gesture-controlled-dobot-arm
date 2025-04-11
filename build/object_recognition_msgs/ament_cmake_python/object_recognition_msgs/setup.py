from setuptools import find_packages
from setuptools import setup

setup(
    name='object_recognition_msgs',
    version='0.4.1',
    packages=find_packages(
        include=('object_recognition_msgs', 'object_recognition_msgs.*')),
)
