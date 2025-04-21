cmake_minimum_required(VERSION 3.12)

project(MathUtilsLib)

add_library(math_utils private/math_utils.cpp)

target_include_directories(math_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)
