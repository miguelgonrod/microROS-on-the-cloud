// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/PointField.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/point_field__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/point_field__struct.hpp"

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

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::PointField & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message.offset);
  // Member: datatype
  rv = ucdr_serialize_uint8_t(cdr, ros_message.datatype);
  // Member: count
  rv = ucdr_serialize_uint32_t(cdr, ros_message.count);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::PointField & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.offset);
  // Member: datatype
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.datatype);
  // Member: count
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.count);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::PointField & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: offset
  {
    const size_t item_size = sizeof(ros_message.offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: datatype
  {
    const size_t item_size = sizeof(ros_message.datatype);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: count
  {
    const size_t item_size = sizeof(ros_message.count);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_PointField(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: datatype
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: count
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static bool _PointField__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointField *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PointField__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::PointField *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PointField__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointField *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PointField__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointField *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _PointField__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_PointField(&full_bounded, 0);
}

static message_type_support_callbacks_t _PointField__callbacks = {
  "sensor_msgs::msg",
  "PointField",
  _PointField__cdr_serialize,
  _PointField__cdr_deserialize,
  _PointField__get_serialized_size,
  _PointField__get_serialized_size_with_initial_alignment,
  _PointField__max_serialized_size
};

static rosidl_message_type_support_t _PointField__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_PointField__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::PointField>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_PointField__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, PointField)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_PointField__handle;
}

#ifdef __cplusplus
}
#endif
