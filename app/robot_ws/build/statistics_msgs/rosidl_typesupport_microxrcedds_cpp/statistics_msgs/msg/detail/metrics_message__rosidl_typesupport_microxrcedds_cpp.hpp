// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice

#ifndef STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "statistics_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.hpp"

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

namespace statistics_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
cdr_serialize(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  statistics_msgs::msg::MetricsMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
get_serialized_size(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
max_serialized_size_MetricsMessage(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace statistics_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, statistics_msgs, msg, MetricsMessage)();

#ifdef __cplusplus
}
#endif

#endif  // STATISTICS_MSGS__MSG__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
