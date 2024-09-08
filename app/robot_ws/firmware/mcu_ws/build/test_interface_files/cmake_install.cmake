# Install script for directory: /home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/msg" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Arrays.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/BasicTypes.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/BoundedPlainSequences.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/BoundedSequences.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Constants.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Defaults.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Empty.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/MultiNested.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Nested.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/Strings.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/UnboundedSequences.msg"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/msg/WStrings.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/srv" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/srv/Arrays.srv"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/srv/BasicTypes.srv"
    "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/srv/Empty.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/action" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/action/Fibonacci.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/test_interface_files")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/test_interface_files")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_index/share/ament_index/resource_index/packages/test_interface_files")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_core/test_interface_files-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files/cmake" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_core/test_interface_filesConfig.cmake"
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/ament_cmake_core/test_interface_filesConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_interface_files" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/test_interface_files/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robot/app/robot_ws/firmware/mcu_ws/build/test_interface_files/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
