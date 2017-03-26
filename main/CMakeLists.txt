cmake_minimum_required(VERSION 3.6)
project(lib_test)

add_executable(main main.cpp)
target_link_libraries(main /Users/ay27/ClionProjects/lib_test/cmake-build-debug/liblib_test.dylib)