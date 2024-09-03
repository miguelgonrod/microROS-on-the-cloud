// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/TwistStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/twist_stamped__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"

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

#include "geometry_msgs/msg/detail/twist__functions.h"  // twist
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef geometry_msgs__msg__TwistStamped _TwistStamped__ros_msg_type;

static bool _TwistStamped__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TwistStamped__ros_msg_type * ros_message = (_TwistStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: twist
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
      )()->data))->cdr_serialize(&ros_message->twist, cdr);

  return rv;
}

static bool _TwistStamped__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TwistStamped__ros_msg_type * ros_message = (_TwistStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: twist
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
      )()->data))->cdr_deserialize(cdr, &ros_message->twist);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TwistStamped__ros_msg_type * ros_message = (const _TwistStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: twist
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Twist(&ros_message->twist, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TwistStamped__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__TwistStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistStamped(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: twist
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Twist(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _TwistStamped__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__TwistStamped(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TwistStamped = {
  "geometry_msgs::msg",
  "TwistStamped",
  _TwistStamped__cdr_serialize,
  _TwistStamped__cdr_deserialize,
  _TwistStamped__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__TwistStamped,
  _TwistStamped__max_serialized_size
};

static rosidl_message_type_support_t _TwistStamped__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TwistStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, TwistStamped)() {
  return &_TwistStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
