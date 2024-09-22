CMake C/C++ Minimalistic Template
This solution aims to be a simple, well-designed implementation of CMake, subdivided into projects and using git submodules to import dependencies.

Solution layout of the template
root
├── app (executable project)
│   └── inc
│   └── src
│   └── CMakeLists.txt (configuration of the project)
│
├── libs (dependencies)
│   └── inc
│   └── src
|   └── CMakeLists.txt (configuration of the project)
│
└── CMakeLists.txt (configuration of the solution)
The solution is segregated by projects, to subdivide the code base, bringing more abstraction and reducing the compile time of the whole solution. Thus, each project has the same internal layout (such as app and vectorLib):

project
├── include
├── src
├── test
│   └── src
│   └── CMakeLists.txt
└── CMakeLists.txt
Finally, there is a folder called lib at the root of the solution for external dependencies, such as Google test.

CMakeLists files governance
The solution has several CMakeLists.txt to respect the single responsibility principle and therefore, prevent to have a single big file that contains all the configuration. Each of them are completely documented and easy to read/understand.

Building
Once git and cmake installed, execute the following commands:

git clone --recursive git@github.com:ZenLulz/cmake-cpp-minimalistic-template.git
cd cmake-cpp-minimalistic-template
mkdir build && cd build
cmake ..
make
