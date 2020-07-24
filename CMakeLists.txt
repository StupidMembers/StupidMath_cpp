cmake_minimum_required(VERSION 3.16)
project(StupidMath)

set(CMAKE_CXX_STANDARD 20)

add_library(StupidMath SHARED stupidmath.cpp stupidmath.h)

add_executable(test test.cpp stupidmath.h stupidmath.cpp)