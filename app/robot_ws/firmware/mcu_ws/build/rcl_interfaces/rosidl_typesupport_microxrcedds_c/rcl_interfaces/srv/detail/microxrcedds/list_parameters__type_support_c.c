// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:srv/ListParameters.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/list_parameters__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/detail/list_parameters__struct.h"
#include "rcl_interfaces/srv/detail/list_parameters__functions.h"

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

#include "rosidl_runtime_c/string.h"  // prefixes
#include "rosidl_runtime_c/string_functions.h"  // prefixes

// forward declare type support functions


typedef rcl_interfaces__srv__ListParameters_Request _ListParameters_Request__ros_msg_type;

static bool _ListParameters_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ListParameters_Request__ros_msg_type * ros_message = (_ListParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: prefixes
  {
    const size_t size = ros_message->prefixes.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->prefixes.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->prefixes.data[i].data) + 1;
      ros_message->prefixes.data[i].size = (ros_message->prefixes.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->prefixes.data[i].data, string_len);
    }
  }
  // Member: depth
  rv = ucdr_serialize_uint64_t(cdr, ros_message->depth);

  return rv;
}

static bool _ListParameters_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ListParameters_Request__ros_msg_type * ros_message = (_ListParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: prefixes
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->prefixes.capacity){
      return 0;
    }
    ros_message->prefixes.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->prefixes.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->prefixes.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->prefixes.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->prefixes.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: depth
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->depth);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__ListParameters_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ListParameters_Request__ros_msg_type * ros_message = (const _ListParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: prefixes
  {
    const size_t sequence_size = ros_message->prefixes.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->prefixes.data[i].size + 1;
    }
  }
  // Member: depth
  {
    const size_t item_size = sizeof(ros_message->depth);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListParameters_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__ListParameters_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__ListParameters_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: prefixes
  {
    *full_bounded = false;
  }
  // Member: depth
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static size_t _ListParameters_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__ListParameters_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ListParameters_Request = {
  "rcl_interfaces::srv",
  "ListParameters_Request",
  _ListParameters_Request__cdr_serialize,
  _ListParameters_Request__cdr_deserialize,
  _ListParameters_Request__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__ListParameters_Request,
  _ListParameters_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListParameters_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ListParameters_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Request)() {
  return &_ListParameters_Request__type_support;
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
// #include "rcl_interfaces/srv/detail/list_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__functions.h"

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

#include "rcl_interfaces/msg/detail/list_parameters_result__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__ListParametersResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__ListParametersResult(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ListParametersResult)();


typedef rcl_interfaces__srv__ListParameters_Response _ListParameters_Response__ros_msg_type;

static bool _ListParameters_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ListParameters_Response__ros_msg_type * ros_message = (_ListParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ListParametersResult
      )()->data))->cdr_serialize(&ros_message->result, cdr);

  return rv;
}

static bool _ListParameters_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ListParameters_Response__ros_msg_type * ros_message = (_ListParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ListParametersResult
      )()->data))->cdr_deserialize(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__ListParameters_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ListParameters_Response__ros_msg_type * ros_message = (const _ListParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: result
  current_alignment +=
    get_serialized_size_rcl_interfaces__msg__ListParametersResult(&ros_message->result, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ListParameters_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__ListParameters_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__ListParameters_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: result
  current_alignment +=
    max_serialized_size_rcl_interfaces__msg__ListParametersResult(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ListParameters_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__ListParameters_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ListParameters_Response = {
  "rcl_interfaces::srv",
  "ListParameters_Response",
  _ListParameters_Response__cdr_serialize,
  _ListParameters_Response__cdr_deserialize,
  _ListParameters_Response__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__ListParameters_Response,
  _ListParameters_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListParameters_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ListParameters_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Response)() {
  return &_ListParameters_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/list_parameters.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListParameters__callbacks = {
  "rcl_interfaces::srv",
  "ListParameters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters_Response),
};

static rosidl_service_type_support_t ListParameters__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ListParameters__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, ListParameters)() {
  return &ListParameters__handle;
}

#if defined(__cplusplus)
}
#endif
