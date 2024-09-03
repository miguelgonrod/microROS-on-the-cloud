// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/menu_entry__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/menu_entry__struct.hpp"

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

namespace visualization_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_serialize(
  const visualization_msgs::msg::MenuEntry & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: id
  rv = ucdr_serialize_uint32_t(cdr, ros_message.id);
  // Member: parent_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message.parent_id);
  // Member: title
  rv = ucdr_serialize_string(cdr, ros_message.title.c_str());
  // Member: command
  rv = ucdr_serialize_string(cdr, ros_message.command.c_str());
  // Member: command_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.command_type);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::MenuEntry & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.id);
  // Member: parent_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.parent_id);
  // Member: title
  ros_message.title.resize(ros_message.title.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.title[0], ros_message.title.capacity());
  if (rv) {
    ros_message.title.resize(std::strlen(&ros_message.title[0]));
  }
  // Member: command
  ros_message.command.resize(ros_message.command.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.command[0], ros_message.command.capacity());
  if (rv) {
    ros_message.command.resize(std::strlen(&ros_message.command[0]));
  }
  // Member: command_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.command_type);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::MenuEntry & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: id
  {
    const size_t item_size = sizeof(ros_message.id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: parent_id
  {
    const size_t item_size = sizeof(ros_message.parent_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: title
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.title.size() + 1;
  // Member: command
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.command.size() + 1;
  // Member: command_type
  {
    const size_t item_size = sizeof(ros_message.command_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_MenuEntry(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: parent_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: title
  *full_bounded = false;
  // Member: command
  *full_bounded = false;
  // Member: command_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _MenuEntry__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::MenuEntry *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MenuEntry__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::MenuEntry *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MenuEntry__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::MenuEntry *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MenuEntry__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::MenuEntry *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MenuEntry__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MenuEntry(&full_bounded, 0);
}

static message_type_support_callbacks_t _MenuEntry__callbacks = {
  "visualization_msgs::msg",
  "MenuEntry",
  _MenuEntry__cdr_serialize,
  _MenuEntry__cdr_deserialize,
  _MenuEntry__get_serialized_size,
  _MenuEntry__get_serialized_size_with_initial_alignment,
  _MenuEntry__max_serialized_size
};

static rosidl_message_type_support_t _MenuEntry__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MenuEntry__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace visualization_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<visualization_msgs::msg::MenuEntry>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_MenuEntry__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, MenuEntry)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_MenuEntry__handle;
}

#ifdef __cplusplus
}
#endif
