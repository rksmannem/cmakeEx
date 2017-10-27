add_compile_options(-std=c++11)

cmake_minimum_required(VERSION 3.2.2)

project(MyGoogleUnitTestProj)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#add_subdirectory(src/studentClassTests)
#add_subdirectory(src/calcClassTests)
#add_subdirectory(src/AdditionTests)
#add_subdirectory(src/MultiplyTests)
add_subdirectory(src/StackTests)
