// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:srv/DescribeParameters.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/describe_parameters__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/detail/describe_parameters__struct.h"
#include "rcl_interfaces/srv/detail/describe_parameters__functions.h"

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

#include "rosidl_runtime_c/string.h"  // names
#include "rosidl_runtime_c/string_functions.h"  // names

// forward declare type support functions


typedef rcl_interfaces__srv__DescribeParameters_Request _DescribeParameters_Request__ros_msg_type;

static bool _DescribeParameters_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _DescribeParameters_Request__ros_msg_type * ros_message = (_DescribeParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: names
  {
    const size_t size = ros_message->names.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->names.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->names.data[i].data) + 1;
      ros_message->names.data[i].size = (ros_message->names.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->names.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _DescribeParameters_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _DescribeParameters_Request__ros_msg_type * ros_message = (_DescribeParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->names.capacity){
      return 0;
    }
    ros_message->names.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->names.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->names.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->names.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->names.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__DescribeParameters_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _DescribeParameters_Request__ros_msg_type * ros_message = (const _DescribeParameters_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: names
  {
    const size_t sequence_size = ros_message->names.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->names.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DescribeParameters_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__DescribeParameters_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__DescribeParameters_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: names
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _DescribeParameters_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__DescribeParameters_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_DescribeParameters_Request = {
  "rcl_interfaces::srv",
  "DescribeParameters_Request",
  _DescribeParameters_Request__cdr_serialize,
  _DescribeParameters_Request__cdr_deserialize,
  _DescribeParameters_Request__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__DescribeParameters_Request,
  _DescribeParameters_Request__max_serialized_size
};

static rosidl_message_type_support_t _DescribeParameters_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_DescribeParameters_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, DescribeParameters_Request)() {
  return &_DescribeParameters_Request__type_support;
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
// #include "rcl_interfaces/srv/detail/describe_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/describe_parameters__functions.h"

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

#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"  // descriptors

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor)();


typedef rcl_interfaces__srv__DescribeParameters_Response _DescribeParameters_Response__ros_msg_type;

static bool _DescribeParameters_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _DescribeParameters_Response__ros_msg_type * ros_message = (_DescribeParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: descriptors
  {
    const size_t size = ros_message->descriptors.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
          )()->data))->cdr_serialize(&ros_message->descriptors.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _DescribeParameters_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _DescribeParameters_Response__ros_msg_type * ros_message = (_DescribeParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: descriptors
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->descriptors.capacity){
      return 0;
    }

    ros_message->descriptors.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->cdr_deserialize(cdr, &ros_message->descriptors.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__DescribeParameters_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _DescribeParameters_Response__ros_msg_type * ros_message = (const _DescribeParameters_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: descriptors
  {
    const size_t sequence_size = ros_message->descriptors.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->descriptors.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DescribeParameters_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__DescribeParameters_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__DescribeParameters_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: descriptors
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _DescribeParameters_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__DescribeParameters_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_DescribeParameters_Response = {
  "rcl_interfaces::srv",
  "DescribeParameters_Response",
  _DescribeParameters_Response__cdr_serialize,
  _DescribeParameters_Response__cdr_deserialize,
  _DescribeParameters_Response__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__DescribeParameters_Response,
  _DescribeParameters_Response__max_serialized_size
};

static rosidl_message_type_support_t _DescribeParameters_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_DescribeParameters_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, DescribeParameters_Response)() {
  return &_DescribeParameters_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/describe_parameters.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DescribeParameters__callbacks = {
  "rcl_interfaces::srv",
  "DescribeParameters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, DescribeParameters_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, DescribeParameters_Response),
};

static rosidl_service_type_support_t DescribeParameters__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &DescribeParameters__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, DescribeParameters)() {
  return &DescribeParameters__handle;
}

#if defined(__cplusplus)
}
#endif
