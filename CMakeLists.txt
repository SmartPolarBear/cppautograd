cmake_minimum_required(VERSION 3.22)
project(cppautograd)

set(CMAKE_CXX_STANDARD 23)

add_executable(cppautograd main.cpp)

add_subdirectory(computational_graph)
add_subdirectory(operators)
add_subdirectory(tensor)
add_subdirectory(variable)
