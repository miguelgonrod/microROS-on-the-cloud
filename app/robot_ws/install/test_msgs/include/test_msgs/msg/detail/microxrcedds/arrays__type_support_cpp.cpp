// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/arrays__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/msg/detail/arrays__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::BasicTypes &);

size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);

size_t
max_serialized_size_BasicTypes(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Constants &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::Constants &);

size_t get_serialized_size(
  const test_msgs::msg::Constants &,
  size_t current_alignment);

size_t
max_serialized_size_Constants(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Defaults &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::Defaults &);

size_t get_serialized_size(
  const test_msgs::msg::Defaults &,
  size_t current_alignment);

size_t
max_serialized_size_Defaults(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs


namespace test_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::Arrays & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: bool_values
  {
    size_t size = ros_message.bool_values.size();
    rv = ucdr_serialize_array_bool(cdr, ros_message.bool_values.data(), size);
  }
  // Member: byte_values
  {
    size_t size = ros_message.byte_values.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.byte_values.data(), size);
  }
  // Member: char_values
  {
    size_t size = ros_message.char_values.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.char_values.data(), size);
  }
  // Member: float32_values
  {
    size_t size = ros_message.float32_values.size();
    rv = ucdr_serialize_array_float(cdr, ros_message.float32_values.data(), size);
  }
  // Member: float64_values
  {
    size_t size = ros_message.float64_values.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.float64_values.data(), size);
  }
  // Member: int8_values
  {
    size_t size = ros_message.int8_values.size();
    rv = ucdr_serialize_array_int8_t(cdr, ros_message.int8_values.data(), size);
  }
  // Member: uint8_values
  {
    size_t size = ros_message.uint8_values.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.uint8_values.data(), size);
  }
  // Member: int16_values
  {
    size_t size = ros_message.int16_values.size();
    rv = ucdr_serialize_array_int16_t(cdr, ros_message.int16_values.data(), size);
  }
  // Member: uint16_values
  {
    size_t size = ros_message.uint16_values.size();
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message.uint16_values.data(), size);
  }
  // Member: int32_values
  {
    size_t size = ros_message.int32_values.size();
    rv = ucdr_serialize_array_int32_t(cdr, ros_message.int32_values.data(), size);
  }
  // Member: uint32_values
  {
    size_t size = ros_message.uint32_values.size();
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message.uint32_values.data(), size);
  }
  // Member: int64_values
  {
    size_t size = ros_message.int64_values.size();
    rv = ucdr_serialize_array_int64_t(cdr, ros_message.int64_values.data(), size);
  }
  // Member: uint64_values
  {
    size_t size = ros_message.uint64_values.size();
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message.uint64_values.data(), size);
  }
  // Member: string_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: basic_types_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: constants_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: defaults_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: bool_values_default
  {
    size_t size = ros_message.bool_values_default.size();
    rv = ucdr_serialize_array_bool(cdr, ros_message.bool_values_default.data(), size);
  }
  // Member: byte_values_default
  {
    size_t size = ros_message.byte_values_default.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.byte_values_default.data(), size);
  }
  // Member: char_values_default
  {
    size_t size = ros_message.char_values_default.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.char_values_default.data(), size);
  }
  // Member: float32_values_default
  {
    size_t size = ros_message.float32_values_default.size();
    rv = ucdr_serialize_array_float(cdr, ros_message.float32_values_default.data(), size);
  }
  // Member: float64_values_default
  {
    size_t size = ros_message.float64_values_default.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.float64_values_default.data(), size);
  }
  // Member: int8_values_default
  {
    size_t size = ros_message.int8_values_default.size();
    rv = ucdr_serialize_array_int8_t(cdr, ros_message.int8_values_default.data(), size);
  }
  // Member: uint8_values_default
  {
    size_t size = ros_message.uint8_values_default.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.uint8_values_default.data(), size);
  }
  // Member: int16_values_default
  {
    size_t size = ros_message.int16_values_default.size();
    rv = ucdr_serialize_array_int16_t(cdr, ros_message.int16_values_default.data(), size);
  }
  // Member: uint16_values_default
  {
    size_t size = ros_message.uint16_values_default.size();
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message.uint16_values_default.data(), size);
  }
  // Member: int32_values_default
  {
    size_t size = ros_message.int32_values_default.size();
    rv = ucdr_serialize_array_int32_t(cdr, ros_message.int32_values_default.data(), size);
  }
  // Member: uint32_values_default
  {
    size_t size = ros_message.uint32_values_default.size();
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message.uint32_values_default.data(), size);
  }
  // Member: int64_values_default
  {
    size_t size = ros_message.int64_values_default.size();
    rv = ucdr_serialize_array_int64_t(cdr, ros_message.int64_values_default.data(), size);
  }
  // Member: uint64_values_default
  {
    size_t size = ros_message.uint64_values_default.size();
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message.uint64_values_default.data(), size);
  }
  // Member: string_values_default
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: alignment_check
  rv = ucdr_serialize_int32_t(cdr, ros_message.alignment_check);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::msg::Arrays & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: bool_values
  {
    const size_t size = ros_message.bool_values.size();
    rv = ucdr_deserialize_array_bool(cdr, ros_message.bool_values.data(), size);
  }
  // Member: byte_values
  {
    const size_t size = ros_message.byte_values.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.byte_values.data(), size);
  }
  // Member: char_values
  {
    const size_t size = ros_message.char_values.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.char_values.data(), size);
  }
  // Member: float32_values
  {
    const size_t size = ros_message.float32_values.size();
    rv = ucdr_deserialize_array_float(cdr, ros_message.float32_values.data(), size);
  }
  // Member: float64_values
  {
    const size_t size = ros_message.float64_values.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.float64_values.data(), size);
  }
  // Member: int8_values
  {
    const size_t size = ros_message.int8_values.size();
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message.int8_values.data(), size);
  }
  // Member: uint8_values
  {
    const size_t size = ros_message.uint8_values.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.uint8_values.data(), size);
  }
  // Member: int16_values
  {
    const size_t size = ros_message.int16_values.size();
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message.int16_values.data(), size);
  }
  // Member: uint16_values
  {
    const size_t size = ros_message.uint16_values.size();
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message.uint16_values.data(), size);
  }
  // Member: int32_values
  {
    const size_t size = ros_message.int32_values.size();
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message.int32_values.data(), size);
  }
  // Member: uint32_values
  {
    const size_t size = ros_message.uint32_values.size();
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message.uint32_values.data(), size);
  }
  // Member: int64_values
  {
    const size_t size = ros_message.int64_values.size();
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message.int64_values.data(), size);
  }
  // Member: uint64_values
  {
    const size_t size = ros_message.uint64_values.size();
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message.uint64_values.data(), size);
  }
  // Member: string_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: basic_types_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: constants_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: defaults_values
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: bool_values_default
  {
    const size_t size = ros_message.bool_values_default.size();
    rv = ucdr_deserialize_array_bool(cdr, ros_message.bool_values_default.data(), size);
  }
  // Member: byte_values_default
  {
    const size_t size = ros_message.byte_values_default.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.byte_values_default.data(), size);
  }
  // Member: char_values_default
  {
    const size_t size = ros_message.char_values_default.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.char_values_default.data(), size);
  }
  // Member: float32_values_default
  {
    const size_t size = ros_message.float32_values_default.size();
    rv = ucdr_deserialize_array_float(cdr, ros_message.float32_values_default.data(), size);
  }
  // Member: float64_values_default
  {
    const size_t size = ros_message.float64_values_default.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.float64_values_default.data(), size);
  }
  // Member: int8_values_default
  {
    const size_t size = ros_message.int8_values_default.size();
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message.int8_values_default.data(), size);
  }
  // Member: uint8_values_default
  {
    const size_t size = ros_message.uint8_values_default.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.uint8_values_default.data(), size);
  }
  // Member: int16_values_default
  {
    const size_t size = ros_message.int16_values_default.size();
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message.int16_values_default.data(), size);
  }
  // Member: uint16_values_default
  {
    const size_t size = ros_message.uint16_values_default.size();
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message.uint16_values_default.data(), size);
  }
  // Member: int32_values_default
  {
    const size_t size = ros_message.int32_values_default.size();
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message.int32_values_default.data(), size);
  }
  // Member: uint32_values_default
  {
    const size_t size = ros_message.uint32_values_default.size();
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message.uint32_values_default.data(), size);
  }
  // Member: int64_values_default
  {
    const size_t size = ros_message.int64_values_default.size();
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message.int64_values_default.data(), size);
  }
  // Member: uint64_values_default
  {
    const size_t size = ros_message.uint64_values_default.size();
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message.uint64_values_default.data(), size);
  }
  // Member: string_values_default
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: alignment_check
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.alignment_check);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::Arrays & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.bool_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.byte_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.char_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.float32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.float64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values
  {
  }
  // Member: basic_types_values
  {
  }
  // Member: constants_values
  {
  }
  // Member: defaults_values
  {
  }
  // Member: bool_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.bool_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.byte_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.char_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.float32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.float64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.int64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message.uint64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values_default
  {
  }
  // Member: alignment_check
  {
    const size_t item_size = sizeof(ros_message.alignment_check);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_Arrays(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: string_values
  {
    *full_bounded = false;
  }
  // Member: basic_types_values
  {
    *full_bounded = false;
  }
  // Member: constants_values
  {
    *full_bounded = false;
  }
  // Member: defaults_values
  {
    *full_bounded = false;
  }
  // Member: bool_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: string_values_default
  {
    *full_bounded = false;
  }
  // Member: alignment_check
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static bool _Arrays__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Arrays *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Arrays__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::Arrays *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Arrays__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Arrays *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Arrays__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Arrays *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Arrays__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Arrays(&full_bounded, 0);
}

static message_type_support_callbacks_t _Arrays__callbacks = {
  "test_msgs::msg",
  "Arrays",
  _Arrays__cdr_serialize,
  _Arrays__cdr_deserialize,
  _Arrays__get_serialized_size,
  _Arrays__get_serialized_size_with_initial_alignment,
  _Arrays__max_serialized_size
};

static rosidl_message_type_support_t _Arrays__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Arrays__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::Arrays>()
{
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Arrays__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, Arrays)() {
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Arrays__handle;
}

#ifdef __cplusplus
}
#endif
