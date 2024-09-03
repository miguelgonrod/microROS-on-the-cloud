// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice
#include "action_msgs/srv/detail/cancel_goal__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "action_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "action_msgs/srv/detail/cancel_goal__struct.h"
#include "action_msgs/srv/detail/cancel_goal__functions.h"

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


typedef action_msgs__srv__CancelGoal_Request _CancelGoal_Request__ros_msg_type;

static bool _CancelGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _CancelGoal_Request__ros_msg_type * ros_message = (_CancelGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
      )()->data))->cdr_serialize(&ros_message->goal_info, cdr);

  return rv;
}

static bool _CancelGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _CancelGoal_Request__ros_msg_type * ros_message = (_CancelGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_info);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t get_serialized_size_action_msgs__srv__CancelGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _CancelGoal_Request__ros_msg_type * ros_message = (const _CancelGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment +=
    get_serialized_size_action_msgs__msg__GoalInfo(&ros_message->goal_info, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CancelGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_action_msgs__srv__CancelGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t max_serialized_size_action_msgs__srv__CancelGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment +=
    max_serialized_size_action_msgs__msg__GoalInfo(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _CancelGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_action_msgs__srv__CancelGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_CancelGoal_Request = {
  "action_msgs::srv",
  "CancelGoal_Request",
  _CancelGoal_Request__cdr_serialize,
  _CancelGoal_Request__cdr_deserialize,
  _CancelGoal_Request__get_serialized_size,
  get_serialized_size_action_msgs__srv__CancelGoal_Request,
  _CancelGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CancelGoal_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_CancelGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, srv, CancelGoal_Request)() {
  return &_CancelGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "action_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__functions.h"

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

// already included above
// #include "action_msgs/msg/detail/goal_info__functions.h"  // goals_canceling

// forward declare type support functions
size_t get_serialized_size_action_msgs__msg__GoalInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_action_msgs__msg__GoalInfo(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo)();


typedef action_msgs__srv__CancelGoal_Response _CancelGoal_Response__ros_msg_type;

static bool _CancelGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _CancelGoal_Response__ros_msg_type * ros_message = (_CancelGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: return_code
  rv = ucdr_serialize_int8_t(cdr, ros_message->return_code);
  // Member: goals_canceling
  {
    const size_t size = ros_message->goals_canceling.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
          )()->data))->cdr_serialize(&ros_message->goals_canceling.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _CancelGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _CancelGoal_Response__ros_msg_type * ros_message = (_CancelGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: return_code
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->return_code);
  // Field name: goals_canceling
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->goals_canceling.capacity){
      return 0;
    }

    ros_message->goals_canceling.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
        )()->data))->cdr_deserialize(cdr, &ros_message->goals_canceling.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t get_serialized_size_action_msgs__srv__CancelGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _CancelGoal_Response__ros_msg_type * ros_message = (const _CancelGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: return_code
  {
    const size_t item_size = sizeof(ros_message->return_code);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: goals_canceling
  {
    const size_t sequence_size = ros_message->goals_canceling.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, msg, GoalInfo
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->goals_canceling.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CancelGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_action_msgs__srv__CancelGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_action_msgs
size_t max_serialized_size_action_msgs__srv__CancelGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: return_code
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: goals_canceling
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _CancelGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_action_msgs__srv__CancelGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_CancelGoal_Response = {
  "action_msgs::srv",
  "CancelGoal_Response",
  _CancelGoal_Response__cdr_serialize,
  _CancelGoal_Response__cdr_deserialize,
  _CancelGoal_Response__get_serialized_size,
  get_serialized_size_action_msgs__srv__CancelGoal_Response,
  _CancelGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CancelGoal_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_CancelGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, srv, CancelGoal_Response)() {
  return &_CancelGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "action_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "action_msgs/srv/cancel_goal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CancelGoal__callbacks = {
  "action_msgs::srv",
  "CancelGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, srv, CancelGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, srv, CancelGoal_Response),
};

static rosidl_service_type_support_t CancelGoal__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &CancelGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, action_msgs, srv, CancelGoal)() {
  return &CancelGoal__handle;
}

#if defined(__cplusplus)
}
#endif
