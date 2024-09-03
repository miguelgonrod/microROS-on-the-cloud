// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

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

namespace unique_identifier_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
cdr_serialize(
  const unique_identifier_msgs::msg::UUID & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  unique_identifier_msgs::msg::UUID & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
get_serialized_size(
  const unique_identifier_msgs::msg::UUID & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace unique_identifier_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, unique_identifier_msgs, msg, UUID)();

#ifdef __cplusplus
}
#endif

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
