# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.10.2)

project(grandmaster-mining)
# Force project to abide by the C++ 14 standard
set(CMAKE_CXX_STANDARD 14)

# Outline directory structure for source and helper files
include_directories(includes)
file(GLOB SOURCES src/*.cpp)

# compiles all SOURCES into an executable EXEC
set(EXEC grandmaster-mining)
add_executable(${EXEC} ${SOURCES})
