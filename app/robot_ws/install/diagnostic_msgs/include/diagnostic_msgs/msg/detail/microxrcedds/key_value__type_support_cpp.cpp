// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"

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

namespace diagnostic_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
cdr_serialize(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: key
  rv = ucdr_serialize_string(cdr, ros_message.key.c_str());
  // Member: value
  rv = ucdr_serialize_string(cdr, ros_message.value.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  diagnostic_msgs::msg::KeyValue & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: key
  ros_message.key.resize(ros_message.key.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.key[0], ros_message.key.capacity());
  if (rv) {
    ros_message.key.resize(std::strlen(&ros_message.key[0]));
  }
  // Member: value
  ros_message.value.resize(ros_message.value.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.value[0], ros_message.value.capacity());
  if (rv) {
    ros_message.value.resize(std::strlen(&ros_message.value[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
get_serialized_size(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: key
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.key.size() + 1;
  // Member: value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.value.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
max_serialized_size_KeyValue(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: key
  *full_bounded = false;
  // Member: value
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _KeyValue__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::KeyValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KeyValue__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<diagnostic_msgs::msg::KeyValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KeyValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::KeyValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KeyValue__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::KeyValue *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _KeyValue__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_KeyValue(&full_bounded, 0);
}

static message_type_support_callbacks_t _KeyValue__callbacks = {
  "diagnostic_msgs::msg",
  "KeyValue",
  _KeyValue__cdr_serialize,
  _KeyValue__cdr_deserialize,
  _KeyValue__get_serialized_size,
  _KeyValue__get_serialized_size_with_initial_alignment,
  _KeyValue__max_serialized_size
};

static rosidl_message_type_support_t _KeyValue__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_KeyValue__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace diagnostic_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::msg::KeyValue>()
{
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_KeyValue__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, msg, KeyValue)() {
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_KeyValue__handle;
}

#ifdef __cplusplus
}
#endif
