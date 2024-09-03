// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/Joy.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/joy__struct.hpp"

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
  const sensor_msgs::msg::Joy & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: axes
  {
    size_t size = ros_message.axes.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.axes[0], size);
  }
  // Member: buttons
  {
    size_t size = ros_message.buttons.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.buttons[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::Joy & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: axes
  {
    uint32_t size;
    const size_t capacity = ros_message.axes.capacity();
    ros_message.axes.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.axes[0], capacity, &size);
    if (rv) {
      ros_message.axes.resize(size);
    }
  }
  // Member: buttons
  {
    uint32_t size;
    const size_t capacity = ros_message.buttons.capacity();
    ros_message.buttons.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.buttons[0], capacity, &size);
    if (rv) {
      ros_message.buttons.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::Joy & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: axes
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.axes.size();
    size_t item_size = sizeof(ros_message.axes[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: buttons
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.buttons.size();
    size_t item_size = sizeof(ros_message.buttons[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_Joy(
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
  // Member: axes
  {
    *full_bounded = false;
  }
  // Member: buttons
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Joy__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Joy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Joy__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::Joy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Joy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Joy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Joy__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Joy *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Joy__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Joy(&full_bounded, 0);
}

static message_type_support_callbacks_t _Joy__callbacks = {
  "sensor_msgs::msg",
  "Joy",
  _Joy__cdr_serialize,
  _Joy__cdr_deserialize,
  _Joy__get_serialized_size,
  _Joy__get_serialized_size_with_initial_alignment,
  _Joy__max_serialized_size
};

static rosidl_message_type_support_t _Joy__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Joy__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::Joy>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Joy__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, Joy)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Joy__handle;
}

#ifdef __cplusplus
}
#endif
