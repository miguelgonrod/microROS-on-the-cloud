// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from composition_interfaces:srv/UnloadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/unload_node__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/detail/unload_node__struct.h"
#include "composition_interfaces/srv/detail/unload_node__functions.h"

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


typedef composition_interfaces__srv__UnloadNode_Request _UnloadNode_Request__ros_msg_type;

static bool _UnloadNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UnloadNode_Request__ros_msg_type * ros_message = (_UnloadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: unique_id
  rv = ucdr_serialize_uint64_t(cdr, ros_message->unique_id);

  return rv;
}

static bool _UnloadNode_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UnloadNode_Request__ros_msg_type * ros_message = (_UnloadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: unique_id
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->unique_id);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__UnloadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UnloadNode_Request__ros_msg_type * ros_message = (const _UnloadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: unique_id
  {
    const size_t item_size = sizeof(ros_message->unique_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UnloadNode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__UnloadNode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__UnloadNode_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: unique_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static size_t _UnloadNode_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__UnloadNode_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UnloadNode_Request = {
  "composition_interfaces::srv",
  "UnloadNode_Request",
  _UnloadNode_Request__cdr_serialize,
  _UnloadNode_Request__cdr_deserialize,
  _UnloadNode_Request__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__UnloadNode_Request,
  _UnloadNode_Request__max_serialized_size
};

static rosidl_message_type_support_t _UnloadNode_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UnloadNode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, UnloadNode_Request)() {
  return &_UnloadNode_Request__type_support;
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
// #include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/unload_node__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/unload_node__functions.h"

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

#include "rosidl_runtime_c/string.h"  // error_message
#include "rosidl_runtime_c/string_functions.h"  // error_message

// forward declare type support functions


typedef composition_interfaces__srv__UnloadNode_Response _UnloadNode_Response__ros_msg_type;

static bool _UnloadNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UnloadNode_Response__ros_msg_type * ros_message = (_UnloadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: error_message
 {
    uint32_t string_len = (ros_message->error_message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->error_message.data) + 1;
    ros_message->error_message.size = (ros_message->error_message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->error_message.data, string_len);
  }

  return rv;
}

static bool _UnloadNode_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UnloadNode_Response__ros_msg_type * ros_message = (_UnloadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: error_message
  {
    size_t capacity = ros_message->error_message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->error_message.data, capacity, &string_size);
    if (rv) {
      ros_message->error_message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->error_message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__UnloadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UnloadNode_Response__ros_msg_type * ros_message = (const _UnloadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: error_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->error_message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _UnloadNode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__UnloadNode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__UnloadNode_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: error_message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _UnloadNode_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__UnloadNode_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UnloadNode_Response = {
  "composition_interfaces::srv",
  "UnloadNode_Response",
  _UnloadNode_Response__cdr_serialize,
  _UnloadNode_Response__cdr_deserialize,
  _UnloadNode_Response__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__UnloadNode_Response,
  _UnloadNode_Response__max_serialized_size
};

static rosidl_message_type_support_t _UnloadNode_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UnloadNode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, UnloadNode_Response)() {
  return &_UnloadNode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/unload_node.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t UnloadNode__callbacks = {
  "composition_interfaces::srv",
  "UnloadNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, UnloadNode_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, UnloadNode_Response),
};

static rosidl_service_type_support_t UnloadNode__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &UnloadNode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, UnloadNode)() {
  return &UnloadNode__handle;
}

#if defined(__cplusplus)
}
#endif
