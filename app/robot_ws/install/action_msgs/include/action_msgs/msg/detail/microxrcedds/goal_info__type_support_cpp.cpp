// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:msg/GoalInfo.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "action_msgs/msg/detail/goal_info__struct.hpp"

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
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace action_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_serialize(
  const action_msgs::msg::GoalInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  action_msgs::msg::GoalInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::msg::GoalInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
max_serialized_size_GoalInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _GoalInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_msgs::msg::GoalInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GoalInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GoalInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _GoalInfo__callbacks = {
  "action_msgs::msg",
  "GoalInfo",
  _GoalInfo__cdr_serialize,
  _GoalInfo__cdr_deserialize,
  _GoalInfo__get_serialized_size,
  _GoalInfo__get_serialized_size_with_initial_alignment,
  _GoalInfo__max_serialized_size
};

static rosidl_message_type_support_t _GoalInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GoalInfo__callbacks,
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
get_message_type_support_handle<action_msgs::msg::GoalInfo>()
{
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, msg, GoalInfo)() {
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalInfo__handle;
}

#ifdef __cplusplus
}
#endif
