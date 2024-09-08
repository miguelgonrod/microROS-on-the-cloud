// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/Range.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/range__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/range__struct.h"
#include "sensor_msgs/msg/detail/range__functions.h"

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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef sensor_msgs__msg__Range _Range__ros_msg_type;

static bool _Range__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Range__ros_msg_type * ros_message = (_Range__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: radiation_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->radiation_type);
  // Member: field_of_view
  rv = ucdr_serialize_float(cdr, ros_message->field_of_view);
  // Member: min_range
  rv = ucdr_serialize_float(cdr, ros_message->min_range);
  // Member: max_range
  rv = ucdr_serialize_float(cdr, ros_message->max_range);
  // Member: range
  rv = ucdr_serialize_float(cdr, ros_message->range);

  return rv;
}

static bool _Range__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Range__ros_msg_type * ros_message = (_Range__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: radiation_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->radiation_type);
  // Field name: field_of_view
  rv = ucdr_deserialize_float(cdr, &ros_message->field_of_view);
  // Field name: min_range
  rv = ucdr_deserialize_float(cdr, &ros_message->min_range);
  // Field name: max_range
  rv = ucdr_deserialize_float(cdr, &ros_message->max_range);
  // Field name: range
  rv = ucdr_deserialize_float(cdr, &ros_message->range);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__Range(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Range__ros_msg_type * ros_message = (const _Range__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: radiation_type
  {
    const size_t item_size = sizeof(ros_message->radiation_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: field_of_view
  {
    const size_t item_size = sizeof(ros_message->field_of_view);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: min_range
  {
    const size_t item_size = sizeof(ros_message->min_range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_range
  {
    const size_t item_size = sizeof(ros_message->max_range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range
  {
    const size_t item_size = sizeof(ros_message->range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Range__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__Range(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__Range(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: radiation_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: field_of_view
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: min_range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: max_range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _Range__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__Range(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Range = {
  "sensor_msgs::msg",
  "Range",
  _Range__cdr_serialize,
  _Range__cdr_deserialize,
  _Range__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__Range,
  _Range__max_serialized_size
};

static rosidl_message_type_support_t _Range__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Range,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Range)() {
  return &_Range__type_support;
}

#if defined(__cplusplus)
}
#endif
