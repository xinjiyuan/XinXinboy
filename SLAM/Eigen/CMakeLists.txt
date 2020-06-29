#声明要求的cmake的最低版本
cmake_minimum_required(VERSION 2.8)

#声明一个cmake工程
project(Geometry)

#设置编译模式
set(CMAKE_BUILD_TYPE "Debug")

#添加Eigen头文件
include_directories("/usr/include/eigen3")

#添加一个可执行程序
#语法: add_executable(程序名 源代码文件)
add_executable(useGeometry useGeometry.cpp)

