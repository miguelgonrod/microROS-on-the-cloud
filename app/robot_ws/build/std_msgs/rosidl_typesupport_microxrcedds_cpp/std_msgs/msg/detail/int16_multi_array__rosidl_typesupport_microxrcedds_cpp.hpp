// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from std_msgs:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__INT16_MULTI_ARRAY__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define STD_MSGS__MSG__INT16_MULTI_ARRAY__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "std_msgs/msg/detail/int16_multi_array__struct.hpp"

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

namespace std_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_msgs
cdr_serialize(
  const std_msgs::msg::Int16MultiArray & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  std_msgs::msg::Int16MultiArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_msgs
get_serialized_size(
  const std_msgs::msg::Int16MultiArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_msgs
max_serialized_size_Int16MultiArray(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace std_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_msgs, msg, Int16MultiArray)();

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__INT16_MULTI_ARRAY__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
