// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_H_
#define COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data14'
#include "complex_msgs/msg/detail/multi_string_test__struct.h"

/// Struct defined in msg/NestedMsgTest in the package complex_msgs.
typedef struct complex_msgs__msg__NestedMsgTest
{
  bool data1;
  uint8_t data2;
  uint8_t data3;
  float data4;
  double data5;
  int8_t data6;
  uint8_t data7;
  int16_t data8;
  uint16_t data9;
  int32_t data10;
  uint32_t data11;
  int64_t data12;
  uint64_t data13;
  complex_msgs__msg__MultiStringTest data14;
} complex_msgs__msg__NestedMsgTest;

// Struct for a sequence of complex_msgs__msg__NestedMsgTest.
typedef struct complex_msgs__msg__NestedMsgTest__Sequence
{
  complex_msgs__msg__NestedMsgTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} complex_msgs__msg__NestedMsgTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_H_
