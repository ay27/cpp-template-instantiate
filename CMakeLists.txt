cmake_minimum_required(VERSION 3.6)
project(lib_test)

set(SOURCE_FILES func.h func.cpp)
add_library(lib_test SHARED ${SOURCE_FILES})
