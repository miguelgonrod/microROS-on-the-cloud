// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

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
  const sensor_msgs::msg::RegionOfInterest & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: x_offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message.x_offset);
  // Member: y_offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message.y_offset);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message.height);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message.width);
  // Member: do_rectify
  rv = ucdr_serialize_bool(cdr, ros_message.do_rectify);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::RegionOfInterest & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: x_offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.x_offset);
  // Member: y_offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.y_offset);
  // Member: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.height);
  // Member: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.width);
  // Member: do_rectify
  rv = ucdr_deserialize_bool(cdr, &ros_message.do_rectify);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::RegionOfInterest & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: x_offset
  {
    const size_t item_size = sizeof(ros_message.x_offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y_offset
  {
    const size_t item_size = sizeof(ros_message.y_offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: height
  {
    const size_t item_size = sizeof(ros_message.height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message.width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: do_rectify
  {
    const size_t item_size = sizeof(ros_message.do_rectify);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_RegionOfInterest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: x_offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: y_offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: do_rectify
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _RegionOfInterest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegionOfInterest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegionOfInterest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegionOfInterest__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _RegionOfInterest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_RegionOfInterest(&full_bounded, 0);
}

static message_type_support_callbacks_t _RegionOfInterest__callbacks = {
  "sensor_msgs::msg",
  "RegionOfInterest",
  _RegionOfInterest__cdr_serialize,
  _RegionOfInterest__cdr_deserialize,
  _RegionOfInterest__get_serialized_size,
  _RegionOfInterest__get_serialized_size_with_initial_alignment,
  _RegionOfInterest__max_serialized_size
};

static rosidl_message_type_support_t _RegionOfInterest__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_RegionOfInterest__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::RegionOfInterest>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_RegionOfInterest__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, RegionOfInterest)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_RegionOfInterest__handle;
}

#ifdef __cplusplus
}
#endif
