// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh_triangle__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "shape_msgs/msg/detail/mesh_triangle__struct.h"
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"

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


typedef shape_msgs__msg__MeshTriangle _MeshTriangle__ros_msg_type;

static bool _MeshTriangle__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MeshTriangle__ros_msg_type * ros_message = (_MeshTriangle__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: vertex_indices
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->vertex_indices, size);
  }

  return rv;
}

static bool _MeshTriangle__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MeshTriangle__ros_msg_type * ros_message = (_MeshTriangle__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: vertex_indices
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->vertex_indices, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MeshTriangle__ros_msg_type * ros_message = (const _MeshTriangle__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: vertex_indices
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->vertex_indices[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MeshTriangle__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_shape_msgs__msg__MeshTriangle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__MeshTriangle(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: vertex_indices
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MeshTriangle__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_shape_msgs__msg__MeshTriangle(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MeshTriangle = {
  "shape_msgs::msg",
  "MeshTriangle",
  _MeshTriangle__cdr_serialize,
  _MeshTriangle__cdr_deserialize,
  _MeshTriangle__get_serialized_size,
  get_serialized_size_shape_msgs__msg__MeshTriangle,
  _MeshTriangle__max_serialized_size
};

static rosidl_message_type_support_t _MeshTriangle__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MeshTriangle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, MeshTriangle)() {
  return &_MeshTriangle__type_support;
}

#if defined(__cplusplus)
}
#endif
