// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/msg/detail/key_value__struct.h"
#include "diagnostic_msgs/msg/detail/key_value__functions.h"

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

#include "rosidl_runtime_c/string.h"  // key, value
#include "rosidl_runtime_c/string_functions.h"  // key, value

// forward declare type support functions


typedef diagnostic_msgs__msg__KeyValue _KeyValue__ros_msg_type;

static bool _KeyValue__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _KeyValue__ros_msg_type * ros_message = (_KeyValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: key
 {
    uint32_t string_len = (ros_message->key.data == NULL) ? 0 : (uint32_t)strlen(ros_message->key.data) + 1;
    ros_message->key.size = (ros_message->key.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->key.data, string_len);
  }
  // Member: value
 {
    uint32_t string_len = (ros_message->value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->value.data) + 1;
    ros_message->value.size = (ros_message->value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->value.data, string_len);
  }

  return rv;
}

static bool _KeyValue__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _KeyValue__ros_msg_type * ros_message = (_KeyValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: key
  {
    size_t capacity = ros_message->key.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->key.data, capacity, &string_size);
    if (rv) {
      ros_message->key.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->key.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: value
  {
    size_t capacity = ros_message->value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->value.data, capacity, &string_size);
    if (rv) {
      ros_message->value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _KeyValue__ros_msg_type * ros_message = (const _KeyValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: key
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->key.size + 1;
  // Member: value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->value.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _KeyValue__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__msg__KeyValue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__msg__KeyValue(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: key
  *full_bounded = false;
  // Member: value
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _KeyValue__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__msg__KeyValue(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_KeyValue = {
  "diagnostic_msgs::msg",
  "KeyValue",
  _KeyValue__cdr_serialize,
  _KeyValue__cdr_deserialize,
  _KeyValue__get_serialized_size,
  get_serialized_size_diagnostic_msgs__msg__KeyValue,
  _KeyValue__max_serialized_size
};

static rosidl_message_type_support_t _KeyValue__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_KeyValue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, KeyValue)() {
  return &_KeyValue__type_support;
}

#if defined(__cplusplus)
}
#endif
