cmake_minium_required(VERSION 2.8)

project(ch3_homework)

set(CMAKE_BUILD_TYPE "Debug")

add_executable(homework ch3_homework.cpp)
include_directories("/usr/include/eigen3")