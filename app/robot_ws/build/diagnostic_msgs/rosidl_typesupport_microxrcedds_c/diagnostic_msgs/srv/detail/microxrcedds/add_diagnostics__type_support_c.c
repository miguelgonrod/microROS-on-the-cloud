// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/srv/detail/add_diagnostics__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/srv/detail/add_diagnostics__struct.h"
#include "diagnostic_msgs/srv/detail/add_diagnostics__functions.h"

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

#include "rosidl_runtime_c/string.h"  // load_namespace
#include "rosidl_runtime_c/string_functions.h"  // load_namespace

// forward declare type support functions


typedef diagnostic_msgs__srv__AddDiagnostics_Request _AddDiagnostics_Request__ros_msg_type;

static bool _AddDiagnostics_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddDiagnostics_Request__ros_msg_type * ros_message = (_AddDiagnostics_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: load_namespace
 {
    uint32_t string_len = (ros_message->load_namespace.data == NULL) ? 0 : (uint32_t)strlen(ros_message->load_namespace.data) + 1;
    ros_message->load_namespace.size = (ros_message->load_namespace.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->load_namespace.data, string_len);
  }

  return rv;
}

static bool _AddDiagnostics_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddDiagnostics_Request__ros_msg_type * ros_message = (_AddDiagnostics_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: load_namespace
  {
    size_t capacity = ros_message->load_namespace.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->load_namespace.data, capacity, &string_size);
    if (rv) {
      ros_message->load_namespace.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->load_namespace.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddDiagnostics_Request__ros_msg_type * ros_message = (const _AddDiagnostics_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: load_namespace
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->load_namespace.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _AddDiagnostics_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: load_namespace
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _AddDiagnostics_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddDiagnostics_Request = {
  "diagnostic_msgs::srv",
  "AddDiagnostics_Request",
  _AddDiagnostics_Request__cdr_serialize,
  _AddDiagnostics_Request__cdr_deserialize,
  _AddDiagnostics_Request__get_serialized_size,
  get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Request,
  _AddDiagnostics_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddDiagnostics_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddDiagnostics_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, AddDiagnostics_Request)() {
  return &_AddDiagnostics_Request__type_support;
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
// #include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__struct.h"
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__functions.h"

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
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


typedef diagnostic_msgs__srv__AddDiagnostics_Response _AddDiagnostics_Response__ros_msg_type;

static bool _AddDiagnostics_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddDiagnostics_Response__ros_msg_type * ros_message = (_AddDiagnostics_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: message
 {
    uint32_t string_len = (ros_message->message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->message.data) + 1;
    ros_message->message.size = (ros_message->message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->message.data, string_len);
  }

  return rv;
}

static bool _AddDiagnostics_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddDiagnostics_Response__ros_msg_type * ros_message = (_AddDiagnostics_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: message
  {
    size_t capacity = ros_message->message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->message.data, capacity, &string_size);
    if (rv) {
      ros_message->message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddDiagnostics_Response__ros_msg_type * ros_message = (const _AddDiagnostics_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _AddDiagnostics_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _AddDiagnostics_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddDiagnostics_Response = {
  "diagnostic_msgs::srv",
  "AddDiagnostics_Response",
  _AddDiagnostics_Response__cdr_serialize,
  _AddDiagnostics_Response__cdr_deserialize,
  _AddDiagnostics_Response__get_serialized_size,
  get_serialized_size_diagnostic_msgs__srv__AddDiagnostics_Response,
  _AddDiagnostics_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddDiagnostics_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddDiagnostics_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, AddDiagnostics_Response)() {
  return &_AddDiagnostics_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/srv/add_diagnostics.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddDiagnostics__callbacks = {
  "diagnostic_msgs::srv",
  "AddDiagnostics",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, AddDiagnostics_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, AddDiagnostics_Response),
};

static rosidl_service_type_support_t AddDiagnostics__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &AddDiagnostics__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, AddDiagnostics)() {
  return &AddDiagnostics__handle;
}

#if defined(__cplusplus)
}
#endif
