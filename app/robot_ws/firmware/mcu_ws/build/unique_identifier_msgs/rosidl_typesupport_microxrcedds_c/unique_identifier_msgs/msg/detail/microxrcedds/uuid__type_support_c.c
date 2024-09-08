// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

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


typedef unique_identifier_msgs__msg__UUID _UUID__ros_msg_type;

static bool _UUID__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UUID__ros_msg_type * ros_message = (_UUID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: uuid
  {
    const size_t size = 16;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uuid, size);
  }

  return rv;
}

static bool _UUID__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UUID__ros_msg_type * ros_message = (_UUID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: uuid
  {
    const size_t size = 16;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uuid, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_unique_identifier_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UUID__ros_msg_type * ros_message = (const _UUID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: uuid
  {
    const size_t array_size = 16;
    const size_t item_size = sizeof(ros_message->uuid[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UUID__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_unique_identifier_msgs__msg__UUID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_unique_identifier_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: uuid
  {
    const size_t array_size = 16;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _UUID__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_unique_identifier_msgs__msg__UUID(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UUID = {
  "unique_identifier_msgs::msg",
  "UUID",
  _UUID__cdr_serialize,
  _UUID__cdr_deserialize,
  _UUID__get_serialized_size,
  get_serialized_size_unique_identifier_msgs__msg__UUID,
  _UUID__max_serialized_size
};

static rosidl_message_type_support_t _UUID__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UUID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)() {
  return &_UUID__type_support;
}

#if defined(__cplusplus)
}
#endif
