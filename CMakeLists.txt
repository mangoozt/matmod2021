cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled second.cpp)
add_executable(untitled1_1 second_1.cpp)
add_executable(untitled1_2 second_2.cpp)
add_executable(untitled2 third_1.cpp)

add_executable(function_table function_table.cpp)
add_executable(function_table_2 function_table_2.cpp strutils.cpp)