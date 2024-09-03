// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from builtin_interfaces:msg/Time.idl
// generated code does not contain a copyright notice
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "builtin_interfaces/msg/detail/time__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
cdr_serialize(
  const builtin_interfaces::msg::Time & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sec
  rv = ucdr_serialize_int32_t(cdr, ros_message.sec);
  // Member: nanosec
  rv = ucdr_serialize_uint32_t(cdr, ros_message.nanosec);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  builtin_interfaces::msg::Time & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sec
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.sec);
  // Member: nanosec
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.nanosec);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
get_serialized_size(
  const builtin_interfaces::msg::Time & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sec
  {
    const size_t item_size = sizeof(ros_message.sec);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: nanosec
  {
    const size_t item_size = sizeof(ros_message.nanosec);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sec
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: nanosec
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const builtin_interfaces::msg::Time *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Time__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<builtin_interfaces::msg::Time *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Time__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const builtin_interfaces::msg::Time *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Time__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const builtin_interfaces::msg::Time *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Time__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Time(&full_bounded, 0);
}

static message_type_support_callbacks_t _Time__callbacks = {
  "builtin_interfaces::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__get_serialized_size_with_initial_alignment,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Time__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace builtin_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_builtin_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<builtin_interfaces::msg::Time>()
{
  return &builtin_interfaces::msg::typesupport_microxrcedds_cpp::_Time__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, builtin_interfaces, msg, Time)() {
  return &builtin_interfaces::msg::typesupport_microxrcedds_cpp::_Time__handle;
}

#ifdef __cplusplus
}
#endif
