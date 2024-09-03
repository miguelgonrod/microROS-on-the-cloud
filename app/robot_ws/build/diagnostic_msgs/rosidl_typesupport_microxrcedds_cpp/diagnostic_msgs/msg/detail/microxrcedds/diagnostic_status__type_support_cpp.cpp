// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

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
bool cdr_serialize(
  const diagnostic_msgs::msg::KeyValue &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  diagnostic_msgs::msg::KeyValue &);

size_t get_serialized_size(
  const diagnostic_msgs::msg::KeyValue &,
  size_t current_alignment);

size_t
max_serialized_size_KeyValue(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace diagnostic_msgs


namespace diagnostic_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
cdr_serialize(
  const diagnostic_msgs::msg::DiagnosticStatus & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: level
  rv = ucdr_serialize_uint8_t(cdr, ros_message.level);
  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: message
  rv = ucdr_serialize_string(cdr, ros_message.message.c_str());
  // Member: hardware_id
  rv = ucdr_serialize_string(cdr, ros_message.hardware_id.c_str());
  // Member: values
  {
    size_t size = ros_message.values.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.values[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  diagnostic_msgs::msg::DiagnosticStatus & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: level
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.level);
  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: message
  ros_message.message.resize(ros_message.message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.message[0], ros_message.message.capacity());
  if (rv) {
    ros_message.message.resize(std::strlen(&ros_message.message[0]));
  }
  // Member: hardware_id
  ros_message.hardware_id.resize(ros_message.hardware_id.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.hardware_id[0], ros_message.hardware_id.capacity());
  if (rv) {
    ros_message.hardware_id.resize(std::strlen(&ros_message.hardware_id[0]));
  }
  // Member: values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.values.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.values[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
get_serialized_size(
  const diagnostic_msgs::msg::DiagnosticStatus & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: level
  {
    const size_t item_size = sizeof(ros_message.level);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.message.size() + 1;
  // Member: hardware_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.hardware_id.size() + 1;
  // Member: values
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.values.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.values[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
max_serialized_size_DiagnosticStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: level
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: name
  *full_bounded = false;
  // Member: message
  *full_bounded = false;
  // Member: hardware_id
  *full_bounded = false;
  // Member: values
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _DiagnosticStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticStatus__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _DiagnosticStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_DiagnosticStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t _DiagnosticStatus__callbacks = {
  "diagnostic_msgs::msg",
  "DiagnosticStatus",
  _DiagnosticStatus__cdr_serialize,
  _DiagnosticStatus__cdr_deserialize,
  _DiagnosticStatus__get_serialized_size,
  _DiagnosticStatus__get_serialized_size_with_initial_alignment,
  _DiagnosticStatus__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticStatus__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_DiagnosticStatus__callbacks,
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
get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_DiagnosticStatus__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, msg, DiagnosticStatus)() {
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_DiagnosticStatus__handle;
}

#ifdef __cplusplus
}
#endif
