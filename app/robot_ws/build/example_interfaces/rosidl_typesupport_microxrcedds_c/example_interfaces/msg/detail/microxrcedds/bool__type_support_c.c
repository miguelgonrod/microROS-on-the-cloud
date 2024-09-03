// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from example_interfaces:msg/Bool.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/bool__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "example_interfaces/msg/detail/bool__struct.h"
#include "example_interfaces/msg/detail/bool__functions.h"

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


typedef example_interfaces__msg__Bool _Bool__ros_msg_type;

static bool _Bool__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Bool__ros_msg_type * ros_message = (_Bool__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data
  rv = ucdr_serialize_bool(cdr, (ros_message->data) ? 0x01 : 0x00);

  return rv;
}

static bool _Bool__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Bool__ros_msg_type * ros_message = (_Bool__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data
  rv = ucdr_deserialize_bool(cdr, &ros_message->data);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__Bool(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Bool__ros_msg_type * ros_message = (const _Bool__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t item_size = sizeof(ros_message->data);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bool__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_example_interfaces__msg__Bool(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__Bool(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _Bool__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_example_interfaces__msg__Bool(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Bool = {
  "example_interfaces::msg",
  "Bool",
  _Bool__cdr_serialize,
  _Bool__cdr_deserialize,
  _Bool__get_serialized_size,
  get_serialized_size_example_interfaces__msg__Bool,
  _Bool__max_serialized_size
};

static rosidl_message_type_support_t _Bool__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Bool,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, Bool)() {
  return &_Bool__type_support;
}

#if defined(__cplusplus)
}
#endif
