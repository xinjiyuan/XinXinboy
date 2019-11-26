#声明要求的cmake的最低版本
cmake_minimum_required(VERSION 2.8)

#声明一个cmake工程
project(Hello)

#设置编译模式
set(CMAKE_BUILD_TYPE "Debug")

#添加一个可执行程序
#语法: add_executable(程序名 源代码文件)
add_executable(HelloWorld Test1.cpp)

#生成静态库
add_library(Hello libTest1.cpp)

#生成共享库
add_library(Hello_share SHARED libTest1.cpp)

#调用共享库
#生成一个可执行程序
add_executable(useHello useHello.cpp)
#链接库
target_link_libraries(useHello Hello_share)
