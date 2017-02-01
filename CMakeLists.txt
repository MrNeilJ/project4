cmake_minimum_required(VERSION 3.6)
project(project4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        smallSort.cpp
        hailstone.cpp
        fallDistance.cpp)
add_executable(project4 ${SOURCE_FILES})