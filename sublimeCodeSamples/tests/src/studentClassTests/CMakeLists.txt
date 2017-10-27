set (PROJ_DIR "$ENV{HOME}/mydev/sublimeCodeSamples")
set (PROJ_INC "${PROJ_DIR}/include")
set (PROJ_LIB "${PROJ_DIR}/lib")
set (PROJ_TESTS "${PROJ_DIR}/tests")
set (PROJ_BIN "${PROJ_DIR}/bin")
set (CURRENT_TEST "$ENV{PWD}")


#set test src Files
set (TEST_SRCS "${CURRENT_TEST}/*.cpp")

#set (CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

cmake_minimum_required(VERSION 3.2.2)
project(studentClassTest)

#For the shared library:
#set ( PROJECT_DYNAMIC_LINK_LIBS "${PROJ_LIB}/libtestStudent_shared.so" )
#link_directories(${PROJ_INC})

#For the static library:
set ( PROJECT_STATIC_LINK_LIBS "${PROJ_LIB}/libtestStudent_static.a" )
link_directories( ${PROJ_INC})

find_package(GTest REQUIRED)
include_directories(
	${GTEST_INCLUDE_DIRS}
	${PROJ_INC}
	)

#Test for student class
set ( TESTEXE studentTests)
add_executable(${TESTEXE} ${PROJ_TESTS}/Main_TestAll.cpp test_Student_Class.cpp)
target_link_libraries(${TESTEXE} ${PROJECT_STATIC_LINK_LIBS} ${GTEST_LIBRARIES} pthread)


#Copy the test executable to bin folder
install (TARGETS ${TESTEXE} DESTINATION bin/)
