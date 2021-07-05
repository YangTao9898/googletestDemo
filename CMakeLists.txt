# cmake_minimum_required(VERSION <specify CMake version here>)
project(letcode)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory("src")
add_subdirectory("test")
add_subdirectory("googletest")

#FILE(GLOB_RECURSE TEST_SRC "${CMAKE_SOURCE_DIR}/*.cpp" "${CMAKE_SOURCE_DIR}/*.h")

enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/googletest/googletest/include)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} src gtest_main)
