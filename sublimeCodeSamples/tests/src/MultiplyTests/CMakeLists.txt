set (PROJ_DIR "$ENV{HOME}/mydev/sublimeCodeSamples")
set (PROJ_INC "${PROJ_DIR}/include")
set (PROJ_SRC "${PROJ_DIR}/src")
set (PROJ_LIB "${PROJ_DIR}/lib")
set (PROJ_TESTS "${PROJ_DIR}/tests")
set (PROJ_BIN "${PROJ_DIR}/bin")
set (CURRENT_TEST "$ENV{PWD}")


#set (CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

cmake_minimum_required(VERSION 3.2.2)
project(MultiplyTest)

find_package(GTest REQUIRED)
include_directories(
	${GTEST_INCLUDE_DIRS}
	${PROJ_INC}
	)

#Test for calc class
set( TEST_EXE MultiplyTests)
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${PROJ_SRC}/Multiply.cpp")
add_executable(${TEST_EXE} ${PROJ_TESTS}/Main_TestAll.cpp ${SOURCES})
target_link_libraries(${TEST_EXE} ${GTEST_LIBRARIES} pthread)

#Copy the test executable to bin folder
install (TARGETS ${TEST_EXE} DESTINATION bin/)