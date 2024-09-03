// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_status__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "action_msgs/msg/detail/goal_status__struct.hpp"

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
namespace action_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const action_msgs::msg::GoalInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  action_msgs::msg::GoalInfo &);

size_t get_serialized_size(
  const action_msgs::msg::GoalInfo &,
  size_t current_alignment);

size_t
max_serialized_size_GoalInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace action_msgs


namespace action_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_serialize(
  const action_msgs::msg::GoalStatus & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_info
  rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_info,
    cdr);
  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  action_msgs::msg::GoalStatus & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_info
  rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_info);
  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::msg::GoalStatus & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment += action_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_info,
    current_alignment);
  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
max_serialized_size_GoalStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment += action_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_GoalInfo(
    full_bounded,
    current_alignment);
  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);

  return current_alignment - initial_alignment;
}

static bool _GoalStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalStatus__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatus *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GoalStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GoalStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t _GoalStatus__callbacks = {
  "action_msgs::msg",
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

}  // namespace action_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_action_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::msg::GoalStatus>()
{
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatus__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, msg, GoalStatus)() {
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatus__handle;
}

#ifdef __cplusplus
}
#endif
