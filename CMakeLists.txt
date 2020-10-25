cmake_minimum_required(VERSION 3.15)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_CXX_FLAGS "-Wall -Wextra")

#if (WIN32)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -mwindows")
#endif(WIN32)

project(Drivee)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(resources)

add_subdirectory(src)