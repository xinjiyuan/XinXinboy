cmake_minimum_required(VERSION 2.8)

project(Eigen)

set(CMAKE_BUILD_TYPE Debug)

include_directories("/usr/include/eigen3")

add_executable(EigenMatrix eigenMatrix.cpp)

