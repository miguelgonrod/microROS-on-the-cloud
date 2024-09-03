// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/ParameterType.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_type__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/parameter_type__struct.hpp"

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
  const rcl_interfaces::msg::ParameterType & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::ParameterType & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::ParameterType & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_ParameterType(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _ParameterType__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParameterType__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::ParameterType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParameterType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParameterType__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterType *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ParameterType__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ParameterType(&full_bounded, 0);
}

static message_type_support_callbacks_t _ParameterType__callbacks = {
  "rcl_interfaces::msg",
  "ParameterType",
  _ParameterType__cdr_serialize,
  _ParameterType__cdr_deserialize,
  _ParameterType__get_serialized_size,
  _ParameterType__get_serialized_size_with_initial_alignment,
  _ParameterType__max_serialized_size
};

static rosidl_message_type_support_t _ParameterType__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ParameterType__callbacks,
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
get_message_type_support_handle<rcl_interfaces::msg::ParameterType>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterType__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, ParameterType)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterType__handle;
}

#ifdef __cplusplus
}
#endif
