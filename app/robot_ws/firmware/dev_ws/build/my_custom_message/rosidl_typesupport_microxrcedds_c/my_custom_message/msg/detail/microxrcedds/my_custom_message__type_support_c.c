// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice
#include "my_custom_message/msg/detail/my_custom_message__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "my_custom_message/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_custom_message/msg/detail/my_custom_message__struct.h"
#include "my_custom_message/msg/detail/my_custom_message__functions.h"

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


typedef my_custom_message__msg__MyCustomMessage _MyCustomMessage__ros_msg_type;

static bool _MyCustomMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MyCustomMessage__ros_msg_type * ros_message = (_MyCustomMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: my_integer
  rv = ucdr_serialize_int32_t(cdr, ros_message->my_integer);
  // Member: my_float
  rv = ucdr_serialize_float(cdr, ros_message->my_float);

  return rv;
}

static bool _MyCustomMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MyCustomMessage__ros_msg_type * ros_message = (_MyCustomMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: my_integer
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->my_integer);
  // Field name: my_float
  rv = ucdr_deserialize_float(cdr, &ros_message->my_float);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_custom_message
size_t get_serialized_size_my_custom_message__msg__MyCustomMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MyCustomMessage__ros_msg_type * ros_message = (const _MyCustomMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: my_integer
  {
    const size_t item_size = sizeof(ros_message->my_integer);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: my_float
  {
    const size_t item_size = sizeof(ros_message->my_float);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MyCustomMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_custom_message__msg__MyCustomMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_custom_message
size_t max_serialized_size_my_custom_message__msg__MyCustomMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: my_integer
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: my_float
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _MyCustomMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_custom_message__msg__MyCustomMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MyCustomMessage = {
  "my_custom_message::msg",
  "MyCustomMessage",
  _MyCustomMessage__cdr_serialize,
  _MyCustomMessage__cdr_deserialize,
  _MyCustomMessage__get_serialized_size,
  get_serialized_size_my_custom_message__msg__MyCustomMessage,
  _MyCustomMessage__max_serialized_size
};

static rosidl_message_type_support_t _MyCustomMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MyCustomMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_custom_message, msg, MyCustomMessage)() {
  return &_MyCustomMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
