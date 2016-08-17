cmake_minimum_required(VERSION 3.6)
project(CppLessons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(SOURCE_FILES main.cpp Task_03.h Task_04.h Task_03.cpp Task_04.cpp Task_05.h Task_05.cpp)
add_executable(CppLessons ${SOURCE_FILES})