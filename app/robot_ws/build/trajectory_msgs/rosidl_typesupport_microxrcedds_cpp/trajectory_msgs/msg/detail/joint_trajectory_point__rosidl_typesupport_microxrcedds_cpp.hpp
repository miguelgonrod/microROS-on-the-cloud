// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "trajectory_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

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

namespace trajectory_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_serialize(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  trajectory_msgs::msg::JointTrajectoryPoint & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
get_serialized_size(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
max_serialized_size_JointTrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace trajectory_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, trajectory_msgs, msg, JointTrajectoryPoint)();

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
