// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from builtin_interfaces:msg/Time.idl
// generated code does not contain a copyright notice
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "builtin_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "builtin_interfaces/msg/detail/time__struct.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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


typedef builtin_interfaces__msg__Time _Time__ros_msg_type;

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Time__ros_msg_type * ros_message = (_Time__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sec
  rv = ucdr_serialize_int32_t(cdr, ros_message->sec);
  // Member: nanosec
  rv = ucdr_serialize_uint32_t(cdr, ros_message->nanosec);

  return rv;
}

static bool _Time__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Time__ros_msg_type * ros_message = (_Time__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sec
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->sec);
  // Field name: nanosec
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->nanosec);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_builtin_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Time__ros_msg_type * ros_message = (const _Time__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sec
  {
    const size_t item_size = sizeof(ros_message->sec);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: nanosec
  {
    const size_t item_size = sizeof(ros_message->nanosec);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Time__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_builtin_interfaces__msg__Time(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_builtin_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sec
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: nanosec
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static size_t _Time__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_builtin_interfaces__msg__Time(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Time = {
  "builtin_interfaces::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  get_serialized_size_builtin_interfaces__msg__Time,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Time,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)() {
  return &_Time__type_support;
}

#if defined(__cplusplus)
}
#endif
