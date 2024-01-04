cmake_minimum_required(VERSION 3.10)

project(dijkstra)

# Set build directory
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/src)
add_executable(dijkstra main.cpp src/dijkstra.cpp)

set(EXECUTABLE_OUTPUT_PATH ../exec)
