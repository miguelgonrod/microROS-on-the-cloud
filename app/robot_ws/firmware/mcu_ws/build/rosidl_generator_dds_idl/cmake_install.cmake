# Install script for directory: /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/robot/app/robot_ws/firmware/mcu_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/site-packages/rosidl_generator_dds_idl-0.8.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_python/rosidl_generator_dds_idl/rosidl_generator_dds_idl.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/site-packages/rosidl_generator_dds_idl" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl/rosidl_generator_dds_idl/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/home/robot/app/robot_ws/firmware/toolchain/espressif/python_env/idf4.1_py3.10_env/bin/python3" "-m" "compileall"
        "/home/robot/app/robot_ws/firmware/mcu_ws/install/lib/python3.10/site-packages/rosidl_generator_dds_idl"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rosidl_generator_dds_idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rosidl_generator_dds_idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_index/share/ament_index/resource_index/packages/rosidl_generator_dds_idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_core/rosidl_generator_dds_idl-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl/cmake" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_core/rosidl_generator_dds_idlConfig.cmake"
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/ament_cmake_core/rosidl_generator_dds_idlConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rosidl_generator_dds_idl" TYPE PROGRAM FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl/bin/rosidl_generator_dds_idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosidl_generator_dds_idl" TYPE DIRECTORY FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl/cmake"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rosidl_dds/rosidl_generator_dds_idl/resource"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robot/app/robot_ws/firmware/mcu_ws/build/rosidl_generator_dds_idl/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
