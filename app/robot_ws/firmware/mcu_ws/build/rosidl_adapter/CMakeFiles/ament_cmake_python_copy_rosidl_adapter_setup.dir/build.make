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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl/rosidl_adapter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter

# Utility rule file for ament_cmake_python_copy_rosidl_adapter_setup.

# Include any custom commands dependencies for this target.
include CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/progress.make

CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup:
	/usr/bin/cmake -E copy /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl/rosidl_adapter/setup.cfg /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter/ament_cmake_python/rosidl_adapter/setup.cfg

ament_cmake_python_copy_rosidl_adapter_setup: CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup
ament_cmake_python_copy_rosidl_adapter_setup: CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/build.make
.PHONY : ament_cmake_python_copy_rosidl_adapter_setup

# Rule to build all files generated by this target.
CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/build: ament_cmake_python_copy_rosidl_adapter_setup
.PHONY : CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/build

CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/clean

CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/depend:
	cd /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl/rosidl_adapter /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl/rosidl_adapter /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter /home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_adapter/CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ament_cmake_python_copy_rosidl_adapter_setup.dir/depend

