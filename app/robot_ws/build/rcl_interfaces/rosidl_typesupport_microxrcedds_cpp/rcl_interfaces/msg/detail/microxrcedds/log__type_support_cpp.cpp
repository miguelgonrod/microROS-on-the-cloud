// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/Log.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/log__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/log__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::Log & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: level
  rv = ucdr_serialize_uint8_t(cdr, ros_message.level);
  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: msg
  rv = ucdr_serialize_string(cdr, ros_message.msg.c_str());
  // Member: file
  rv = ucdr_serialize_string(cdr, ros_message.file.c_str());
  // Member: function
  rv = ucdr_serialize_string(cdr, ros_message.function.c_str());
  // Member: line
  rv = ucdr_serialize_uint32_t(cdr, ros_message.line);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::Log & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);
  // Member: level
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.level);
  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: msg
  ros_message.msg.resize(ros_message.msg.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.msg[0], ros_message.msg.capacity());
  if (rv) {
    ros_message.msg.resize(std::strlen(&ros_message.msg[0]));
  }
  // Member: file
  ros_message.file.resize(ros_message.file.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.file[0], ros_message.file.capacity());
  if (rv) {
    ros_message.file.resize(std::strlen(&ros_message.file[0]));
  }
  // Member: function
  ros_message.function.resize(ros_message.function.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.function[0], ros_message.function.capacity());
  if (rv) {
    ros_message.function.resize(std::strlen(&ros_message.function[0]));
  }
  // Member: line
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.line);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::Log & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);
  // Member: level
  {
    const size_t item_size = sizeof(ros_message.level);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: msg
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.msg.size() + 1;
  // Member: file
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.file.size() + 1;
  // Member: function
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.function.size() + 1;
  // Member: line
  {
    const size_t item_size = sizeof(ros_message.line);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_Log(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: level
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: name
  *full_bounded = false;
  // Member: msg
  *full_bounded = false;
  // Member: file
  *full_bounded = false;
  // Member: function
  *full_bounded = false;
  // Member: line
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static bool _Log__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::Log *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Log__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::Log *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Log__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::Log *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Log__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::Log *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Log__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Log(&full_bounded, 0);
}

static message_type_support_callbacks_t _Log__callbacks = {
  "rcl_interfaces::msg",
  "Log",
  _Log__cdr_serialize,
  _Log__cdr_deserialize,
  _Log__get_serialized_size,
  _Log__get_serialized_size_with_initial_alignment,
  _Log__max_serialized_size
};

static rosidl_message_type_support_t _Log__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Log__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::msg::Log>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_Log__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, Log)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_Log__handle;
}

#ifdef __cplusplus
}
#endif
