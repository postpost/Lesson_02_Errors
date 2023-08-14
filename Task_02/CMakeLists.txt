cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Task02_Errors)
set(SOURCES_FILE main.cpp func.h func.cpp)
add_executable(Task02_Errors ${SOURCES_FILE})
