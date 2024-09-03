// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/inertia__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/inertia__struct.h"
#include "geometry_msgs/msg/detail/inertia__functions.h"

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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // com

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3)();


typedef geometry_msgs__msg__Inertia _Inertia__ros_msg_type;

static bool _Inertia__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Inertia__ros_msg_type * ros_message = (_Inertia__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: m
  rv = ucdr_serialize_double(cdr, ros_message->m);
  // Member: com
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->com, cdr);
  // Member: ixx
  rv = ucdr_serialize_double(cdr, ros_message->ixx);
  // Member: ixy
  rv = ucdr_serialize_double(cdr, ros_message->ixy);
  // Member: ixz
  rv = ucdr_serialize_double(cdr, ros_message->ixz);
  // Member: iyy
  rv = ucdr_serialize_double(cdr, ros_message->iyy);
  // Member: iyz
  rv = ucdr_serialize_double(cdr, ros_message->iyz);
  // Member: izz
  rv = ucdr_serialize_double(cdr, ros_message->izz);

  return rv;
}

static bool _Inertia__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Inertia__ros_msg_type * ros_message = (_Inertia__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: m
  rv = ucdr_deserialize_double(cdr, &ros_message->m);
  // Field name: com
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->com);
  // Field name: ixx
  rv = ucdr_deserialize_double(cdr, &ros_message->ixx);
  // Field name: ixy
  rv = ucdr_deserialize_double(cdr, &ros_message->ixy);
  // Field name: ixz
  rv = ucdr_deserialize_double(cdr, &ros_message->ixz);
  // Field name: iyy
  rv = ucdr_deserialize_double(cdr, &ros_message->iyy);
  // Field name: iyz
  rv = ucdr_deserialize_double(cdr, &ros_message->iyz);
  // Field name: izz
  rv = ucdr_deserialize_double(cdr, &ros_message->izz);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Inertia(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Inertia__ros_msg_type * ros_message = (const _Inertia__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: m
  {
    const size_t item_size = sizeof(ros_message->m);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: com
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->com, current_alignment);
  // Member: ixx
  {
    const size_t item_size = sizeof(ros_message->ixx);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ixy
  {
    const size_t item_size = sizeof(ros_message->ixy);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ixz
  {
    const size_t item_size = sizeof(ros_message->ixz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: iyy
  {
    const size_t item_size = sizeof(ros_message->iyy);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: iyz
  {
    const size_t item_size = sizeof(ros_message->iyz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: izz
  {
    const size_t item_size = sizeof(ros_message->izz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Inertia__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__Inertia(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Inertia(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: m
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: com
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);
  // Member: ixx
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: ixy
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: ixz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: iyy
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: iyz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: izz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _Inertia__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__Inertia(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Inertia = {
  "geometry_msgs::msg",
  "Inertia",
  _Inertia__cdr_serialize,
  _Inertia__cdr_deserialize,
  _Inertia__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__Inertia,
  _Inertia__max_serialized_size
};

static rosidl_message_type_support_t _Inertia__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Inertia,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Inertia)() {
  return &_Inertia__type_support;
}

#if defined(__cplusplus)
}
#endif
