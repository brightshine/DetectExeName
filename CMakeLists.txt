cmake_minimum_required(VERSION 3.7)
project(demo CXX)
find_package (Threads)

add_executable ( ${PROJECT_NAME} main.cc )
target_link_libraries ( ${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})

###############  BUILD TYPE ################################################
if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "CMAKE_BUILD_TYPE not given, defaulting to 'Debug'.")
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
endif()
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")


include("${CMAKE_SOURCE_DIR}/cmake/ClangSanitizer.cmake")



