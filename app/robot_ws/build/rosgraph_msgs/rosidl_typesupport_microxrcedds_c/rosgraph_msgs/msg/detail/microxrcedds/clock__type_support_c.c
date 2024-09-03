// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice
#include "rosgraph_msgs/msg/detail/clock__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosgraph_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosgraph_msgs/msg/detail/clock__struct.h"
#include "rosgraph_msgs/msg/detail/clock__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // clock

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rosgraph_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rosgraph_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rosgraph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef rosgraph_msgs__msg__Clock _Clock__ros_msg_type;

static bool _Clock__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Clock__ros_msg_type * ros_message = (_Clock__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: clock
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->clock, cdr);

  return rv;
}

static bool _Clock__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Clock__ros_msg_type * ros_message = (_Clock__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: clock
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->clock);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosgraph_msgs
size_t get_serialized_size_rosgraph_msgs__msg__Clock(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Clock__ros_msg_type * ros_message = (const _Clock__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: clock
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->clock, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Clock__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosgraph_msgs__msg__Clock(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosgraph_msgs
size_t max_serialized_size_rosgraph_msgs__msg__Clock(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: clock
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Clock__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosgraph_msgs__msg__Clock(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Clock = {
  "rosgraph_msgs::msg",
  "Clock",
  _Clock__cdr_serialize,
  _Clock__cdr_deserialize,
  _Clock__get_serialized_size,
  get_serialized_size_rosgraph_msgs__msg__Clock,
  _Clock__max_serialized_size
};

static rosidl_message_type_support_t _Clock__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Clock,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosgraph_msgs, msg, Clock)() {
  return &_Clock__type_support;
}

#if defined(__cplusplus)
}
#endif
