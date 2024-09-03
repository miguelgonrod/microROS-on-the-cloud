// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy_feedback__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/joy_feedback__struct.h"
#include "sensor_msgs/msg/detail/joy_feedback__functions.h"

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


typedef sensor_msgs__msg__JoyFeedback _JoyFeedback__ros_msg_type;

static bool _JoyFeedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _JoyFeedback__ros_msg_type * ros_message = (_JoyFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type);
  // Member: id
  rv = ucdr_serialize_uint8_t(cdr, ros_message->id);
  // Member: intensity
  rv = ucdr_serialize_float(cdr, ros_message->intensity);

  return rv;
}

static bool _JoyFeedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _JoyFeedback__ros_msg_type * ros_message = (_JoyFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type);
  // Field name: id
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->id);
  // Field name: intensity
  rv = ucdr_deserialize_float(cdr, &ros_message->intensity);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__JoyFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _JoyFeedback__ros_msg_type * ros_message = (const _JoyFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: id
  {
    const size_t item_size = sizeof(ros_message->id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: intensity
  {
    const size_t item_size = sizeof(ros_message->intensity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JoyFeedback__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__JoyFeedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__JoyFeedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: intensity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _JoyFeedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__JoyFeedback(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_JoyFeedback = {
  "sensor_msgs::msg",
  "JoyFeedback",
  _JoyFeedback__cdr_serialize,
  _JoyFeedback__cdr_deserialize,
  _JoyFeedback__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__JoyFeedback,
  _JoyFeedback__max_serialized_size
};

static rosidl_message_type_support_t _JoyFeedback__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_JoyFeedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, JoyFeedback)() {
  return &_JoyFeedback__type_support;
}

#if defined(__cplusplus)
}
#endif
