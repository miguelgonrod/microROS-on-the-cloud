// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define COMPLEX_MSGS__MSG__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "complex_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"

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

namespace complex_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_serialize(
  const complex_msgs::msg::MultiStringTest & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  complex_msgs::msg::MultiStringTest & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
get_serialized_size(
  const complex_msgs::msg::MultiStringTest & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
max_serialized_size_MultiStringTest(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace complex_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, complex_msgs, msg, MultiStringTest)();

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
