// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define MICRO_ROS_MSGS__MSG__GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "micro_ros_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "micro_ros_msgs/msg/detail/graph__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

namespace micro_ros_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_serialize(
  const micro_ros_msgs::msg::Graph & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  micro_ros_msgs::msg::Graph & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
get_serialized_size(
  const micro_ros_msgs::msg::Graph & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
max_serialized_size_Graph(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace micro_ros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, micro_ros_msgs, msg, Graph)();

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__GRAPH__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
