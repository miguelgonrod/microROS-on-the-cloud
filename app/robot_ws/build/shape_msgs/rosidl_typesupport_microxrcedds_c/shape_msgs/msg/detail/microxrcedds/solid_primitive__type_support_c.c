// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "shape_msgs/msg/detail/solid_primitive__struct.h"
#include "shape_msgs/msg/detail/solid_primitive__functions.h"

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

#include "geometry_msgs/msg/detail/polygon__functions.h"  // polygon
#include "rosidl_runtime_c/primitives_sequence.h"  // dimensions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // dimensions

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
size_t get_serialized_size_geometry_msgs__msg__Polygon(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
size_t max_serialized_size_geometry_msgs__msg__Polygon(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Polygon)();


typedef shape_msgs__msg__SolidPrimitive _SolidPrimitive__ros_msg_type;

static bool _SolidPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SolidPrimitive__ros_msg_type * ros_message = (_SolidPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type);
  // Member: dimensions
  {
    const size_t size = ros_message->dimensions.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->dimensions.data, size);
  }
  // Member: polygon
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Polygon
      )()->data))->cdr_serialize(&ros_message->polygon, cdr);

  return rv;
}

static bool _SolidPrimitive__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SolidPrimitive__ros_msg_type * ros_message = (_SolidPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type);
  // Field name: dimensions
  {
    uint32_t size;
    const size_t capacity = ros_message->dimensions.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->dimensions.data, capacity, &size);
    if (rv) {
      ros_message->dimensions.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->dimensions.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: polygon
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Polygon
      )()->data))->cdr_deserialize(cdr, &ros_message->polygon);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__SolidPrimitive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SolidPrimitive__ros_msg_type * ros_message = (const _SolidPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: dimensions
  {
    size_t sequence_size = ros_message->dimensions.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->dimensions.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: polygon
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Polygon(&ros_message->polygon, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SolidPrimitive__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_shape_msgs__msg__SolidPrimitive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__SolidPrimitive(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: dimensions
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: polygon
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Polygon(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _SolidPrimitive__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_shape_msgs__msg__SolidPrimitive(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SolidPrimitive = {
  "shape_msgs::msg",
  "SolidPrimitive",
  _SolidPrimitive__cdr_serialize,
  _SolidPrimitive__cdr_deserialize,
  _SolidPrimitive__get_serialized_size,
  get_serialized_size_shape_msgs__msg__SolidPrimitive,
  _SolidPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SolidPrimitive__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SolidPrimitive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, SolidPrimitive)() {
  return &_SolidPrimitive__type_support;
}

#if defined(__cplusplus)
}
#endif
