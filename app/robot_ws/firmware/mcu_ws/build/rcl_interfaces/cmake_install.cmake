# Install script for directory: /home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces

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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/robot/app/robot_ws/firmware/toolchain/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/rcl_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rcl_interfaces/rcl_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_generator_c/rcl_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_package/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/librcl_interfaces__rosidl_generator_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rcl_interfaces/rcl_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_typesupport_introspection_c/rcl_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/librcl_interfaces__rosidl_typesupport_introspection_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rcl_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_typesupport_microxrcedds_c/rcl_interfaces/" REGEX "/[^/]*\\.c$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/librcl_interfaces__rosidl_typesupport_microxrcedds_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/librcl_interfaces__rosidl_typesupport_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/FloatingPointRange.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/IntegerRange.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ListParametersResult.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/Log.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ParameterDescriptor.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ParameterEventDescriptors.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ParameterEvent.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/Parameter.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ParameterType.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/ParameterValue.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/msg/SetParametersResult.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/DescribeParameters.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/GetParameters.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/GetParameterTypes.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/ListParameters.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/SetParametersAtomically.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_adapter/rcl_interfaces/srv/SetParameters.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/FloatingPointRange.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/IntegerRange.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ListParametersResult.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/Log.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ParameterDescriptor.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ParameterEventDescriptors.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ParameterEvent.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/Parameter.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ParameterType.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/ParameterValue.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/msg/SetParametersResult.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/DescribeParameters.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/DescribeParameters_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/DescribeParameters_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/GetParameters.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/GetParameters_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/GetParameters_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/GetParameterTypes.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/GetParameterTypes_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/GetParameterTypes_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/ListParameters.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/ListParameters_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/ListParameters_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/SetParametersAtomically.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/SetParametersAtomically_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/SetParametersAtomically_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/srv/SetParameters.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/SetParameters_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/srv/SetParameters_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/mapping_rules.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rcl_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rcl_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/rcl_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/export_rcl_interfaces__rosidl_generator_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_introspection_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/CMakeFiles/Export/share/rcl_interfaces/cmake/rcl_interfaces__rosidl_typesupport_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces/cmake" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_core/rcl_interfacesConfig.cmake"
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/ament_cmake_core/rcl_interfacesConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/rcl_interfaces/rcl_interfaces/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robot/app/robot_ws/firmware/mcu_ws/build/rcl_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
