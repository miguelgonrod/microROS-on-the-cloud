// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_msgs:msg/UInt16.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/u_int16__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_msgs/msg/detail/u_int16__struct.h"
#include "std_msgs/msg/detail/u_int16__functions.h"

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


typedef std_msgs__msg__UInt16 _UInt16__ros_msg_type;

static bool _UInt16__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UInt16__ros_msg_type * ros_message = (_UInt16__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data
  rv = ucdr_serialize_uint16_t(cdr, ros_message->data);

  return rv;
}

static bool _UInt16__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UInt16__ros_msg_type * ros_message = (_UInt16__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->data);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__UInt16(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UInt16__ros_msg_type * ros_message = (const _UInt16__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t item_size = sizeof(ros_message->data);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UInt16__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_msgs__msg__UInt16(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__UInt16(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static size_t _UInt16__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_msgs__msg__UInt16(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UInt16 = {
  "std_msgs::msg",
  "UInt16",
  _UInt16__cdr_serialize,
  _UInt16__cdr_deserialize,
  _UInt16__get_serialized_size,
  get_serialized_size_std_msgs__msg__UInt16,
  _UInt16__max_serialized_size
};

static rosidl_message_type_support_t _UInt16__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UInt16,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, UInt16)() {
  return &_UInt16__type_support;
}

#if defined(__cplusplus)
}
#endif
