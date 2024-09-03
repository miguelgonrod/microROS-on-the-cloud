// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/byte_multi_array__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "example_interfaces/msg/detail/byte_multi_array__struct.hpp"

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
bool cdr_serialize(
  const example_interfaces::msg::MultiArrayLayout &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  example_interfaces::msg::MultiArrayLayout &);

size_t get_serialized_size(
  const example_interfaces::msg::MultiArrayLayout &,
  size_t current_alignment);

size_t
max_serialized_size_MultiArrayLayout(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace example_interfaces


namespace example_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::ByteMultiArray & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: layout
  rv = example_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.layout,
    cdr);
  // Member: data
  {
    size_t size = ros_message.data.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.data[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::msg::ByteMultiArray & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: layout
  rv = example_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.layout);
  // Member: data
  {
    uint32_t size;
    const size_t capacity = ros_message.data.capacity();
    ros_message.data.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.data[0], capacity, &size);
    if (rv) {
      ros_message.data.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::ByteMultiArray & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: layout
  current_alignment += example_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.layout,
    current_alignment);
  // Member: data
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.data.size();
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_ByteMultiArray(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: layout
  current_alignment += example_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_MultiArrayLayout(
    full_bounded,
    current_alignment);
  // Member: data
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ByteMultiArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::ByteMultiArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ByteMultiArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::ByteMultiArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ByteMultiArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::ByteMultiArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ByteMultiArray__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::ByteMultiArray *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ByteMultiArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ByteMultiArray(&full_bounded, 0);
}

static message_type_support_callbacks_t _ByteMultiArray__callbacks = {
  "example_interfaces::msg",
  "ByteMultiArray",
  _ByteMultiArray__cdr_serialize,
  _ByteMultiArray__cdr_deserialize,
  _ByteMultiArray__get_serialized_size,
  _ByteMultiArray__get_serialized_size_with_initial_alignment,
  _ByteMultiArray__max_serialized_size
};

static rosidl_message_type_support_t _ByteMultiArray__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ByteMultiArray__callbacks,
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
get_message_type_support_handle<example_interfaces::msg::ByteMultiArray>()
{
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_ByteMultiArray__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, msg, ByteMultiArray)() {
  return &example_interfaces::msg::typesupport_microxrcedds_cpp::_ByteMultiArray__handle;
}

#ifdef __cplusplus
}
#endif
