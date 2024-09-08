# Install script for directory: /home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/example_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/example_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_package/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/libexample_interfaces__rosidl_generator_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/example_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_typesupport_introspection_c/example_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_introspection_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces" TYPE DIRECTORY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_typesupport_microxrcedds_c/example_interfaces/" REGEX "/[^/]*\\.c$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_microxrcedds_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/action" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/action/Fibonacci.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Bool.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Byte.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/ByteMultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Char.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Empty.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Float32.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Float32MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Float64.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Float64MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int16.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int16MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int32.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int32MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int64.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int64MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int8.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/Int8MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/MultiArrayDimension.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/MultiArrayLayout.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/String.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt16.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt16MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt32.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt32MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt64.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt64MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt8.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/UInt8MultiArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/msg/WString.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/srv/AddTwoInts.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/srv/SetBool.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_adapter/example_interfaces/srv/Trigger.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/action" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/action/Fibonacci.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Bool.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Byte.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/ByteMultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Char.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Empty.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Float32.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Float32MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Float64.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Float64MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int16.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int16MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int32.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int32MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int64.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int64MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int8.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/Int8MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/MultiArrayDimension.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/MultiArrayLayout.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/String.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt16.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt16MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt32.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt32MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt64.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt64MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt8.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/UInt8MultiArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/msg" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/msg/WString.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/srv/AddTwoInts.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/AddTwoInts_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/AddTwoInts_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/srv/SetBool.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/SetBool_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/SetBool_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/srv/Trigger.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/Trigger_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/srv/Trigger_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/mapping_rules.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/example_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/example_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/example_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/export_example_interfaces__rosidl_generator_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_introspection_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/CMakeFiles/Export/share/example_interfaces/cmake/example_interfaces__rosidl_typesupport_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_core/example_interfacesConfig.cmake"
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/ament_cmake_core/example_interfacesConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/robot/app/robot_ws/firmware/mcu_ws/ros2/example_interfaces/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robot/app/robot_ws/firmware/mcu_ws/build/example_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
