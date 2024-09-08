// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_description__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/msg/detail/transition_description__struct.h"
#include "lifecycle_msgs/msg/detail/transition_description__functions.h"

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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // goal_state, start_state
#include "lifecycle_msgs/msg/detail/transition__functions.h"  // transition

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State)();
size_t get_serialized_size_lifecycle_msgs__msg__Transition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__Transition(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition)();


typedef lifecycle_msgs__msg__TransitionDescription _TransitionDescription__ros_msg_type;

static bool _TransitionDescription__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TransitionDescription__ros_msg_type * ros_message = (_TransitionDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: transition
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition
      )()->data))->cdr_serialize(&ros_message->transition, cdr);
  // Member: start_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_serialize(&ros_message->start_state, cdr);
  // Member: goal_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_serialize(&ros_message->goal_state, cdr);

  return rv;
}

static bool _TransitionDescription__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TransitionDescription__ros_msg_type * ros_message = (_TransitionDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: transition
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition
      )()->data))->cdr_deserialize(cdr, &ros_message->transition);
  // Field name: start_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_deserialize(cdr, &ros_message->start_state);
  // Field name: goal_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_state);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TransitionDescription__ros_msg_type * ros_message = (const _TransitionDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment +=
    get_serialized_size_lifecycle_msgs__msg__Transition(&ros_message->transition, current_alignment);
  // Member: start_state
  current_alignment +=
    get_serialized_size_lifecycle_msgs__msg__State(&ros_message->start_state, current_alignment);
  // Member: goal_state
  current_alignment +=
    get_serialized_size_lifecycle_msgs__msg__State(&ros_message->goal_state, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TransitionDescription__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment +=
    max_serialized_size_lifecycle_msgs__msg__Transition(full_bounded, current_alignment);
  // Member: start_state
  current_alignment +=
    max_serialized_size_lifecycle_msgs__msg__State(full_bounded, current_alignment);
  // Member: goal_state
  current_alignment +=
    max_serialized_size_lifecycle_msgs__msg__State(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _TransitionDescription__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__msg__TransitionDescription(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TransitionDescription = {
  "lifecycle_msgs::msg",
  "TransitionDescription",
  _TransitionDescription__cdr_serialize,
  _TransitionDescription__cdr_deserialize,
  _TransitionDescription__get_serialized_size,
  get_serialized_size_lifecycle_msgs__msg__TransitionDescription,
  _TransitionDescription__max_serialized_size
};

static rosidl_message_type_support_t _TransitionDescription__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TransitionDescription,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, TransitionDescription)() {
  return &_TransitionDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
