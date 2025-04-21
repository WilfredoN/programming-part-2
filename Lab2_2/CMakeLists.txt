cmake_minimum_required(VERSION 3.12)

project(ModularCMakeProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)

add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE math_utils)

add_compile_options(-Wall -Wextra -Wpedantic)
