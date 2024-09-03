// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_H_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data1'
// Member 'data2'
// Member 'data3'
// Member 'data4'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MultiStringTest in the package complex_msgs.
typedef struct complex_msgs__msg__MultiStringTest
{
  rosidl_runtime_c__String data1;
  rosidl_runtime_c__String data2;
  rosidl_runtime_c__String data3;
  rosidl_runtime_c__String data4;
} complex_msgs__msg__MultiStringTest;

// Struct for a sequence of complex_msgs__msg__MultiStringTest.
typedef struct complex_msgs__msg__MultiStringTest__Sequence
{
  complex_msgs__msg__MultiStringTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} complex_msgs__msg__MultiStringTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_H_
