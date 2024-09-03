// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/srv/detail/self_test__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/srv/detail/self_test__struct.h"
#include "diagnostic_msgs/srv/detail/self_test__functions.h"

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


typedef diagnostic_msgs__srv__SelfTest_Request _SelfTest_Request__ros_msg_type;

static bool _SelfTest_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SelfTest_Request__ros_msg_type * ros_message = (_SelfTest_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _SelfTest_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SelfTest_Request__ros_msg_type * ros_message = (_SelfTest_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__srv__SelfTest_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SelfTest_Request__ros_msg_type * ros_message = (const _SelfTest_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SelfTest_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__srv__SelfTest_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__srv__SelfTest_Request(
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

static size_t _SelfTest_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__srv__SelfTest_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SelfTest_Request = {
  "diagnostic_msgs::srv",
  "SelfTest_Request",
  _SelfTest_Request__cdr_serialize,
  _SelfTest_Request__cdr_deserialize,
  _SelfTest_Request__get_serialized_size,
  get_serialized_size_diagnostic_msgs__srv__SelfTest_Request,
  _SelfTest_Request__max_serialized_size
};

static rosidl_message_type_support_t _SelfTest_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SelfTest_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, SelfTest_Request)() {
  return &_SelfTest_Request__type_support;
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
// #include "diagnostic_msgs/srv/detail/self_test__struct.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__functions.h"

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

#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"  // status
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticStatus)();


typedef diagnostic_msgs__srv__SelfTest_Response _SelfTest_Response__ros_msg_type;

static bool _SelfTest_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SelfTest_Response__ros_msg_type * ros_message = (_SelfTest_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: id
 {
    uint32_t string_len = (ros_message->id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->id.data) + 1;
    ros_message->id.size = (ros_message->id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->id.data, string_len);
  }
  // Member: passed
  rv = ucdr_serialize_uint8_t(cdr, ros_message->passed);
  // Member: status
  {
    const size_t size = ros_message->status.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticStatus
          )()->data))->cdr_serialize(&ros_message->status.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SelfTest_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SelfTest_Response__ros_msg_type * ros_message = (_SelfTest_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: id
  {
    size_t capacity = ros_message->id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->id.data, capacity, &string_size);
    if (rv) {
      ros_message->id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: passed
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->passed);
  // Field name: status
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->status.capacity){
      return 0;
    }

    ros_message->status.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticStatus
        )()->data))->cdr_deserialize(cdr, &ros_message->status.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__srv__SelfTest_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SelfTest_Response__ros_msg_type * ros_message = (const _SelfTest_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->id.size + 1;
  // Member: passed
  {
    const size_t item_size = sizeof(ros_message->passed);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: status
  {
    const size_t sequence_size = ros_message->status.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticStatus
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->status.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SelfTest_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__srv__SelfTest_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__srv__SelfTest_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: id
  *full_bounded = false;
  // Member: passed
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: status
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _SelfTest_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__srv__SelfTest_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SelfTest_Response = {
  "diagnostic_msgs::srv",
  "SelfTest_Response",
  _SelfTest_Response__cdr_serialize,
  _SelfTest_Response__cdr_deserialize,
  _SelfTest_Response__get_serialized_size,
  get_serialized_size_diagnostic_msgs__srv__SelfTest_Response,
  _SelfTest_Response__max_serialized_size
};

static rosidl_message_type_support_t _SelfTest_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SelfTest_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, SelfTest_Response)() {
  return &_SelfTest_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/srv/self_test.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SelfTest__callbacks = {
  "diagnostic_msgs::srv",
  "SelfTest",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, SelfTest_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, SelfTest_Response),
};

static rosidl_service_type_support_t SelfTest__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SelfTest__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, srv, SelfTest)() {
  return &SelfTest__handle;
}

#if defined(__cplusplus)
}
#endif
