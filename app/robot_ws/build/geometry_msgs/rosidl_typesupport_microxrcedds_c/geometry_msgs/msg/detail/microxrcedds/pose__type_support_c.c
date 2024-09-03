// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/Pose.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/pose__struct.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

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

#include "geometry_msgs/msg/detail/point__functions.h"  // position
#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Point(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point)();
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion)();


typedef geometry_msgs__msg__Pose _Pose__ros_msg_type;

static bool _Pose__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Pose__ros_msg_type * ros_message = (_Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: position
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_serialize(&ros_message->position, cdr);
  // Member: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_serialize(&ros_message->orientation, cdr);

  return rv;
}

static bool _Pose__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Pose__ros_msg_type * ros_message = (_Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: position
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_deserialize(cdr, &ros_message->position);
  // Field name: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_deserialize(cdr, &ros_message->orientation);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Pose__ros_msg_type * ros_message = (const _Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: position
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Point(&ros_message->position, current_alignment);
  // Member: orientation
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Quaternion(&ros_message->orientation, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Pose__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__Pose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: position
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Point(full_bounded, current_alignment);
  // Member: orientation
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Quaternion(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Pose__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__Pose(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Pose = {
  "geometry_msgs::msg",
  "Pose",
  _Pose__cdr_serialize,
  _Pose__cdr_deserialize,
  _Pose__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__Pose,
  _Pose__max_serialized_size
};

static rosidl_message_type_support_t _Pose__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Pose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose)() {
  return &_Pose__type_support;
}

#if defined(__cplusplus)
}
#endif
