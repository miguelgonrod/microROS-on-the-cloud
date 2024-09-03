// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

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

namespace unique_identifier_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
cdr_serialize(
  const unique_identifier_msgs::msg::UUID & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: uuid
  {
    size_t size = ros_message.uuid.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.uuid.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  unique_identifier_msgs::msg::UUID & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: uuid
  {
    const size_t size = ros_message.uuid.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.uuid.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
get_serialized_size(
  const unique_identifier_msgs::msg::UUID & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: uuid
  {
    const size_t array_size = 16;
    const size_t item_size = sizeof(ros_message.uuid[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_unique_identifier_msgs
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: uuid
  {
    const size_t array_size = 16;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }

  return current_alignment - initial_alignment;
}

static bool _UUID__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const unique_identifier_msgs::msg::UUID *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UUID__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unique_identifier_msgs::msg::UUID *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UUID__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unique_identifier_msgs::msg::UUID *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UUID__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const unique_identifier_msgs::msg::UUID *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _UUID__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_UUID(&full_bounded, 0);
}

static message_type_support_callbacks_t _UUID__callbacks = {
  "unique_identifier_msgs::msg",
  "UUID",
  _UUID__cdr_serialize,
  _UUID__cdr_deserialize,
  _UUID__get_serialized_size,
  _UUID__get_serialized_size_with_initial_alignment,
  _UUID__max_serialized_size
};

static rosidl_message_type_support_t _UUID__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_UUID__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace unique_identifier_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_unique_identifier_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unique_identifier_msgs::msg::UUID>()
{
  return &unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::_UUID__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, unique_identifier_msgs, msg, UUID)() {
  return &unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::_UUID__handle;
}

#ifdef __cplusplus
}
#endif
