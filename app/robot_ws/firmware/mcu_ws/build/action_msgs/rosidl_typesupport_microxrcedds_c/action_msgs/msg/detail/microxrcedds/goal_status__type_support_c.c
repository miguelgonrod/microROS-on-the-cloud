// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from action_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_status__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "action_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "action_msgs/msg/detail/goal_status__struct.h"
#include "action_msgs/msg/detail/goal_status__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "action_msgs/msg/detail/goal_info__functions.h"  // goal_info

// forward declare type support functions
size_t get_serialized_size_action_msgs__msg__GoalInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_action_msgs__msg__GoalInfo(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo)();


typedef action_msgs__msg__GoalStatus _GoalStatus__ros_msg_type;

static bool _GoalStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GoalStatus__ros_msg_type * ros_message = (_GoalStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
      )()->data))->cdr_serialize(&ros_message->goal_info, cdr);
  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message->status);

  return rv;
}

static bool _GoalStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GoalStatus__ros_msg_type * ros_message = (_GoalStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_info);
  // Field name: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->status);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t get_serialized_size_action_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GoalStatus__ros_msg_type * ros_message = (const _GoalStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment +=
    get_serialized_size_action_msgs__msg__GoalInfo(&ros_message->goal_info, current_alignment);
  // Member: status
  {
    const size_t item_size = sizeof(ros_message->status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoalStatus__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_action_msgs__msg__GoalStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t max_serialized_size_action_msgs__msg__GoalStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment +=
    max_serialized_size_action_msgs__msg__GoalInfo(full_bounded, current_alignment);
  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);

  return current_alignment - initial_alignment;
}

static size_t _GoalStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_action_msgs__msg__GoalStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GoalStatus = {
  "action_msgs::msg",
  "GoalStatus",
  _GoalStatus__cdr_serialize,
  _GoalStatus__cdr_deserialize,
  _GoalStatus__get_serialized_size,
  get_serialized_size_action_msgs__msg__GoalStatus,
  _GoalStatus__max_serialized_size
};

static rosidl_message_type_support_t _GoalStatus__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GoalStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalStatus)() {
  return &_GoalStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
