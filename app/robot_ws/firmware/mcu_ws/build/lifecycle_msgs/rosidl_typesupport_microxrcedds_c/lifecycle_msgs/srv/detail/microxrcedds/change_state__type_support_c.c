// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from lifecycle_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/change_state__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/detail/change_state__struct.h"
#include "lifecycle_msgs/srv/detail/change_state__functions.h"

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

#include "lifecycle_msgs/msg/detail/transition__functions.h"  // transition

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__Transition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__Transition(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition)();


typedef lifecycle_msgs__srv__ChangeState_Request _ChangeState_Request__ros_msg_type;

static bool _ChangeState_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ChangeState_Request__ros_msg_type * ros_message = (_ChangeState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: transition
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition
      )()->data))->cdr_serialize(&ros_message->transition, cdr);

  return rv;
}

static bool _ChangeState_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ChangeState_Request__ros_msg_type * ros_message = (_ChangeState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: transition
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, Transition
      )()->data))->cdr_deserialize(cdr, &ros_message->transition);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__ChangeState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ChangeState_Request__ros_msg_type * ros_message = (const _ChangeState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment +=
    get_serialized_size_lifecycle_msgs__msg__Transition(&ros_message->transition, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__ChangeState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__ChangeState_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment +=
    max_serialized_size_lifecycle_msgs__msg__Transition(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ChangeState_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__ChangeState_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ChangeState_Request = {
  "lifecycle_msgs::srv",
  "ChangeState_Request",
  _ChangeState_Request__cdr_serialize,
  _ChangeState_Request__cdr_deserialize,
  _ChangeState_Request__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__ChangeState_Request,
  _ChangeState_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeState_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ChangeState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Request)() {
  return &_ChangeState_Request__type_support;
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
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__functions.h"

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


// forward declare type support functions


typedef lifecycle_msgs__srv__ChangeState_Response _ChangeState_Response__ros_msg_type;

static bool _ChangeState_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ChangeState_Response__ros_msg_type * ros_message = (_ChangeState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);

  return rv;
}

static bool _ChangeState_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ChangeState_Response__ros_msg_type * ros_message = (_ChangeState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__ChangeState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ChangeState_Response__ros_msg_type * ros_message = (const _ChangeState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__ChangeState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__ChangeState_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _ChangeState_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__ChangeState_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ChangeState_Response = {
  "lifecycle_msgs::srv",
  "ChangeState_Response",
  _ChangeState_Response__cdr_serialize,
  _ChangeState_Response__cdr_deserialize,
  _ChangeState_Response__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__ChangeState_Response,
  _ChangeState_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeState_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ChangeState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Response)() {
  return &_ChangeState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/change_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChangeState__callbacks = {
  "lifecycle_msgs::srv",
  "ChangeState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Response),
};

static rosidl_service_type_support_t ChangeState__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ChangeState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState)() {
  return &ChangeState__handle;
}

#if defined(__cplusplus)
}
#endif
