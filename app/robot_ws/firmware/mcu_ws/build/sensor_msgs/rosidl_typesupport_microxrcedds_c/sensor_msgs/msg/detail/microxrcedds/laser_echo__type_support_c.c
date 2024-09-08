// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/laser_echo__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/laser_echo__struct.h"
#include "sensor_msgs/msg/detail/laser_echo__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // echoes
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // echoes

// forward declare type support functions


typedef sensor_msgs__msg__LaserEcho _LaserEcho__ros_msg_type;

static bool _LaserEcho__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LaserEcho__ros_msg_type * ros_message = (_LaserEcho__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: echoes
  {
    const size_t size = ros_message->echoes.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->echoes.data, size);
  }

  return rv;
}

static bool _LaserEcho__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LaserEcho__ros_msg_type * ros_message = (_LaserEcho__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: echoes
  {
    uint32_t size;
    const size_t capacity = ros_message->echoes.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->echoes.data, capacity, &size);
    if (rv) {
      ros_message->echoes.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->echoes.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__LaserEcho(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LaserEcho__ros_msg_type * ros_message = (const _LaserEcho__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: echoes
  {
    size_t sequence_size = ros_message->echoes.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->echoes.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaserEcho__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__LaserEcho(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__LaserEcho(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: echoes
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _LaserEcho__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__LaserEcho(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LaserEcho = {
  "sensor_msgs::msg",
  "LaserEcho",
  _LaserEcho__cdr_serialize,
  _LaserEcho__cdr_deserialize,
  _LaserEcho__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__LaserEcho,
  _LaserEcho__max_serialized_size
};

static rosidl_message_type_support_t _LaserEcho__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LaserEcho,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho)() {
  return &_LaserEcho__type_support;
}

#if defined(__cplusplus)
}
#endif
