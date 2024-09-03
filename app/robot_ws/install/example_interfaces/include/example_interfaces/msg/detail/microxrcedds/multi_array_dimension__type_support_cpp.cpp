// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/multi_array_dimension__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "example_interfaces/msg/detail/multi_array_dimension__struct.hpp"

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
  const example_interfaces::msg::MultiArrayDimension & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: label
  rv = ucdr_serialize_string(cdr, ros_message.label.c_str());
  // Member: size
  rv = ucdr_serialize_uint32_t(cdr, ros_message.size);
  // Member: stride
  rv = ucdr_serialize_uint32_t(cdr, ros_message.stride);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::msg::MultiArrayDimension & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: label
  ros_message.label.resize(ros_message.label.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.label[0], ros_message.label.capacity());
  if (rv) {
    ros_message.label.resize(std::strlen(&ros_message.label[0]));
  }
  // Member: size
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.size);
  // Member: stride
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.stride);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::MultiArrayDimension & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: label
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.label.size() + 1;
  // Member: size
  {
    const size_t item_size = sizeof(ros_message.size);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stride
  {
    const size_t item_size = sizeof(ros_message.stride);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_MultiArrayDimension(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: label
  *full_bounded = false;
  // Member: size
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: stride
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static bool _MultiArrayDimension__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayDimension *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiArrayDimension__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::MultiArrayDimension *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiArrayDimension__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayDimension *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiArrayDimension__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayDimension *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MultiArrayDimension__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MultiArrayDimension(&full_bounded, 0);
}

static message_type_support_callbacks_t _MultiArrayDimension__callbacks = {
  "example_interfaces::msg",
  "MultiArrayDimension",
  _MultiArrayDimension__cdr_serialize,
  _MultiArrayDimension__cdr_deserialize,
  _MultiArrayDimension__get_serialized_size,
  _MultiArrayDimension__get_serialized_size_with_initial_alignment,
  _MultiArrayDimension__max_serialized_size
};

static rosidl_message_type_support_t _MultiArrayDimension__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MultiArrayDimension__callbacks,
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
get_message_type_support_handle<example_interfaces::msg::MultiArrayDimension>()
{
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_MultiArrayDimension__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, msg, MultiArrayDimension)() {
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_MultiArrayDimension__handle;
}

#ifdef __cplusplus
}
#endif
