// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/polygon__struct.h"
#include "geometry_msgs/msg/detail/polygon__functions.h"

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

#include "geometry_msgs/msg/detail/point32__functions.h"  // points

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Point32(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Point32(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point32)();


typedef geometry_msgs__msg__Polygon _Polygon__ros_msg_type;

static bool _Polygon__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Polygon__ros_msg_type * ros_message = (_Polygon__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: points
  {
    const size_t size = ros_message->points.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point32
          )()->data))->cdr_serialize(&ros_message->points.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _Polygon__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Polygon__ros_msg_type * ros_message = (_Polygon__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: points
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->points.capacity){
      return 0;
    }

    ros_message->points.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point32
        )()->data))->cdr_deserialize(cdr, &ros_message->points.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Polygon(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Polygon__ros_msg_type * ros_message = (const _Polygon__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: points
  {
    const size_t sequence_size = ros_message->points.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point32
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->points.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Polygon__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__Polygon(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Polygon(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: points
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Polygon__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__Polygon(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Polygon = {
  "geometry_msgs::msg",
  "Polygon",
  _Polygon__cdr_serialize,
  _Polygon__cdr_deserialize,
  _Polygon__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__Polygon,
  _Polygon__max_serialized_size
};

static rosidl_message_type_support_t _Polygon__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Polygon,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Polygon)() {
  return &_Polygon__type_support;
}

#if defined(__cplusplus)
}
#endif
