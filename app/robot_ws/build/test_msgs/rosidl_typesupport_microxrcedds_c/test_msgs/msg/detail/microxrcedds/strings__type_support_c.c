// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/strings__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/strings__struct.h"
#include "test_msgs/msg/detail/strings__functions.h"

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

#include "rosidl_runtime_c/string.h"  // bounded_string_value, bounded_string_value_default1, bounded_string_value_default2, bounded_string_value_default3, bounded_string_value_default4, bounded_string_value_default5, string_value, string_value_default1, string_value_default2, string_value_default3, string_value_default4, string_value_default5
#include "rosidl_runtime_c/string_functions.h"  // bounded_string_value, bounded_string_value_default1, bounded_string_value_default2, bounded_string_value_default3, bounded_string_value_default4, bounded_string_value_default5, string_value, string_value_default1, string_value_default2, string_value_default3, string_value_default4, string_value_default5

// forward declare type support functions


typedef test_msgs__msg__Strings _Strings__ros_msg_type;

static bool _Strings__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Strings__ros_msg_type * ros_message = (_Strings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: string_value
 {
    uint32_t string_len = (ros_message->string_value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value.data) + 1;
    ros_message->string_value.size = (ros_message->string_value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value.data, string_len);
  }
  // Member: string_value_default1
 {
    uint32_t string_len = (ros_message->string_value_default1.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value_default1.data) + 1;
    ros_message->string_value_default1.size = (ros_message->string_value_default1.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value_default1.data, string_len);
  }
  // Member: string_value_default2
 {
    uint32_t string_len = (ros_message->string_value_default2.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value_default2.data) + 1;
    ros_message->string_value_default2.size = (ros_message->string_value_default2.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value_default2.data, string_len);
  }
  // Member: string_value_default3
 {
    uint32_t string_len = (ros_message->string_value_default3.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value_default3.data) + 1;
    ros_message->string_value_default3.size = (ros_message->string_value_default3.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value_default3.data, string_len);
  }
  // Member: string_value_default4
 {
    uint32_t string_len = (ros_message->string_value_default4.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value_default4.data) + 1;
    ros_message->string_value_default4.size = (ros_message->string_value_default4.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value_default4.data, string_len);
  }
  // Member: string_value_default5
 {
    uint32_t string_len = (ros_message->string_value_default5.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value_default5.data) + 1;
    ros_message->string_value_default5.size = (ros_message->string_value_default5.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value_default5.data, string_len);
  }
  // Member: bounded_string_value
 {
    uint32_t string_len = (ros_message->bounded_string_value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value.data) + 1;
    ros_message->bounded_string_value.size = (ros_message->bounded_string_value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value.data, string_len);
  }
  // Member: bounded_string_value_default1
 {
    uint32_t string_len = (ros_message->bounded_string_value_default1.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value_default1.data) + 1;
    ros_message->bounded_string_value_default1.size = (ros_message->bounded_string_value_default1.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value_default1.data, string_len);
  }
  // Member: bounded_string_value_default2
 {
    uint32_t string_len = (ros_message->bounded_string_value_default2.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value_default2.data) + 1;
    ros_message->bounded_string_value_default2.size = (ros_message->bounded_string_value_default2.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value_default2.data, string_len);
  }
  // Member: bounded_string_value_default3
 {
    uint32_t string_len = (ros_message->bounded_string_value_default3.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value_default3.data) + 1;
    ros_message->bounded_string_value_default3.size = (ros_message->bounded_string_value_default3.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value_default3.data, string_len);
  }
  // Member: bounded_string_value_default4
 {
    uint32_t string_len = (ros_message->bounded_string_value_default4.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value_default4.data) + 1;
    ros_message->bounded_string_value_default4.size = (ros_message->bounded_string_value_default4.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value_default4.data, string_len);
  }
  // Member: bounded_string_value_default5
 {
    uint32_t string_len = (ros_message->bounded_string_value_default5.data == NULL) ? 0 : (uint32_t)strlen(ros_message->bounded_string_value_default5.data) + 1;
    ros_message->bounded_string_value_default5.size = (ros_message->bounded_string_value_default5.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->bounded_string_value_default5.data, string_len);
  }

  return rv;
}

static bool _Strings__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Strings__ros_msg_type * ros_message = (_Strings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: string_value
  {
    size_t capacity = ros_message->string_value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: string_value_default1
  {
    size_t capacity = ros_message->string_value_default1.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value_default1.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value_default1.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value_default1.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: string_value_default2
  {
    size_t capacity = ros_message->string_value_default2.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value_default2.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value_default2.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value_default2.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: string_value_default3
  {
    size_t capacity = ros_message->string_value_default3.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value_default3.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value_default3.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value_default3.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: string_value_default4
  {
    size_t capacity = ros_message->string_value_default4.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value_default4.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value_default4.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value_default4.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: string_value_default5
  {
    size_t capacity = ros_message->string_value_default5.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value_default5.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value_default5.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value_default5.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value
  {
    size_t capacity = ros_message->bounded_string_value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value_default1
  {
    size_t capacity = ros_message->bounded_string_value_default1.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value_default1.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value_default1.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value_default1.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value_default2
  {
    size_t capacity = ros_message->bounded_string_value_default2.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value_default2.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value_default2.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value_default2.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value_default3
  {
    size_t capacity = ros_message->bounded_string_value_default3.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value_default3.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value_default3.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value_default3.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value_default4
  {
    size_t capacity = ros_message->bounded_string_value_default4.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value_default4.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value_default4.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value_default4.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: bounded_string_value_default5
  {
    size_t capacity = ros_message->bounded_string_value_default5.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->bounded_string_value_default5.data, capacity, &string_size);
    if (rv) {
      ros_message->bounded_string_value_default5.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bounded_string_value_default5.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Strings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Strings__ros_msg_type * ros_message = (const _Strings__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value.size + 1;
  // Member: string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value_default1.size + 1;
  // Member: string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value_default2.size + 1;
  // Member: string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value_default3.size + 1;
  // Member: string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value_default4.size + 1;
  // Member: string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value_default5.size + 1;
  // Member: bounded_string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value.size + 1;
  // Member: bounded_string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value_default1.size + 1;
  // Member: bounded_string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value_default2.size + 1;
  // Member: bounded_string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value_default3.size + 1;
  // Member: bounded_string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value_default4.size + 1;
  // Member: bounded_string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->bounded_string_value_default5.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _Strings__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__Strings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Strings(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: string_value
  *full_bounded = false;
  // Member: string_value_default1
  *full_bounded = false;
  // Member: string_value_default2
  *full_bounded = false;
  // Member: string_value_default3
  *full_bounded = false;
  // Member: string_value_default4
  *full_bounded = false;
  // Member: string_value_default5
  *full_bounded = false;
  // Member: bounded_string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;

  return current_alignment - initial_alignment;
}

static size_t _Strings__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__Strings(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Strings = {
  "test_msgs::msg",
  "Strings",
  _Strings__cdr_serialize,
  _Strings__cdr_deserialize,
  _Strings__get_serialized_size,
  get_serialized_size_test_msgs__msg__Strings,
  _Strings__max_serialized_size
};

static rosidl_message_type_support_t _Strings__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Strings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Strings)() {
  return &_Strings__type_support;
}

#if defined(__cplusplus)
}
#endif
