// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/Nested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/nested__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/nested__struct.h"
#include "test_msgs/msg/detail/nested__functions.h"

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

#include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_value

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes)();


typedef test_msgs__msg__Nested _Nested__ros_msg_type;

static bool _Nested__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Nested__ros_msg_type * ros_message = (_Nested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: basic_types_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_serialize(&ros_message->basic_types_value, cdr);

  return rv;
}

static bool _Nested__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Nested__ros_msg_type * ros_message = (_Nested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: basic_types_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_deserialize(cdr, &ros_message->basic_types_value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Nested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Nested__ros_msg_type * ros_message = (const _Nested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: basic_types_value
  current_alignment +=
    get_serialized_size_test_msgs__msg__BasicTypes(&ros_message->basic_types_value, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Nested__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__Nested(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Nested(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: basic_types_value
  current_alignment +=
    max_serialized_size_test_msgs__msg__BasicTypes(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Nested__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__Nested(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Nested = {
  "test_msgs::msg",
  "Nested",
  _Nested__cdr_serialize,
  _Nested__cdr_deserialize,
  _Nested__get_serialized_size,
  get_serialized_size_test_msgs__msg__Nested,
  _Nested__max_serialized_size
};

static rosidl_message_type_support_t _Nested__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Nested,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Nested)() {
  return &_Nested__type_support;
}

#if defined(__cplusplus)
}
#endif
