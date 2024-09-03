// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_status_array__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "action_msgs/msg/detail/goal_status_array__struct.hpp"

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
  const action_msgs::msg::GoalStatus &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  action_msgs::msg::GoalStatus &);

size_t get_serialized_size(
  const action_msgs::msg::GoalStatus &,
  size_t current_alignment);

size_t
max_serialized_size_GoalStatus(
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
  const action_msgs::msg::GoalStatusArray & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status_list
  {
    size_t size = ros_message.status_list.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.status_list[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  action_msgs::msg::GoalStatusArray & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status_list
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.status_list.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.status_list[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::msg::GoalStatusArray & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status_list
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.status_list.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = action_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.status_list[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
max_serialized_size_GoalStatusArray(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status_list
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _GoalStatusArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatusArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalStatusArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_msgs::msg::GoalStatusArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalStatusArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatusArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalStatusArray__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const action_msgs::msg::GoalStatusArray *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GoalStatusArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GoalStatusArray(&full_bounded, 0);
}

static message_type_support_callbacks_t _GoalStatusArray__callbacks = {
  "action_msgs::msg",
  "GoalStatusArray",
  _GoalStatusArray__cdr_serialize,
  _GoalStatusArray__cdr_deserialize,
  _GoalStatusArray__get_serialized_size,
  _GoalStatusArray__get_serialized_size_with_initial_alignment,
  _GoalStatusArray__max_serialized_size
};

static rosidl_message_type_support_t _GoalStatusArray__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GoalStatusArray__callbacks,
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
get_message_type_support_handle<action_msgs::msg::GoalStatusArray>()
{
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatusArray__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, msg, GoalStatusArray)() {
  return &action_msgs::msg::typesupport_microxrcedds_cpp::_GoalStatusArray__handle;
}

#ifdef __cplusplus
}
#endif
