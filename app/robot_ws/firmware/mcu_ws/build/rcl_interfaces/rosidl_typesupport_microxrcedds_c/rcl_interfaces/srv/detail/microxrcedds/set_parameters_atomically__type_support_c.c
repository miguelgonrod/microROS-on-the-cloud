// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:srv/SetParametersAtomically.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/set_parameters_atomically__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/detail/set_parameters_atomically__struct.h"
#include "rcl_interfaces/srv/detail/set_parameters_atomically__functions.h"

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

#include "rcl_interfaces/msg/detail/parameter__functions.h"  // parameters

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__Parameter(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__Parameter(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter)();


typedef rcl_interfaces__srv__SetParametersAtomically_Request _SetParametersAtomically_Request__ros_msg_type;

static bool _SetParametersAtomically_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetParametersAtomically_Request__ros_msg_type * ros_message = (_SetParametersAtomically_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: parameters
  {
    const size_t size = ros_message->parameters.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
          )()->data))->cdr_serialize(&ros_message->parameters.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SetParametersAtomically_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetParametersAtomically_Request__ros_msg_type * ros_message = (_SetParametersAtomically_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->parameters.capacity){
      return 0;
    }

    ros_message->parameters.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->cdr_deserialize(cdr, &ros_message->parameters.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetParametersAtomically_Request__ros_msg_type * ros_message = (const _SetParametersAtomically_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: parameters
  {
    const size_t sequence_size = ros_message->parameters.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->parameters.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetParametersAtomically_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: parameters
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _SetParametersAtomically_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetParametersAtomically_Request = {
  "rcl_interfaces::srv",
  "SetParametersAtomically_Request",
  _SetParametersAtomically_Request__cdr_serialize,
  _SetParametersAtomically_Request__cdr_deserialize,
  _SetParametersAtomically_Request__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Request,
  _SetParametersAtomically_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetParametersAtomically_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetParametersAtomically_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetParametersAtomically_Request)() {
  return &_SetParametersAtomically_Request__type_support;
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
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters_atomically__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters_atomically__functions.h"

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

#include "rcl_interfaces/msg/detail/set_parameters_result__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__SetParametersResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__SetParametersResult(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetParametersResult)();


typedef rcl_interfaces__srv__SetParametersAtomically_Response _SetParametersAtomically_Response__ros_msg_type;

static bool _SetParametersAtomically_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetParametersAtomically_Response__ros_msg_type * ros_message = (_SetParametersAtomically_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetParametersResult
      )()->data))->cdr_serialize(&ros_message->result, cdr);

  return rv;
}

static bool _SetParametersAtomically_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetParametersAtomically_Response__ros_msg_type * ros_message = (_SetParametersAtomically_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetParametersResult
      )()->data))->cdr_deserialize(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetParametersAtomically_Response__ros_msg_type * ros_message = (const _SetParametersAtomically_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: result
  current_alignment +=
    get_serialized_size_rcl_interfaces__msg__SetParametersResult(&ros_message->result, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetParametersAtomically_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: result
  current_alignment +=
    max_serialized_size_rcl_interfaces__msg__SetParametersResult(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _SetParametersAtomically_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetParametersAtomically_Response = {
  "rcl_interfaces::srv",
  "SetParametersAtomically_Response",
  _SetParametersAtomically_Response__cdr_serialize,
  _SetParametersAtomically_Response__cdr_deserialize,
  _SetParametersAtomically_Response__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__SetParametersAtomically_Response,
  _SetParametersAtomically_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetParametersAtomically_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetParametersAtomically_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetParametersAtomically_Response)() {
  return &_SetParametersAtomically_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/set_parameters_atomically.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetParametersAtomically__callbacks = {
  "rcl_interfaces::srv",
  "SetParametersAtomically",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetParametersAtomically_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetParametersAtomically_Response),
};

static rosidl_service_type_support_t SetParametersAtomically__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetParametersAtomically__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetParametersAtomically)() {
  return &SetParametersAtomically__handle;
}

#if defined(__cplusplus)
}
#endif
