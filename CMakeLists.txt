cmake_minimum_required(VERSION 3.16)
project(StupidMath)

set(CMAKE_CXX_STANDARD 20)

add_library(StupidMath SHARED library.cpp library.h)

add_executable(test test.cpp library.h library.cpp)