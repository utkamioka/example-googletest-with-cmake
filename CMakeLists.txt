cmake_minimum_required(VERSION 3.14)
project(example_googletest_with_cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(main src/main.cpp src/factorial.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/6b74da4757a549563d7c37c8fae3e704662a043b.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${PROJECT_NAME}-googletest src/factorial.cpp test/test_factorial.cpp)
target_link_libraries(${PROJECT_NAME}-googletest gtest_main)
target_include_directories(${PROJECT_NAME}-googletest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

#include(GoogleTest)
#gtest_discover_tests(${PROJECT_NAME}-googletest)
add_test(NAME test COMMAND ${PROJECT_NAME}-googletest)
enable_testing()
