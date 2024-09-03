// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_status__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"

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
namespace actionlib_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const actionlib_msgs::msg::GoalID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  actionlib_msgs::msg::GoalID &);

size_t get_serialized_size(
  const actionlib_msgs::msg::GoalID &,
  size_t current_alignment);

size_t
max_serialized_size_GoalID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace actionlib_msgs


namespace actionlib_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
cdr_serialize(
  const actionlib_msgs::msg::GoalStatus & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = actionlib_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: status
  rv = ucdr_serialize_uint8_t(cdr, ros_message.status);
  // Member: text
  rv = ucdr_serialize_string(cdr, ros_message.text.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  actionlib_msgs::msg::GoalStatus & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = actionlib_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: status
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.status);
  // Member: text
  ros_message.text.resize(ros_message.text.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.text[0], ros_message.text.capacity());
  if (rv) {
    ros_message.text.resize(std::strlen(&ros_message.text[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
get_serialized_size(
  const actionlib_msgs::msg::GoalStatus & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += actionlib_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: text
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.text.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_actionlib_msgs
max_serialized_size_GoalStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += actionlib_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_GoalID(
    full_bounded,
    current_alignment);
  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: text
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _GoalStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const actionlib_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<actionlib_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const actionlib_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalStatus__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const actionlib_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GoalStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GoalStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t _GoalStatus__callbacks = {
  "actionlib_msgs::msg",
  "GoalStatus",
  _GoalStatus__cdr_serialize,
  _GoalStatus__cdr_deserialize,
  _GoalStatus__get_serialized_size,
  _GoalStatus__get_serialized_size_with_initial_alignment,
  _GoalStatus__max_serialized_size
};

static rosidl_message_type_support_t _GoalStatus__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GoalStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace actionlib_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_actionlib_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<actionlib_msgs::msg::GoalStatus>()
{
  return &actionlib_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatus__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, actionlib_msgs, msg, GoalStatus)() {
  return &actionlib_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatus__handle;
}

#ifdef __cplusplus
}
#endif
