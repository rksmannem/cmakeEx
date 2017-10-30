cmake_minimum_required(VERSION 3.2.2)

project(binaryHeapProject)

message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
#message(STATUS "PROJECT_BINARY_DIR = " ${PROJECT_BINARY_DIR})
#message(STATUS "PROJECT_SOURCE_DIR = " ${PROJECT_SOURCE_DIR})
#message(STATUS "CMAKE_CXX_FLAGS = " ${CMAKE_CXX_FLAGS})
#message(STATUS "CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE = " ${CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE})
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-unknown-pragmas -Wno-sign-compare -Woverloaded-virtual -Wwrite-strings -Wno-unused")
#message(STATUS "CMAKE_CXX_FLAGS = " ${CMAKE_CXX_FLAGS})

if (CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_C_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
    set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage -lgcov")
endif()
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

include_directories(
    ${PROJECT_SOURCE_DIR}/../../include
)

set(APP_EXE binaryHeap)

add_executable(${APP_EXE} binaryHeap.cpp)

#Copy the test executable to bin folder
install (TARGETS ${APP_EXE} DESTINATION bin/)