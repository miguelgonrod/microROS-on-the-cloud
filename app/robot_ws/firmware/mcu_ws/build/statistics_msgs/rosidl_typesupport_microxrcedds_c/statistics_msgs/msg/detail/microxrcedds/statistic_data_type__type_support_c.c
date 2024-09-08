// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from statistics_msgs:msg/StatisticDataType.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/statistic_data_type__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "statistics_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "statistics_msgs/msg/detail/statistic_data_type__struct.h"
#include "statistics_msgs/msg/detail/statistic_data_type__functions.h"

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

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef statistics_msgs__msg__StatisticDataType _StatisticDataType__ros_msg_type;

static bool _StatisticDataType__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _StatisticDataType__ros_msg_type * ros_message = (_StatisticDataType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _StatisticDataType__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _StatisticDataType__ros_msg_type * ros_message = (_StatisticDataType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_statistics_msgs__msg__StatisticDataType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _StatisticDataType__ros_msg_type * ros_message = (const _StatisticDataType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StatisticDataType__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_statistics_msgs__msg__StatisticDataType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_statistics_msgs__msg__StatisticDataType(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _StatisticDataType__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_statistics_msgs__msg__StatisticDataType(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_StatisticDataType = {
  "statistics_msgs::msg",
  "StatisticDataType",
  _StatisticDataType__cdr_serialize,
  _StatisticDataType__cdr_deserialize,
  _StatisticDataType__get_serialized_size,
  get_serialized_size_statistics_msgs__msg__StatisticDataType,
  _StatisticDataType__max_serialized_size
};

static rosidl_message_type_support_t _StatisticDataType__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_StatisticDataType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, StatisticDataType)() {
  return &_StatisticDataType__type_support;
}

#if defined(__cplusplus)
}
#endif
