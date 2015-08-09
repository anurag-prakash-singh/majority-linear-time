cmake_minimum_required(VERSION 3.2)
project(majority_linear_time)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(majority_linear_time ${SOURCE_FILES})