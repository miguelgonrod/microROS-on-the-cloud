// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/UInt16.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/u_int16__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "example_interfaces/msg/detail/u_int16__struct.hpp"

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

namespace example_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::UInt16 & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: data
  rv = ucdr_serialize_uint16_t(cdr, ros_message.data);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::msg::UInt16 & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: data
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.data);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::UInt16 & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t item_size = sizeof(ros_message.data);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_UInt16(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static bool _UInt16__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::UInt16 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UInt16__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::UInt16 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UInt16__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::UInt16 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UInt16__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::UInt16 *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _UInt16__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_UInt16(&full_bounded, 0);
}

static message_type_support_callbacks_t _UInt16__callbacks = {
  "example_interfaces::msg",
  "UInt16",
  _UInt16__cdr_serialize,
  _UInt16__cdr_deserialize,
  _UInt16__get_serialized_size,
  _UInt16__get_serialized_size_with_initial_alignment,
  _UInt16__max_serialized_size
};

static rosidl_message_type_support_t _UInt16__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_UInt16__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::UInt16>()
{
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_UInt16__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, msg, UInt16)() {
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_UInt16__handle;
}

#ifdef __cplusplus
}
#endif
