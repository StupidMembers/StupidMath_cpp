cmake_minimum_required(VERSION 3.16)
project(StupidMath)

set(CMAKE_CXX_STANDARD 20)

add_library(StupidMath SHARED stupid_math.cpp stupid_math.h)

add_executable(test test.cpp stupid_math.h stupid_math.cpp)