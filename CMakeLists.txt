cmake_minimum_required(VERSION 3.7)

project(demo CXX)
add_executable ( ${PROJECT_NAME} main.cc )

include("${CMAKE_SOURCE_DIR}/cmake/ClangSanitizer.cmake")

