cmake_minimum_required(VERSION 3.23)
project(STL_TEST)

set(CMAKE_CXX_STANDARD 14)

add_executable(STL_TEST main.cpp stl/Vector.h)
