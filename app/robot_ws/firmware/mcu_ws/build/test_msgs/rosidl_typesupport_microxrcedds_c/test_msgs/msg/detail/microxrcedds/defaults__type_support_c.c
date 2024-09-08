// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/Defaults.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/defaults__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/defaults__struct.h"
#include "test_msgs/msg/detail/defaults__functions.h"

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


typedef test_msgs__msg__Defaults _Defaults__ros_msg_type;

static bool _Defaults__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Defaults__ros_msg_type * ros_message = (_Defaults__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, (ros_message->bool_value) ? 0x01 : 0x00);
  // Member: byte_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->byte_value);
  // Member: char_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->char_value);
  // Member: float32_value
  rv = ucdr_serialize_float(cdr, ros_message->float32_value);
  // Member: float64_value
  rv = ucdr_serialize_double(cdr, ros_message->float64_value);
  // Member: int8_value
  rv = ucdr_serialize_int8_t(cdr, ros_message->int8_value);
  // Member: uint8_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->uint8_value);
  // Member: int16_value
  rv = ucdr_serialize_int16_t(cdr, ros_message->int16_value);
  // Member: uint16_value
  rv = ucdr_serialize_uint16_t(cdr, ros_message->uint16_value);
  // Member: int32_value
  rv = ucdr_serialize_int32_t(cdr, ros_message->int32_value);
  // Member: uint32_value
  rv = ucdr_serialize_uint32_t(cdr, ros_message->uint32_value);
  // Member: int64_value
  rv = ucdr_serialize_int64_t(cdr, ros_message->int64_value);
  // Member: uint64_value
  rv = ucdr_serialize_uint64_t(cdr, ros_message->uint64_value);

  return rv;
}

static bool _Defaults__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Defaults__ros_msg_type * ros_message = (_Defaults__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message->bool_value);
  // Field name: byte_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->byte_value);
  // Field name: char_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->char_value);
  // Field name: float32_value
  rv = ucdr_deserialize_float(cdr, &ros_message->float32_value);
  // Field name: float64_value
  rv = ucdr_deserialize_double(cdr, &ros_message->float64_value);
  // Field name: int8_value
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->int8_value);
  // Field name: uint8_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->uint8_value);
  // Field name: int16_value
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->int16_value);
  // Field name: uint16_value
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->uint16_value);
  // Field name: int32_value
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->int32_value);
  // Field name: uint32_value
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->uint32_value);
  // Field name: int64_value
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->int64_value);
  // Field name: uint64_value
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->uint64_value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Defaults__ros_msg_type * ros_message = (const _Defaults__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: byte_value
  {
    const size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: char_value
  {
    const size_t item_size = sizeof(ros_message->char_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float32_value
  {
    const size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float64_value
  {
    const size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int8_value
  {
    const size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint8_value
  {
    const size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int16_value
  {
    const size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint16_value
  {
    const size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int32_value
  {
    const size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint32_value
  {
    const size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int64_value
  {
    const size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint64_value
  {
    const size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Defaults__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__Defaults(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Defaults(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: byte_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: char_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: float32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: float64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: int8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: uint8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: int16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: uint16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: int32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: uint32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: int64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: uint64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static size_t _Defaults__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__Defaults(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Defaults = {
  "test_msgs::msg",
  "Defaults",
  _Defaults__cdr_serialize,
  _Defaults__cdr_deserialize,
  _Defaults__get_serialized_size,
  get_serialized_size_test_msgs__msg__Defaults,
  _Defaults__max_serialized_size
};

static rosidl_message_type_support_t _Defaults__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Defaults,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults)() {
  return &_Defaults__type_support;
}

#if defined(__cplusplus)
}
#endif
