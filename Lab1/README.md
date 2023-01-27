## Lab 1: CMake and Toolchain
Following [NYU Proc Design Lab 1](https://nyu-processor-design.github.io/getting_started/onboarding/01_cmake.html)
Written by Kevin Yap

### Questions
#### 1. The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
The files are relative to the parent directory of the CMakeLists.txt file becaues cmake is run in the build directory which means it cannot be relative to the path that cmake is run at.

#### 2. WHat are some differences between cmake and ninja?
CMake doesn't create the executable files. It only creates files that help describe a toolchain and choose which files are built and configure the build to work with multiple architectures.
make and ninja are the programs that create the executable file from the CMake configuration and code.

#### 3. Why is it important to run cmake in its own directory?
CMake is run in its own directory because it creates many different files and directories which can clutter up a workspace if left in the parent directory. So these files are moved to their own build directory which is self contained.
