project(SrcUtilTest)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/googletest/googletest/include)

# 读取当前目录及子目录的所有头文件和源文件，存储到 TEST_SRC_UTIL 变量中
FILE(GLOB_RECURSE TEST_SRC_UTIL "*.cpp" "*.h")

add_executable(${PROJECT_NAME} ${TEST_SRC_UTIL})

target_link_libraries(${PROJECT_NAME} src gtest_main)