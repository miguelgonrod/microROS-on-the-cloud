// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_msgs:msg/String.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/string__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_msgs/msg/detail/string__struct.h"
#include "std_msgs/msg/detail/string__functions.h"

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

#include "rosidl_runtime_c/string.h"  // data
#include "rosidl_runtime_c/string_functions.h"  // data

// forward declare type support functions


typedef std_msgs__msg__String _String__ros_msg_type;

static bool _String__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _String__ros_msg_type * ros_message = (_String__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data
 {
    uint32_t string_len = (ros_message->data.data == NULL) ? 0 : (uint32_t)strlen(ros_message->data.data) + 1;
    ros_message->data.size = (ros_message->data.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->data.data, string_len);
  }

  return rv;
}

static bool _String__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _String__ros_msg_type * ros_message = (_String__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data
  {
    size_t capacity = ros_message->data.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->data.data, capacity, &string_size);
    if (rv) {
      ros_message->data.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _String__ros_msg_type * ros_message = (const _String__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->data.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _String__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_msgs__msg__String(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__String(
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

static size_t _String__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_msgs__msg__String(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_String = {
  "std_msgs::msg",
  "String",
  _String__cdr_serialize,
  _String__cdr_deserialize,
  _String__get_serialized_size,
  get_serialized_size_std_msgs__msg__String,
  _String__max_serialized_size
};

static rosidl_message_type_support_t _String__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_String,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, String)() {
  return &_String__type_support;
}

#if defined(__cplusplus)
}
#endif
