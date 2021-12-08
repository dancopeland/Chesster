from setuptools import setup

package_name = 'py_chester_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='daniel.i.copeland@vanderbilt.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "light_controller = py_chester_pkg.light_controller:main",
            "py_test = py_chester_pkg.OOP_example_node:main"
        ],
    },
)
