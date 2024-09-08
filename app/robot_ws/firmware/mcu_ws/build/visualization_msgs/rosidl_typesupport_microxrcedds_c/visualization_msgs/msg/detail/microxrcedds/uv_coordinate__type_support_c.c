// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/uv_coordinate__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/uv_coordinate__struct.h"
#include "visualization_msgs/msg/detail/uv_coordinate__functions.h"

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


typedef visualization_msgs__msg__UVCoordinate _UVCoordinate__ros_msg_type;

static bool _UVCoordinate__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UVCoordinate__ros_msg_type * ros_message = (_UVCoordinate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: u
  rv = ucdr_serialize_float(cdr, ros_message->u);
  // Member: v
  rv = ucdr_serialize_float(cdr, ros_message->v);

  return rv;
}

static bool _UVCoordinate__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UVCoordinate__ros_msg_type * ros_message = (_UVCoordinate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: u
  rv = ucdr_deserialize_float(cdr, &ros_message->u);
  // Field name: v
  rv = ucdr_deserialize_float(cdr, &ros_message->v);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__UVCoordinate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UVCoordinate__ros_msg_type * ros_message = (const _UVCoordinate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: u
  {
    const size_t item_size = sizeof(ros_message->u);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: v
  {
    const size_t item_size = sizeof(ros_message->v);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UVCoordinate__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__UVCoordinate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__UVCoordinate(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: u
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: v
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _UVCoordinate__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__UVCoordinate(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UVCoordinate = {
  "visualization_msgs::msg",
  "UVCoordinate",
  _UVCoordinate__cdr_serialize,
  _UVCoordinate__cdr_deserialize,
  _UVCoordinate__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__UVCoordinate,
  _UVCoordinate__max_serialized_size
};

static rosidl_message_type_support_t _UVCoordinate__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UVCoordinate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, UVCoordinate)() {
  return &_UVCoordinate__type_support;
}

#if defined(__cplusplus)
}
#endif
