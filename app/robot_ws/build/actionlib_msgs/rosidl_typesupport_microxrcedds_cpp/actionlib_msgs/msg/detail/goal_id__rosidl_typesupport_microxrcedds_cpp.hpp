// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "actionlib_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "actionlib_msgs/msg/detail/goal_id__struct.hpp"

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

namespace actionlib_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
cdr_serialize(
  const actionlib_msgs::msg::GoalID & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  actionlib_msgs::msg::GoalID & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
get_serialized_size(
  const actionlib_msgs::msg::GoalID & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
max_serialized_size_GoalID(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace actionlib_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, actionlib_msgs, msg, GoalID)();

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
