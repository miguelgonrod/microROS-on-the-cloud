// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/multi_array_dimension__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_msgs/msg/detail/multi_array_dimension__struct.h"
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"

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

#include "rosidl_runtime_c/string.h"  // label
#include "rosidl_runtime_c/string_functions.h"  // label

// forward declare type support functions


typedef std_msgs__msg__MultiArrayDimension _MultiArrayDimension__ros_msg_type;

static bool _MultiArrayDimension__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiArrayDimension__ros_msg_type * ros_message = (_MultiArrayDimension__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: label
 {
    uint32_t string_len = (ros_message->label.data == NULL) ? 0 : (uint32_t)strlen(ros_message->label.data) + 1;
    ros_message->label.size = (ros_message->label.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->label.data, string_len);
  }
  // Member: size
  rv = ucdr_serialize_uint32_t(cdr, ros_message->size);
  // Member: stride
  rv = ucdr_serialize_uint32_t(cdr, ros_message->stride);

  return rv;
}

static bool _MultiArrayDimension__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiArrayDimension__ros_msg_type * ros_message = (_MultiArrayDimension__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: label
  {
    size_t capacity = ros_message->label.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->label.data, capacity, &string_size);
    if (rv) {
      ros_message->label.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->label.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: size
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->size);
  // Field name: stride
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->stride);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__MultiArrayDimension(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiArrayDimension__ros_msg_type * ros_message = (const _MultiArrayDimension__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: label
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->label.size + 1;
  // Member: size
  {
    const size_t item_size = sizeof(ros_message->size);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stride
  {
    const size_t item_size = sizeof(ros_message->stride);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiArrayDimension__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_msgs__msg__MultiArrayDimension(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__MultiArrayDimension(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: label
  *full_bounded = false;
  // Member: size
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: stride
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static size_t _MultiArrayDimension__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_msgs__msg__MultiArrayDimension(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiArrayDimension = {
  "std_msgs::msg",
  "MultiArrayDimension",
  _MultiArrayDimension__cdr_serialize,
  _MultiArrayDimension__cdr_deserialize,
  _MultiArrayDimension__get_serialized_size,
  get_serialized_size_std_msgs__msg__MultiArrayDimension,
  _MultiArrayDimension__max_serialized_size
};

static rosidl_message_type_support_t _MultiArrayDimension__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiArrayDimension,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, MultiArrayDimension)() {
  return &_MultiArrayDimension__type_support;
}

#if defined(__cplusplus)
}
#endif
