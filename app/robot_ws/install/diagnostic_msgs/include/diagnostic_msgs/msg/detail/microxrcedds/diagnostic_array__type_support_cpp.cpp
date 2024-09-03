// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/diagnostic_array__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.hpp"

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

namespace diagnostic_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const diagnostic_msgs::msg::DiagnosticStatus &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  diagnostic_msgs::msg::DiagnosticStatus &);

size_t get_serialized_size(
  const diagnostic_msgs::msg::DiagnosticStatus &,
  size_t current_alignment);

size_t
max_serialized_size_DiagnosticStatus(
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
  const diagnostic_msgs::msg::DiagnosticArray & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: status
  {
    size_t size = ros_message.status.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.status[i],
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
  diagnostic_msgs::msg::DiagnosticArray & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: status
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.status.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.status[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
get_serialized_size(
  const diagnostic_msgs::msg::DiagnosticArray & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: status
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.status.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = diagnostic_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.status[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_diagnostic_msgs
max_serialized_size_DiagnosticArray(
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
  // Member: status
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _DiagnosticArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<diagnostic_msgs::msg::DiagnosticArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticArray__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const diagnostic_msgs::msg::DiagnosticArray *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _DiagnosticArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_DiagnosticArray(&full_bounded, 0);
}

static message_type_support_callbacks_t _DiagnosticArray__callbacks = {
  "diagnostic_msgs::msg",
  "DiagnosticArray",
  _DiagnosticArray__cdr_serialize,
  _DiagnosticArray__cdr_deserialize,
  _DiagnosticArray__get_serialized_size,
  _DiagnosticArray__get_serialized_size_with_initial_alignment,
  _DiagnosticArray__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticArray__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_DiagnosticArray__callbacks,
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
get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticArray>()
{
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_DiagnosticArray__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, diagnostic_msgs, msg, DiagnosticArray)() {
  return &diagnostic_msgs::msg::typesupport_microxrcedds_cpp::_DiagnosticArray__handle;
}

#ifdef __cplusplus
}
#endif
