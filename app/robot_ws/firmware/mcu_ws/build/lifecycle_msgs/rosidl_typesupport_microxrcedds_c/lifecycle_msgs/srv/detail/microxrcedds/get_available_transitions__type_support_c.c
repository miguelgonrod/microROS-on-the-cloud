// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from lifecycle_msgs:srv/GetAvailableTransitions.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/get_available_transitions__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
#include "lifecycle_msgs/srv/detail/get_available_transitions__functions.h"

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


typedef lifecycle_msgs__srv__GetAvailableTransitions_Request _GetAvailableTransitions_Request__ros_msg_type;

static bool _GetAvailableTransitions_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetAvailableTransitions_Request__ros_msg_type * ros_message = (_GetAvailableTransitions_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _GetAvailableTransitions_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetAvailableTransitions_Request__ros_msg_type * ros_message = (_GetAvailableTransitions_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetAvailableTransitions_Request__ros_msg_type * ros_message = (const _GetAvailableTransitions_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableTransitions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _GetAvailableTransitions_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetAvailableTransitions_Request = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions_Request",
  _GetAvailableTransitions_Request__cdr_serialize,
  _GetAvailableTransitions_Request__cdr_deserialize,
  _GetAvailableTransitions_Request__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Request,
  _GetAvailableTransitions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableTransitions_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetAvailableTransitions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)() {
  return &_GetAvailableTransitions_Request__type_support;
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
// #include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_transitions__functions.h"

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

#include "lifecycle_msgs/msg/detail/transition_description__functions.h"  // available_transitions

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, TransitionDescription)();


typedef lifecycle_msgs__srv__GetAvailableTransitions_Response _GetAvailableTransitions_Response__ros_msg_type;

static bool _GetAvailableTransitions_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetAvailableTransitions_Response__ros_msg_type * ros_message = (_GetAvailableTransitions_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: available_transitions
  {
    const size_t size = ros_message->available_transitions.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, TransitionDescription
          )()->data))->cdr_serialize(&ros_message->available_transitions.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _GetAvailableTransitions_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetAvailableTransitions_Response__ros_msg_type * ros_message = (_GetAvailableTransitions_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: available_transitions
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->available_transitions.capacity){
      return 0;
    }

    ros_message->available_transitions.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, TransitionDescription
        )()->data))->cdr_deserialize(cdr, &ros_message->available_transitions.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetAvailableTransitions_Response__ros_msg_type * ros_message = (const _GetAvailableTransitions_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: available_transitions
  {
    const size_t sequence_size = ros_message->available_transitions.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, TransitionDescription
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->available_transitions.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableTransitions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: available_transitions
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _GetAvailableTransitions_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetAvailableTransitions_Response = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions_Response",
  _GetAvailableTransitions_Response__cdr_serialize,
  _GetAvailableTransitions_Response__cdr_deserialize,
  _GetAvailableTransitions_Response__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__GetAvailableTransitions_Response,
  _GetAvailableTransitions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableTransitions_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetAvailableTransitions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)() {
  return &_GetAvailableTransitions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/get_available_transitions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAvailableTransitions__callbacks = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Response),
};

static rosidl_service_type_support_t GetAvailableTransitions__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &GetAvailableTransitions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions)() {
  return &GetAvailableTransitions__handle;
}

#if defined(__cplusplus)
}
#endif
