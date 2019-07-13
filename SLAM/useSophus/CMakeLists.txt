cmake_minimum_required(VERSION 2.8)

project(useSophus)

set(CMAKE_BUILD_TYPE "Debug")

find_package(Sophus REQUIRED)
add_executable(useSophus useSophus.cpp)
include_directories("/usr/include/eigen3")
include_directories(${Sophus_INCLUDE_DIRS})