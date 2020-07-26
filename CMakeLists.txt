cmake_minimum_required(VERSION 3.16)
project(StupidMath)

set(CMAKE_CXX_STANDARD 20)

add_library(StupidMath SHARED number_theory.cpp probability.cpp stupid_math.cpp stupid_math.h)

add_executable(test test.cpp number_theory.cpp probability.cpp stupid_math.cpp stupid_math.h)