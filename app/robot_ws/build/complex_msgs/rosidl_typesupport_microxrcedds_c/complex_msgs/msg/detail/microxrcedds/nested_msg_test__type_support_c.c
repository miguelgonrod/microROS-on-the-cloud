// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "complex_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "complex_msgs/msg/detail/nested_msg_test__struct.h"
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"

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

#include "complex_msgs/msg/detail/multi_string_test__functions.h"  // data14

// forward declare type support functions
size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, complex_msgs, msg, MultiStringTest)();


typedef complex_msgs__msg__NestedMsgTest _NestedMsgTest__ros_msg_type;

static bool _NestedMsgTest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMsgTest__ros_msg_type * ros_message = (_NestedMsgTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data1
  rv = ucdr_serialize_bool(cdr, (ros_message->data1) ? 0x01 : 0x00);
  // Member: data2
  rv = ucdr_serialize_uint8_t(cdr, ros_message->data2);
  // Member: data3
  rv = ucdr_serialize_uint8_t(cdr, ros_message->data3);
  // Member: data4
  rv = ucdr_serialize_float(cdr, ros_message->data4);
  // Member: data5
  rv = ucdr_serialize_double(cdr, ros_message->data5);
  // Member: data6
  rv = ucdr_serialize_int8_t(cdr, ros_message->data6);
  // Member: data7
  rv = ucdr_serialize_uint8_t(cdr, ros_message->data7);
  // Member: data8
  rv = ucdr_serialize_int16_t(cdr, ros_message->data8);
  // Member: data9
  rv = ucdr_serialize_uint16_t(cdr, ros_message->data9);
  // Member: data10
  rv = ucdr_serialize_int32_t(cdr, ros_message->data10);
  // Member: data11
  rv = ucdr_serialize_uint32_t(cdr, ros_message->data11);
  // Member: data12
  rv = ucdr_serialize_int64_t(cdr, ros_message->data12);
  // Member: data13
  rv = ucdr_serialize_uint64_t(cdr, ros_message->data13);
  // Member: data14
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, complex_msgs, msg, MultiStringTest
      )()->data))->cdr_serialize(&ros_message->data14, cdr);

  return rv;
}

static bool _NestedMsgTest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMsgTest__ros_msg_type * ros_message = (_NestedMsgTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data1
  rv = ucdr_deserialize_bool(cdr, &ros_message->data1);
  // Field name: data2
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->data2);
  // Field name: data3
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->data3);
  // Field name: data4
  rv = ucdr_deserialize_float(cdr, &ros_message->data4);
  // Field name: data5
  rv = ucdr_deserialize_double(cdr, &ros_message->data5);
  // Field name: data6
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->data6);
  // Field name: data7
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->data7);
  // Field name: data8
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->data8);
  // Field name: data9
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->data9);
  // Field name: data10
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->data10);
  // Field name: data11
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->data11);
  // Field name: data12
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->data12);
  // Field name: data13
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->data13);
  // Field name: data14
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, complex_msgs, msg, MultiStringTest
      )()->data))->cdr_deserialize(cdr, &ros_message->data14);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__NestedMsgTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMsgTest__ros_msg_type * ros_message = (const _NestedMsgTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  {
    const size_t item_size = sizeof(ros_message->data1);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data2
  {
    const size_t item_size = sizeof(ros_message->data2);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data3
  {
    const size_t item_size = sizeof(ros_message->data3);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data4
  {
    const size_t item_size = sizeof(ros_message->data4);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data5
  {
    const size_t item_size = sizeof(ros_message->data5);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data6
  {
    const size_t item_size = sizeof(ros_message->data6);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data7
  {
    const size_t item_size = sizeof(ros_message->data7);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data8
  {
    const size_t item_size = sizeof(ros_message->data8);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data9
  {
    const size_t item_size = sizeof(ros_message->data9);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data10
  {
    const size_t item_size = sizeof(ros_message->data10);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data11
  {
    const size_t item_size = sizeof(ros_message->data11);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data12
  {
    const size_t item_size = sizeof(ros_message->data12);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data13
  {
    const size_t item_size = sizeof(ros_message->data13);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data14
  current_alignment +=
    get_serialized_size_complex_msgs__msg__MultiStringTest(&ros_message->data14, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMsgTest__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_complex_msgs__msg__NestedMsgTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__NestedMsgTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: data2
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data3
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data4
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: data5
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: data6
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: data7
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data8
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: data9
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: data10
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: data11
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: data12
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: data13
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: data14
  current_alignment +=
    max_serialized_size_complex_msgs__msg__MultiStringTest(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMsgTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_complex_msgs__msg__NestedMsgTest(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMsgTest = {
  "complex_msgs::msg",
  "NestedMsgTest",
  _NestedMsgTest__cdr_serialize,
  _NestedMsgTest__cdr_deserialize,
  _NestedMsgTest__get_serialized_size,
  get_serialized_size_complex_msgs__msg__NestedMsgTest,
  _NestedMsgTest__max_serialized_size
};

static rosidl_message_type_support_t _NestedMsgTest__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMsgTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, complex_msgs, msg, NestedMsgTest)() {
  return &_NestedMsgTest__type_support;
}

#if defined(__cplusplus)
}
#endif
