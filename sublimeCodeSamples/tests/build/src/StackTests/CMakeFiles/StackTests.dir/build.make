# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build

# Include any dependencies generated for this target.
include src/StackTests/CMakeFiles/StackTests.dir/depend.make

# Include the progress variables for this target.
include src/StackTests/CMakeFiles/StackTests.dir/progress.make

# Include the compile flags for this target's objects.
include src/StackTests/CMakeFiles/StackTests.dir/flags.make

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o: src/StackTests/CMakeFiles/StackTests.dir/flags.make
src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o: ../Main_TestAll.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/StackTests.dir/__/__/Main_TestAll.o -c /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/Main_TestAll.cpp

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackTests.dir/__/__/Main_TestAll.i"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/Main_TestAll.cpp > CMakeFiles/StackTests.dir/__/__/Main_TestAll.i

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackTests.dir/__/__/Main_TestAll.s"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/Main_TestAll.cpp -o CMakeFiles/StackTests.dir/__/__/Main_TestAll.s

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.requires:
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.requires

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.provides: src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.requires
	$(MAKE) -f src/StackTests/CMakeFiles/StackTests.dir/build.make src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.provides.build
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.provides

src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.provides.build: src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o: src/StackTests/CMakeFiles/StackTests.dir/flags.make
src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o: ../src/StackTests/Stack_Test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/StackTests.dir/Stack_Test.o -c /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/src/StackTests/Stack_Test.cpp

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackTests.dir/Stack_Test.i"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/src/StackTests/Stack_Test.cpp > CMakeFiles/StackTests.dir/Stack_Test.i

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackTests.dir/Stack_Test.s"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/src/StackTests/Stack_Test.cpp -o CMakeFiles/StackTests.dir/Stack_Test.s

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.requires:
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.requires

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.provides: src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.requires
	$(MAKE) -f src/StackTests/CMakeFiles/StackTests.dir/build.make src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.provides.build
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.provides

src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.provides.build: src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o: src/StackTests/CMakeFiles/StackTests.dir/flags.make
src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o: /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o -c /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.cpp

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.i"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.cpp > CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.i

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.s"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.cpp -o CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.s

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.requires:
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.requires

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.provides: src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.requires
	$(MAKE) -f src/StackTests/CMakeFiles/StackTests.dir/build.make src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.provides.build
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.provides

src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.provides.build: src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o

# Object files for target StackTests
StackTests_OBJECTS = \
"CMakeFiles/StackTests.dir/__/__/Main_TestAll.o" \
"CMakeFiles/StackTests.dir/Stack_Test.o" \
"CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o"

# External object files for target StackTests
StackTests_EXTERNAL_OBJECTS =

src/StackTests/StackTests: src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o
src/StackTests/StackTests: src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o
src/StackTests/StackTests: src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o
src/StackTests/StackTests: src/StackTests/CMakeFiles/StackTests.dir/build.make
src/StackTests/StackTests: /usr/lib/libgtest.a
src/StackTests/StackTests: src/StackTests/CMakeFiles/StackTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable StackTests"
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/StackTests/CMakeFiles/StackTests.dir/build: src/StackTests/StackTests
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/build

src/StackTests/CMakeFiles/StackTests.dir/requires: src/StackTests/CMakeFiles/StackTests.dir/__/__/Main_TestAll.o.requires
src/StackTests/CMakeFiles/StackTests.dir/requires: src/StackTests/CMakeFiles/StackTests.dir/Stack_Test.o.requires
src/StackTests/CMakeFiles/StackTests.dir/requires: src/StackTests/CMakeFiles/StackTests.dir/home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/src/Stack.o.requires
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/requires

src/StackTests/CMakeFiles/StackTests.dir/clean:
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests && $(CMAKE_COMMAND) -P CMakeFiles/StackTests.dir/cmake_clean.cmake
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/clean

src/StackTests/CMakeFiles/StackTests.dir/depend:
	cd /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/src/StackTests /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests /home/MAGICLEAP/rmannem/mydev/sublimeCodeSamples/tests/build/src/StackTests/CMakeFiles/StackTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/StackTests/CMakeFiles/StackTests.dir/depend

