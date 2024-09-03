// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/w_string__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "example_interfaces/msg/detail/w_string__struct.h"
#include "example_interfaces/msg/detail/w_string__functions.h"

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

#include "rosidl_runtime_c/u16string.h"  // data
#include "rosidl_runtime_c/u16string_functions.h"  // data

// forward declare type support functions


typedef example_interfaces__msg__WString _WString__ros_msg_type;

static bool _WString__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _WString__ros_msg_type * ros_message = (_WString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data
  // Micro CDR does not support WString type.

  return rv;
}

static bool _WString__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _WString__ros_msg_type * ros_message = (_WString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data
  // Micro CDR does not support WString type.
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__WString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _WString__ros_msg_type * ros_message = (const _WString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data

  return current_alignment - initial_alignment;
}

static uint32_t _WString__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_example_interfaces__msg__WString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__WString(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _WString__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_example_interfaces__msg__WString(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_WString = {
  "example_interfaces::msg",
  "WString",
  _WString__cdr_serialize,
  _WString__cdr_deserialize,
  _WString__get_serialized_size,
  get_serialized_size_example_interfaces__msg__WString,
  _WString__max_serialized_size
};

static rosidl_message_type_support_t _WString__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_WString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, WString)() {
  return &_WString__type_support;
}

#if defined(__cplusplus)
}
#endif
