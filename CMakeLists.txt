cmake_minimum_required(VERSION 3.22)
project(cppautograd)

set(CMAKE_CXX_STANDARD 23)

add_library(cppautograd STATIC main.cpp)

add_subdirectory(libs)
target_link_libraries(cppautograd
        INTERFACE eigen
        INTERFACE xtensor
        INTERFACE xtl
        INTERFACE GSL
        INTERFACE fmt::fmt)

add_subdirectory(computational_graph)
add_subdirectory(operators)
add_subdirectory(variables)

add_subdirectory(examples)
