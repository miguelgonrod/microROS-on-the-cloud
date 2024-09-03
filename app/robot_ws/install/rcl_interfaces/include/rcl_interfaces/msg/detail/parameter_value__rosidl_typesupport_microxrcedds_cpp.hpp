// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__PARAMETER_VALUE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define RCL_INTERFACES__MSG__PARAMETER_VALUE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_value__struct.hpp"

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

namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::ParameterValue & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::ParameterValue & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::ParameterValue & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_ParameterValue(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, ParameterValue)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__PARAMETER_VALUE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
