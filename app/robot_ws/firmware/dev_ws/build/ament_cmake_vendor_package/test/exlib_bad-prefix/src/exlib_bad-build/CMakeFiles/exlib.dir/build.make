# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build

# Include any dependencies generated for this target.
include CMakeFiles/exlib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exlib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exlib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exlib.dir/flags.make

CMakeFiles/exlib.dir/src/exlib.c.o: CMakeFiles/exlib.dir/flags.make
CMakeFiles/exlib.dir/src/exlib.c.o: /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad/src/exlib.c
CMakeFiles/exlib.dir/src/exlib.c.o: CMakeFiles/exlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exlib.dir/src/exlib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/exlib.dir/src/exlib.c.o -MF CMakeFiles/exlib.dir/src/exlib.c.o.d -o CMakeFiles/exlib.dir/src/exlib.c.o -c /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad/src/exlib.c

CMakeFiles/exlib.dir/src/exlib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exlib.dir/src/exlib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad/src/exlib.c > CMakeFiles/exlib.dir/src/exlib.c.i

CMakeFiles/exlib.dir/src/exlib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exlib.dir/src/exlib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad/src/exlib.c -o CMakeFiles/exlib.dir/src/exlib.c.s

# Object files for target exlib
exlib_OBJECTS = \
"CMakeFiles/exlib.dir/src/exlib.c.o"

# External object files for target exlib
exlib_EXTERNAL_OBJECTS =

libexlib.so: CMakeFiles/exlib.dir/src/exlib.c.o
libexlib.so: CMakeFiles/exlib.dir/build.make
libexlib.so: CMakeFiles/exlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libexlib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exlib.dir/build: libexlib.so
.PHONY : CMakeFiles/exlib.dir/build

CMakeFiles/exlib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exlib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exlib.dir/clean

CMakeFiles/exlib.dir/depend:
	cd /home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad /home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/exlib_bad /home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build /home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build /home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/src/exlib_bad-build/CMakeFiles/exlib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exlib.dir/depend

