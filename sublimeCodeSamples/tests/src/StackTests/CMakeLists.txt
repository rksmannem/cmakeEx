set (PROJ_DIR "$ENV{HOME}/mydev/sublimeCodeSamples")
set (PROJ_INC "${PROJ_DIR}/include")
set (PROJ_SRC "${PROJ_DIR}/src")
set (PROJ_SRC_STACK "${PROJ_SRC}/Stack")
set (PROJ_LIB "${PROJ_DIR}/lib")
set (PROJ_TESTS "${PROJ_DIR}/tests")
set (PROJ_BIN "${PROJ_DIR}/bin")
set (CURRENT_TEST "$ENV{PWD}")

# enable coverage analysis using GCC and GCOV
if (CMAKE_COMPILER_IS_GNUCC)
	set(CMAKE_C_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
	set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage -lgcov")
endif()

set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

#set (CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

cmake_minimum_required(VERSION 3.2.2)
project(StackTest)

find_package(GTest REQUIRED)
include_directories(
	${GTEST_INCLUDE_DIRS}
	${PROJ_INC}
	)

#Test for calc class
set( TEST_EXE StackTests)
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${PROJ_SRC_STACK}/Stack.cpp")
add_executable(${TEST_EXE} ${PROJ_TESTS}/Main_TestAll.cpp ${SOURCES})
target_link_libraries(${TEST_EXE} ${GTEST_LIBRARIES} pthread)

#Copy the test executable to bin folder
install (TARGETS ${TEST_EXE} DESTINATION bin/)
