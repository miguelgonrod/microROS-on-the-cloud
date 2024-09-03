// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "complex_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "complex_msgs/msg/detail/multi_string_test__struct.h"
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

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

#include "rosidl_runtime_c/string.h"  // data1, data2, data3, data4
#include "rosidl_runtime_c/string_functions.h"  // data1, data2, data3, data4

// forward declare type support functions


typedef complex_msgs__msg__MultiStringTest _MultiStringTest__ros_msg_type;

static bool _MultiStringTest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiStringTest__ros_msg_type * ros_message = (_MultiStringTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data1
 {
    uint32_t string_len = (ros_message->data1.data == NULL) ? 0 : (uint32_t)strlen(ros_message->data1.data) + 1;
    ros_message->data1.size = (ros_message->data1.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->data1.data, string_len);
  }
  // Member: data2
 {
    uint32_t string_len = (ros_message->data2.data == NULL) ? 0 : (uint32_t)strlen(ros_message->data2.data) + 1;
    ros_message->data2.size = (ros_message->data2.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->data2.data, string_len);
  }
  // Member: data3
 {
    uint32_t string_len = (ros_message->data3.data == NULL) ? 0 : (uint32_t)strlen(ros_message->data3.data) + 1;
    ros_message->data3.size = (ros_message->data3.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->data3.data, string_len);
  }
  // Member: data4
 {
    uint32_t string_len = (ros_message->data4.data == NULL) ? 0 : (uint32_t)strlen(ros_message->data4.data) + 1;
    ros_message->data4.size = (ros_message->data4.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->data4.data, string_len);
  }

  return rv;
}

static bool _MultiStringTest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiStringTest__ros_msg_type * ros_message = (_MultiStringTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data1
  {
    size_t capacity = ros_message->data1.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->data1.data, capacity, &string_size);
    if (rv) {
      ros_message->data1.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data1.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: data2
  {
    size_t capacity = ros_message->data2.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->data2.data, capacity, &string_size);
    if (rv) {
      ros_message->data2.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data2.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: data3
  {
    size_t capacity = ros_message->data3.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->data3.data, capacity, &string_size);
    if (rv) {
      ros_message->data3.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data3.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: data4
  {
    size_t capacity = ros_message->data4.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->data4.data, capacity, &string_size);
    if (rv) {
      ros_message->data4.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data4.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiStringTest__ros_msg_type * ros_message = (const _MultiStringTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->data1.size + 1;
  // Member: data2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->data2.size + 1;
  // Member: data3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->data3.size + 1;
  // Member: data4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->data4.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _MultiStringTest__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_complex_msgs__msg__MultiStringTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  *full_bounded = false;
  // Member: data2
  *full_bounded = false;
  // Member: data3
  *full_bounded = false;
  // Member: data4
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _MultiStringTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_complex_msgs__msg__MultiStringTest(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiStringTest = {
  "complex_msgs::msg",
  "MultiStringTest",
  _MultiStringTest__cdr_serialize,
  _MultiStringTest__cdr_deserialize,
  _MultiStringTest__get_serialized_size,
  get_serialized_size_complex_msgs__msg__MultiStringTest,
  _MultiStringTest__max_serialized_size
};

static rosidl_message_type_support_t _MultiStringTest__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiStringTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, complex_msgs, msg, MultiStringTest)() {
  return &_MultiStringTest__type_support;
}

#if defined(__cplusplus)
}
#endif
