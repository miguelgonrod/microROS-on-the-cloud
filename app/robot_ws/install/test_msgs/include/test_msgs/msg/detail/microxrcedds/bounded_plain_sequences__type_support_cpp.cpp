// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/BoundedPlainSequences.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/bounded_plain_sequences__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/msg/detail/bounded_plain_sequences__struct.hpp"

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
  const test_msgs::msg::BoundedPlainSequences & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: bool_values
  {
    size_t size = ros_message.bool_values.size();
    bool temp[3] = {0};
    std::copy(ros_message.bool_values.begin(), ros_message.bool_values.end(), std::begin(temp));
    rv = ucdr_serialize_sequence_bool(cdr, temp, size);
  }
  // Member: byte_values
  {
    size_t size = ros_message.byte_values.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.byte_values[0], size);
  }
  // Member: char_values
  {
    size_t size = ros_message.char_values.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.char_values[0], size);
  }
  // Member: float32_values
  {
    size_t size = ros_message.float32_values.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.float32_values[0], size);
  }
  // Member: float64_values
  {
    size_t size = ros_message.float64_values.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.float64_values[0], size);
  }
  // Member: int8_values
  {
    size_t size = ros_message.int8_values.size();
    rv = ucdr_serialize_sequence_int8_t(cdr, &ros_message.int8_values[0], size);
  }
  // Member: uint8_values
  {
    size_t size = ros_message.uint8_values.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.uint8_values[0], size);
  }
  // Member: int16_values
  {
    size_t size = ros_message.int16_values.size();
    rv = ucdr_serialize_sequence_int16_t(cdr, &ros_message.int16_values[0], size);
  }
  // Member: uint16_values
  {
    size_t size = ros_message.uint16_values.size();
    rv = ucdr_serialize_sequence_uint16_t(cdr, &ros_message.uint16_values[0], size);
  }
  // Member: int32_values
  {
    size_t size = ros_message.int32_values.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.int32_values[0], size);
  }
  // Member: uint32_values
  {
    size_t size = ros_message.uint32_values.size();
    rv = ucdr_serialize_sequence_uint32_t(cdr, &ros_message.uint32_values[0], size);
  }
  // Member: int64_values
  {
    size_t size = ros_message.int64_values.size();
    rv = ucdr_serialize_sequence_int64_t(cdr, &ros_message.int64_values[0], size);
  }
  // Member: uint64_values
  {
    size_t size = ros_message.uint64_values.size();
    rv = ucdr_serialize_sequence_uint64_t(cdr, &ros_message.uint64_values[0], size);
  }
  // Member: basic_types_values
  {
    size_t size = ros_message.basic_types_values.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.basic_types_values[i],
        cdr);
      i++;
    }
  }
  // Member: constants_values
  {
    size_t size = ros_message.constants_values.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.constants_values[i],
        cdr);
      i++;
    }
  }
  // Member: defaults_values
  {
    size_t size = ros_message.defaults_values.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.defaults_values[i],
        cdr);
      i++;
    }
  }
  // Member: bool_values_default
  {
    size_t size = ros_message.bool_values_default.size();
    bool temp[3] = {0};
    std::copy(ros_message.bool_values_default.begin(), ros_message.bool_values_default.end(), std::begin(temp));
    rv = ucdr_serialize_sequence_bool(cdr, temp, size);
  }
  // Member: byte_values_default
  {
    size_t size = ros_message.byte_values_default.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.byte_values_default[0], size);
  }
  // Member: char_values_default
  {
    size_t size = ros_message.char_values_default.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.char_values_default[0], size);
  }
  // Member: float32_values_default
  {
    size_t size = ros_message.float32_values_default.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.float32_values_default[0], size);
  }
  // Member: float64_values_default
  {
    size_t size = ros_message.float64_values_default.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.float64_values_default[0], size);
  }
  // Member: int8_values_default
  {
    size_t size = ros_message.int8_values_default.size();
    rv = ucdr_serialize_sequence_int8_t(cdr, &ros_message.int8_values_default[0], size);
  }
  // Member: uint8_values_default
  {
    size_t size = ros_message.uint8_values_default.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.uint8_values_default[0], size);
  }
  // Member: int16_values_default
  {
    size_t size = ros_message.int16_values_default.size();
    rv = ucdr_serialize_sequence_int16_t(cdr, &ros_message.int16_values_default[0], size);
  }
  // Member: uint16_values_default
  {
    size_t size = ros_message.uint16_values_default.size();
    rv = ucdr_serialize_sequence_uint16_t(cdr, &ros_message.uint16_values_default[0], size);
  }
  // Member: int32_values_default
  {
    size_t size = ros_message.int32_values_default.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.int32_values_default[0], size);
  }
  // Member: uint32_values_default
  {
    size_t size = ros_message.uint32_values_default.size();
    rv = ucdr_serialize_sequence_uint32_t(cdr, &ros_message.uint32_values_default[0], size);
  }
  // Member: int64_values_default
  {
    size_t size = ros_message.int64_values_default.size();
    rv = ucdr_serialize_sequence_int64_t(cdr, &ros_message.int64_values_default[0], size);
  }
  // Member: uint64_values_default
  {
    size_t size = ros_message.uint64_values_default.size();
    rv = ucdr_serialize_sequence_uint64_t(cdr, &ros_message.uint64_values_default[0], size);
  }
  // Member: alignment_check
  rv = ucdr_serialize_int32_t(cdr, ros_message.alignment_check);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::msg::BoundedPlainSequences & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: bool_values
  {
    uint32_t size;
    const size_t capacity = ros_message.bool_values.capacity();
    ros_message.bool_values.resize(capacity);
    bool temp[3] = {0};
    rv = ucdr_deserialize_sequence_bool(cdr, temp, 3, &size);
    if (rv) {
      std::copy(std::begin(temp), std::begin(temp) + size, ros_message.bool_values.begin());
    }
    if (rv) {
      ros_message.bool_values.resize(size);
    }
  }
  // Member: byte_values
  {
    uint32_t size;
    const size_t capacity = ros_message.byte_values.capacity();
    ros_message.byte_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.byte_values[0], capacity, &size);
    if (rv) {
      ros_message.byte_values.resize(size);
    }
  }
  // Member: char_values
  {
    uint32_t size;
    const size_t capacity = ros_message.char_values.capacity();
    ros_message.char_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.char_values[0], capacity, &size);
    if (rv) {
      ros_message.char_values.resize(size);
    }
  }
  // Member: float32_values
  {
    uint32_t size;
    const size_t capacity = ros_message.float32_values.capacity();
    ros_message.float32_values.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.float32_values[0], capacity, &size);
    if (rv) {
      ros_message.float32_values.resize(size);
    }
  }
  // Member: float64_values
  {
    uint32_t size;
    const size_t capacity = ros_message.float64_values.capacity();
    ros_message.float64_values.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.float64_values[0], capacity, &size);
    if (rv) {
      ros_message.float64_values.resize(size);
    }
  }
  // Member: int8_values
  {
    uint32_t size;
    const size_t capacity = ros_message.int8_values.capacity();
    ros_message.int8_values.resize(capacity);
    rv = ucdr_deserialize_sequence_int8_t(cdr, &ros_message.int8_values[0], capacity, &size);
    if (rv) {
      ros_message.int8_values.resize(size);
    }
  }
  // Member: uint8_values
  {
    uint32_t size;
    const size_t capacity = ros_message.uint8_values.capacity();
    ros_message.uint8_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.uint8_values[0], capacity, &size);
    if (rv) {
      ros_message.uint8_values.resize(size);
    }
  }
  // Member: int16_values
  {
    uint32_t size;
    const size_t capacity = ros_message.int16_values.capacity();
    ros_message.int16_values.resize(capacity);
    rv = ucdr_deserialize_sequence_int16_t(cdr, &ros_message.int16_values[0], capacity, &size);
    if (rv) {
      ros_message.int16_values.resize(size);
    }
  }
  // Member: uint16_values
  {
    uint32_t size;
    const size_t capacity = ros_message.uint16_values.capacity();
    ros_message.uint16_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint16_t(cdr, &ros_message.uint16_values[0], capacity, &size);
    if (rv) {
      ros_message.uint16_values.resize(size);
    }
  }
  // Member: int32_values
  {
    uint32_t size;
    const size_t capacity = ros_message.int32_values.capacity();
    ros_message.int32_values.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.int32_values[0], capacity, &size);
    if (rv) {
      ros_message.int32_values.resize(size);
    }
  }
  // Member: uint32_values
  {
    uint32_t size;
    const size_t capacity = ros_message.uint32_values.capacity();
    ros_message.uint32_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint32_t(cdr, &ros_message.uint32_values[0], capacity, &size);
    if (rv) {
      ros_message.uint32_values.resize(size);
    }
  }
  // Member: int64_values
  {
    uint32_t size;
    const size_t capacity = ros_message.int64_values.capacity();
    ros_message.int64_values.resize(capacity);
    rv = ucdr_deserialize_sequence_int64_t(cdr, &ros_message.int64_values[0], capacity, &size);
    if (rv) {
      ros_message.int64_values.resize(size);
    }
  }
  // Member: uint64_values
  {
    uint32_t size;
    const size_t capacity = ros_message.uint64_values.capacity();
    ros_message.uint64_values.resize(capacity);
    rv = ucdr_deserialize_sequence_uint64_t(cdr, &ros_message.uint64_values[0], capacity, &size);
    if (rv) {
      ros_message.uint64_values.resize(size);
    }
  }
  // Member: basic_types_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.basic_types_values.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.basic_types_values[i]);
      i++;
    }
  }
  // Member: constants_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.constants_values.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.constants_values[i]);
      i++;
    }
  }
  // Member: defaults_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.defaults_values.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.defaults_values[i]);
      i++;
    }
  }
  // Member: bool_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.bool_values_default.capacity();
    ros_message.bool_values_default.resize(capacity);
    bool temp[3] = {0};
    rv = ucdr_deserialize_sequence_bool(cdr, temp, 3, &size);
    if (rv) {
      std::copy(std::begin(temp), std::begin(temp) + size, ros_message.bool_values_default.begin());
    }
    if (rv) {
      ros_message.bool_values_default.resize(size);
    }
  }
  // Member: byte_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.byte_values_default.capacity();
    ros_message.byte_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.byte_values_default[0], capacity, &size);
    if (rv) {
      ros_message.byte_values_default.resize(size);
    }
  }
  // Member: char_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.char_values_default.capacity();
    ros_message.char_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.char_values_default[0], capacity, &size);
    if (rv) {
      ros_message.char_values_default.resize(size);
    }
  }
  // Member: float32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.float32_values_default.capacity();
    ros_message.float32_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.float32_values_default[0], capacity, &size);
    if (rv) {
      ros_message.float32_values_default.resize(size);
    }
  }
  // Member: float64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.float64_values_default.capacity();
    ros_message.float64_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.float64_values_default[0], capacity, &size);
    if (rv) {
      ros_message.float64_values_default.resize(size);
    }
  }
  // Member: int8_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.int8_values_default.capacity();
    ros_message.int8_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_int8_t(cdr, &ros_message.int8_values_default[0], capacity, &size);
    if (rv) {
      ros_message.int8_values_default.resize(size);
    }
  }
  // Member: uint8_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.uint8_values_default.capacity();
    ros_message.uint8_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.uint8_values_default[0], capacity, &size);
    if (rv) {
      ros_message.uint8_values_default.resize(size);
    }
  }
  // Member: int16_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.int16_values_default.capacity();
    ros_message.int16_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_int16_t(cdr, &ros_message.int16_values_default[0], capacity, &size);
    if (rv) {
      ros_message.int16_values_default.resize(size);
    }
  }
  // Member: uint16_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.uint16_values_default.capacity();
    ros_message.uint16_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint16_t(cdr, &ros_message.uint16_values_default[0], capacity, &size);
    if (rv) {
      ros_message.uint16_values_default.resize(size);
    }
  }
  // Member: int32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.int32_values_default.capacity();
    ros_message.int32_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.int32_values_default[0], capacity, &size);
    if (rv) {
      ros_message.int32_values_default.resize(size);
    }
  }
  // Member: uint32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.uint32_values_default.capacity();
    ros_message.uint32_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint32_t(cdr, &ros_message.uint32_values_default[0], capacity, &size);
    if (rv) {
      ros_message.uint32_values_default.resize(size);
    }
  }
  // Member: int64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.int64_values_default.capacity();
    ros_message.int64_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_int64_t(cdr, &ros_message.int64_values_default[0], capacity, &size);
    if (rv) {
      ros_message.int64_values_default.resize(size);
    }
  }
  // Member: uint64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message.uint64_values_default.capacity();
    ros_message.uint64_values_default.resize(capacity);
    rv = ucdr_deserialize_sequence_uint64_t(cdr, &ros_message.uint64_values_default[0], capacity, &size);
    if (rv) {
      ros_message.uint64_values_default.resize(size);
    }
  }
  // Member: alignment_check
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.alignment_check);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::BoundedPlainSequences & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.bool_values.size();
    size_t item_size = sizeof(ros_message.bool_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: byte_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.byte_values.size();
    size_t item_size = sizeof(ros_message.byte_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: char_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.char_values.size();
    size_t item_size = sizeof(ros_message.char_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: float32_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.float32_values.size();
    size_t item_size = sizeof(ros_message.float32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: float64_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.float64_values.size();
    size_t item_size = sizeof(ros_message.float64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int8_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int8_values.size();
    size_t item_size = sizeof(ros_message.int8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint8_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint8_values.size();
    size_t item_size = sizeof(ros_message.uint8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int16_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int16_values.size();
    size_t item_size = sizeof(ros_message.int16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint16_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint16_values.size();
    size_t item_size = sizeof(ros_message.uint16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int32_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int32_values.size();
    size_t item_size = sizeof(ros_message.int32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint32_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint32_values.size();
    size_t item_size = sizeof(ros_message.uint32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int64_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int64_values.size();
    size_t item_size = sizeof(ros_message.int64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint64_values
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint64_values.size();
    size_t item_size = sizeof(ros_message.uint64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: basic_types_values
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.basic_types_values.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.basic_types_values[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: constants_values
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.constants_values.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.constants_values[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: defaults_values
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.defaults_values.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.defaults_values[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: bool_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.bool_values_default.size();
    size_t item_size = sizeof(ros_message.bool_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: byte_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.byte_values_default.size();
    size_t item_size = sizeof(ros_message.byte_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: char_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.char_values_default.size();
    size_t item_size = sizeof(ros_message.char_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: float32_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.float32_values_default.size();
    size_t item_size = sizeof(ros_message.float32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: float64_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.float64_values_default.size();
    size_t item_size = sizeof(ros_message.float64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int8_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int8_values_default.size();
    size_t item_size = sizeof(ros_message.int8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint8_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint8_values_default.size();
    size_t item_size = sizeof(ros_message.uint8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int16_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int16_values_default.size();
    size_t item_size = sizeof(ros_message.int16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint16_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint16_values_default.size();
    size_t item_size = sizeof(ros_message.uint16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int32_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int32_values_default.size();
    size_t item_size = sizeof(ros_message.int32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint32_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint32_values_default.size();
    size_t item_size = sizeof(ros_message.uint32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int64_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int64_values_default.size();
    size_t item_size = sizeof(ros_message.int64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: uint64_values_default
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.uint64_values_default.size();
    size_t item_size = sizeof(ros_message.uint64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
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
max_serialized_size_BoundedPlainSequences(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (max_sequence_size * sizeof(bool));
  }
  // Member: byte_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: char_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: float32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (max_sequence_size * sizeof(float));
  }
  // Member: float64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: int8_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (max_sequence_size * sizeof(int8_t));
  }
  // Member: uint8_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: int16_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (max_sequence_size * sizeof(int16_t));
  }
  // Member: uint16_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (max_sequence_size * sizeof(uint16_t));
  }
  // Member: int32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (max_sequence_size * sizeof(int32_t));
  }
  // Member: uint32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (max_sequence_size * sizeof(uint32_t));
  }
  // Member: int64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (max_sequence_size * sizeof(int64_t));
  }
  // Member: uint64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (max_sequence_size * sizeof(uint64_t));
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
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (max_sequence_size * sizeof(bool));
  }
  // Member: byte_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: char_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: float32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (max_sequence_size * sizeof(float));
  }
  // Member: float64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: int8_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (max_sequence_size * sizeof(int8_t));
  }
  // Member: uint8_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: int16_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (max_sequence_size * sizeof(int16_t));
  }
  // Member: uint16_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (max_sequence_size * sizeof(uint16_t));
  }
  // Member: int32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (max_sequence_size * sizeof(int32_t));
  }
  // Member: uint32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (max_sequence_size * sizeof(uint32_t));
  }
  // Member: int64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (max_sequence_size * sizeof(int64_t));
  }
  // Member: uint64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (max_sequence_size * sizeof(uint64_t));
  }
  // Member: alignment_check
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static bool _BoundedPlainSequences__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::BoundedPlainSequences *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BoundedPlainSequences__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::BoundedPlainSequences *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BoundedPlainSequences__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::BoundedPlainSequences *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BoundedPlainSequences__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::msg::BoundedPlainSequences *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _BoundedPlainSequences__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_BoundedPlainSequences(&full_bounded, 0);
}

static message_type_support_callbacks_t _BoundedPlainSequences__callbacks = {
  "test_msgs::msg",
  "BoundedPlainSequences",
  _BoundedPlainSequences__cdr_serialize,
  _BoundedPlainSequences__cdr_deserialize,
  _BoundedPlainSequences__get_serialized_size,
  _BoundedPlainSequences__get_serialized_size_with_initial_alignment,
  _BoundedPlainSequences__max_serialized_size
};

static rosidl_message_type_support_t _BoundedPlainSequences__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_BoundedPlainSequences__callbacks,
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
get_message_type_support_handle<test_msgs::msg::BoundedPlainSequences>()
{
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_BoundedPlainSequences__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, BoundedPlainSequences)() {
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_BoundedPlainSequences__handle;
}

#ifdef __cplusplus
}
#endif
