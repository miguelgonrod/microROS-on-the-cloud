// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/Range.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/range__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/range__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs


namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::Range & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: radiation_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.radiation_type);
  // Member: field_of_view
  rv = ucdr_serialize_float(cdr, ros_message.field_of_view);
  // Member: min_range
  rv = ucdr_serialize_float(cdr, ros_message.min_range);
  // Member: max_range
  rv = ucdr_serialize_float(cdr, ros_message.max_range);
  // Member: range
  rv = ucdr_serialize_float(cdr, ros_message.range);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::Range & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: radiation_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.radiation_type);
  // Member: field_of_view
  rv = ucdr_deserialize_float(cdr, &ros_message.field_of_view);
  // Member: min_range
  rv = ucdr_deserialize_float(cdr, &ros_message.min_range);
  // Member: max_range
  rv = ucdr_deserialize_float(cdr, &ros_message.max_range);
  // Member: range
  rv = ucdr_deserialize_float(cdr, &ros_message.range);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::Range & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: radiation_type
  {
    const size_t item_size = sizeof(ros_message.radiation_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: field_of_view
  {
    const size_t item_size = sizeof(ros_message.field_of_view);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: min_range
  {
    const size_t item_size = sizeof(ros_message.min_range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_range
  {
    const size_t item_size = sizeof(ros_message.max_range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range
  {
    const size_t item_size = sizeof(ros_message.range);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_Range(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: radiation_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: field_of_view
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: min_range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: max_range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _Range__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Range *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Range__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::Range *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Range__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Range *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Range__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Range *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Range__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Range(&full_bounded, 0);
}

static message_type_support_callbacks_t _Range__callbacks = {
  "sensor_msgs::msg",
  "Range",
  _Range__cdr_serialize,
  _Range__cdr_deserialize,
  _Range__get_serialized_size,
  _Range__get_serialized_size_with_initial_alignment,
  _Range__max_serialized_size
};

static rosidl_message_type_support_t _Range__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Range__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::Range>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Range__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, Range)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Range__handle;
}

#ifdef __cplusplus
}
#endif
