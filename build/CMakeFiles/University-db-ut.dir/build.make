# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/leszol/CS/University-db

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leszol/CS/University-db/build

# Include any dependencies generated for this target.
include CMakeFiles/University-db-ut.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/University-db-ut.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/University-db-ut.dir/flags.make

CMakeFiles/University-db-ut.dir/test.cpp.o: CMakeFiles/University-db-ut.dir/flags.make
CMakeFiles/University-db-ut.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leszol/CS/University-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/University-db-ut.dir/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/University-db-ut.dir/test.cpp.o -c /home/leszol/CS/University-db/test.cpp

CMakeFiles/University-db-ut.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/University-db-ut.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leszol/CS/University-db/test.cpp > CMakeFiles/University-db-ut.dir/test.cpp.i

CMakeFiles/University-db-ut.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/University-db-ut.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leszol/CS/University-db/test.cpp -o CMakeFiles/University-db-ut.dir/test.cpp.s

CMakeFiles/University-db-ut.dir/db.cpp.o: CMakeFiles/University-db-ut.dir/flags.make
CMakeFiles/University-db-ut.dir/db.cpp.o: ../db.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leszol/CS/University-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/University-db-ut.dir/db.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/University-db-ut.dir/db.cpp.o -c /home/leszol/CS/University-db/db.cpp

CMakeFiles/University-db-ut.dir/db.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/University-db-ut.dir/db.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leszol/CS/University-db/db.cpp > CMakeFiles/University-db-ut.dir/db.cpp.i

CMakeFiles/University-db-ut.dir/db.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/University-db-ut.dir/db.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leszol/CS/University-db/db.cpp -o CMakeFiles/University-db-ut.dir/db.cpp.s

CMakeFiles/University-db-ut.dir/student.cpp.o: CMakeFiles/University-db-ut.dir/flags.make
CMakeFiles/University-db-ut.dir/student.cpp.o: ../student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leszol/CS/University-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/University-db-ut.dir/student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/University-db-ut.dir/student.cpp.o -c /home/leszol/CS/University-db/student.cpp

CMakeFiles/University-db-ut.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/University-db-ut.dir/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leszol/CS/University-db/student.cpp > CMakeFiles/University-db-ut.dir/student.cpp.i

CMakeFiles/University-db-ut.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/University-db-ut.dir/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leszol/CS/University-db/student.cpp -o CMakeFiles/University-db-ut.dir/student.cpp.s

# Object files for target University-db-ut
University__db__ut_OBJECTS = \
"CMakeFiles/University-db-ut.dir/test.cpp.o" \
"CMakeFiles/University-db-ut.dir/db.cpp.o" \
"CMakeFiles/University-db-ut.dir/student.cpp.o"

# External object files for target University-db-ut
University__db__ut_EXTERNAL_OBJECTS =

University-db-ut: CMakeFiles/University-db-ut.dir/test.cpp.o
University-db-ut: CMakeFiles/University-db-ut.dir/db.cpp.o
University-db-ut: CMakeFiles/University-db-ut.dir/student.cpp.o
University-db-ut: CMakeFiles/University-db-ut.dir/build.make
University-db-ut: lib/libgtest_main.a
University-db-ut: lib/libgtest.a
University-db-ut: CMakeFiles/University-db-ut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leszol/CS/University-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable University-db-ut"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/University-db-ut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/University-db-ut.dir/build: University-db-ut

.PHONY : CMakeFiles/University-db-ut.dir/build

CMakeFiles/University-db-ut.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/University-db-ut.dir/cmake_clean.cmake
.PHONY : CMakeFiles/University-db-ut.dir/clean

CMakeFiles/University-db-ut.dir/depend:
	cd /home/leszol/CS/University-db/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leszol/CS/University-db /home/leszol/CS/University-db /home/leszol/CS/University-db/build /home/leszol/CS/University-db/build /home/leszol/CS/University-db/build/CMakeFiles/University-db-ut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/University-db-ut.dir/depend
