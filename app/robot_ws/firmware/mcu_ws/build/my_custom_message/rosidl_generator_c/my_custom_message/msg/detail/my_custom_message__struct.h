// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MyCustomMessage in the package my_custom_message.
typedef struct my_custom_message__msg__MyCustomMessage
{
  bool bool_test;
  uint8_t byte_test;
  uint8_t char_test;
  float float32_test;
  double double_test;
  int8_t int8_test;
  uint8_t uint8_test;
  int16_t int16_test;
  uint16_t uint16_test;
  int32_t int32_test;
  uint32_t uint32_test;
  int64_t int64_test;
  uint64_t uint64_test;
} my_custom_message__msg__MyCustomMessage;

// Struct for a sequence of my_custom_message__msg__MyCustomMessage.
typedef struct my_custom_message__msg__MyCustomMessage__Sequence
{
  my_custom_message__msg__MyCustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_message__msg__MyCustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_
