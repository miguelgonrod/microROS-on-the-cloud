// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy_feedback__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/joy_feedback__struct.hpp"

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
  const sensor_msgs::msg::JoyFeedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.type);
  // Member: id
  rv = ucdr_serialize_uint8_t(cdr, ros_message.id);
  // Member: intensity
  rv = ucdr_serialize_float(cdr, ros_message.intensity);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::JoyFeedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.type);
  // Member: id
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.id);
  // Member: intensity
  rv = ucdr_deserialize_float(cdr, &ros_message.intensity);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::JoyFeedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: id
  {
    const size_t item_size = sizeof(ros_message.id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: intensity
  {
    const size_t item_size = sizeof(ros_message.intensity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_JoyFeedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: intensity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _JoyFeedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::JoyFeedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JoyFeedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::JoyFeedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JoyFeedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::JoyFeedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JoyFeedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::JoyFeedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _JoyFeedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_JoyFeedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _JoyFeedback__callbacks = {
  "sensor_msgs::msg",
  "JoyFeedback",
  _JoyFeedback__cdr_serialize,
  _JoyFeedback__cdr_deserialize,
  _JoyFeedback__get_serialized_size,
  _JoyFeedback__get_serialized_size_with_initial_alignment,
  _JoyFeedback__max_serialized_size
};

static rosidl_message_type_support_t _JoyFeedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_JoyFeedback__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::JoyFeedback>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_JoyFeedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, JoyFeedback)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_JoyFeedback__handle;
}

#ifdef __cplusplus
}
#endif
