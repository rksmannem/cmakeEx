#set (CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

cmake_minimum_required(VERSION 3.2.2)
project(studentLib)
set(CMAKE_BUILD_TYPE, Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(testStudent_shared SHARED ${SOURCES})
add_library(testStudent_static STATIC ${SOURCES})

#install (TARGETS "./build/libtestStudent_shared*" DESTINATION ./lib)
set ( TEST_STATIC_LIB testStudent_static)
ADD_CUSTOM_COMMAND(TARGET ${TEST_STATIC_LIB} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy
                   "${CMAKE_SOURCE_DIR}/build/*.a"
                   "${CMAKE_SOURCE_DIR}/lib/"
                   )

set ( TEST_DYN_LIB testStudent_static)
ADD_CUSTOM_COMMAND(TARGET ${TEST_DYN_LIB} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy
                   "${CMAKE_SOURCE_DIR}/build/*.so"
                   "${CMAKE_SOURCE_DIR}/lib/"
                   )