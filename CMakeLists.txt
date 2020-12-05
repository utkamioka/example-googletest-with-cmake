cmake_minimum_required(VERSION 3.16)
project(example_googletest_with_cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(main src/main.cpp src/factorial.cpp)