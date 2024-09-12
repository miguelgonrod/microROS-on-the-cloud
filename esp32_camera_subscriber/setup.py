from setuptools import find_packages, setup

package_name = 'esp32_camera_subscriber'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Miguel Angel Gonzalez Rodriguez',
    maintainer_email='miguel_gonzalezr@ieee.org',
    description='This package contains the nodes to check the image sent by microROS, and process the image sent',
    license='BSD-3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera = esp32_camera_subscriber.camera:main',
            'sign_recognition = esp32_camera_subscriber.sign_recognition:main',
        ],
    },
)
