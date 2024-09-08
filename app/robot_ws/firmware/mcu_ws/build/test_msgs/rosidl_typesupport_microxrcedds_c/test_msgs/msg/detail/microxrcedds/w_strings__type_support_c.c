// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/w_strings__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/w_strings__struct.h"
#include "test_msgs/msg/detail/w_strings__functions.h"

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

#include "rosidl_runtime_c/u16string.h"  // array_of_wstrings, bounded_sequence_of_wstrings, unbounded_sequence_of_wstrings, wstring_value, wstring_value_default1, wstring_value_default2, wstring_value_default3
#include "rosidl_runtime_c/u16string_functions.h"  // array_of_wstrings, bounded_sequence_of_wstrings, unbounded_sequence_of_wstrings, wstring_value, wstring_value_default1, wstring_value_default2, wstring_value_default3

// forward declare type support functions


typedef test_msgs__msg__WStrings _WStrings__ros_msg_type;

static bool _WStrings__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _WStrings__ros_msg_type * ros_message = (_WStrings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: wstring_value
  // Micro CDR does not support WString type.
  // Member: wstring_value_default1
  // Micro CDR does not support WString type.
  // Member: wstring_value_default2
  // Micro CDR does not support WString type.
  // Member: wstring_value_default3
  // Micro CDR does not support WString type.
  // Member: array_of_wstrings
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Member: bounded_sequence_of_wstrings
  {
  }
  // Member: unbounded_sequence_of_wstrings
  {
  }

  return rv;
}

static bool _WStrings__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _WStrings__ros_msg_type * ros_message = (_WStrings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: wstring_value
  // Micro CDR does not support WString type.
  // Field name: wstring_value_default1
  // Micro CDR does not support WString type.
  // Field name: wstring_value_default2
  // Micro CDR does not support WString type.
  // Field name: wstring_value_default3
  // Micro CDR does not support WString type.
  // Field name: array_of_wstrings
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Field name: bounded_sequence_of_wstrings
  {
  }
  // Field name: unbounded_sequence_of_wstrings
  {
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__WStrings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _WStrings__ros_msg_type * ros_message = (const _WStrings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: wstring_value
  // Member: wstring_value_default1
  // Member: wstring_value_default2
  // Member: wstring_value_default3
  // Member: array_of_wstrings
  {
  }
  // Member: bounded_sequence_of_wstrings
  {
  }
  // Member: unbounded_sequence_of_wstrings
  {
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WStrings__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__WStrings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__WStrings(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: wstring_value
  *full_bounded = false;
  // Member: wstring_value_default1
  *full_bounded = false;
  // Member: wstring_value_default2
  *full_bounded = false;
  // Member: wstring_value_default3
  *full_bounded = false;
  // Member: array_of_wstrings
  {
    *full_bounded = false;
  }
  // Member: bounded_sequence_of_wstrings
  {
    *full_bounded = false;
  }
  // Member: unbounded_sequence_of_wstrings
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _WStrings__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__WStrings(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_WStrings = {
  "test_msgs::msg",
  "WStrings",
  _WStrings__cdr_serialize,
  _WStrings__cdr_deserialize,
  _WStrings__get_serialized_size,
  get_serialized_size_test_msgs__msg__WStrings,
  _WStrings__max_serialized_size
};

static rosidl_message_type_support_t _WStrings__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_WStrings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, WStrings)() {
  return &_WStrings__type_support;
}

#if defined(__cplusplus)
}
#endif
