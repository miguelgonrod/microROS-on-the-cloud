// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/set_parameters_result__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.hpp"

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

namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::SetParametersResult & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: successful
  rv = ucdr_serialize_bool(cdr, ros_message.successful);
  // Member: reason
  rv = ucdr_serialize_string(cdr, ros_message.reason.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::SetParametersResult & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: successful
  rv = ucdr_deserialize_bool(cdr, &ros_message.successful);
  // Member: reason
  ros_message.reason.resize(ros_message.reason.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.reason[0], ros_message.reason.capacity());
  if (rv) {
    ros_message.reason.resize(std::strlen(&ros_message.reason[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::SetParametersResult & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  {
    const size_t item_size = sizeof(ros_message.successful);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: reason
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.reason.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_SetParametersResult(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: reason
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _SetParametersResult__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::SetParametersResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetParametersResult__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::SetParametersResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetParametersResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::SetParametersResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetParametersResult__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::SetParametersResult *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetParametersResult__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetParametersResult(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetParametersResult__callbacks = {
  "rcl_interfaces::msg",
  "SetParametersResult",
  _SetParametersResult__cdr_serialize,
  _SetParametersResult__cdr_deserialize,
  _SetParametersResult__get_serialized_size,
  _SetParametersResult__get_serialized_size_with_initial_alignment,
  _SetParametersResult__max_serialized_size
};

static rosidl_message_type_support_t _SetParametersResult__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetParametersResult__callbacks,
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
get_message_type_support_handle<rcl_interfaces::msg::SetParametersResult>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_SetParametersResult__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, SetParametersResult)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_SetParametersResult__handle;
}

#ifdef __cplusplus
}
#endif
