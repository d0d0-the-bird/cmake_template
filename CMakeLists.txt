cmake_minimum_required(VERSION 3.12.2)

# If you dont have CC and CXX global variables set you can set compilers manualy.
set(CMAKE_C_COMPILER "D:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "D:/MinGW/bin/g++.exe")

# Define project name.
project (cmake_tut)

include_directories("./mydir1/"
                    "./mydir2/")

# Adding sources to compilation.
add_executable(cmake_tut ./main.c
                         ./mydir1/test.c
                         ./mydir2/test.cpp)
