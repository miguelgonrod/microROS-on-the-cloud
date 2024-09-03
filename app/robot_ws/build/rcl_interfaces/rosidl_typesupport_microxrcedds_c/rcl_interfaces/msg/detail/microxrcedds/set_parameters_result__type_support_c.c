// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/set_parameters_result__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.h"
#include "rcl_interfaces/msg/detail/set_parameters_result__functions.h"

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

#include "rosidl_runtime_c/string.h"  // reason
#include "rosidl_runtime_c/string_functions.h"  // reason

// forward declare type support functions


typedef rcl_interfaces__msg__SetParametersResult _SetParametersResult__ros_msg_type;

static bool _SetParametersResult__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetParametersResult__ros_msg_type * ros_message = (_SetParametersResult__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: successful
  rv = ucdr_serialize_bool(cdr, (ros_message->successful) ? 0x01 : 0x00);
  // Member: reason
 {
    uint32_t string_len = (ros_message->reason.data == NULL) ? 0 : (uint32_t)strlen(ros_message->reason.data) + 1;
    ros_message->reason.size = (ros_message->reason.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->reason.data, string_len);
  }

  return rv;
}

static bool _SetParametersResult__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetParametersResult__ros_msg_type * ros_message = (_SetParametersResult__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: successful
  rv = ucdr_deserialize_bool(cdr, &ros_message->successful);
  // Field name: reason
  {
    size_t capacity = ros_message->reason.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->reason.data, capacity, &string_size);
    if (rv) {
      ros_message->reason.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->reason.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__SetParametersResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetParametersResult__ros_msg_type * ros_message = (const _SetParametersResult__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  {
    const size_t item_size = sizeof(ros_message->successful);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: reason
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->reason.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _SetParametersResult__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__SetParametersResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__SetParametersResult(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: reason
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _SetParametersResult__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__SetParametersResult(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetParametersResult = {
  "rcl_interfaces::msg",
  "SetParametersResult",
  _SetParametersResult__cdr_serialize,
  _SetParametersResult__cdr_deserialize,
  _SetParametersResult__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__SetParametersResult,
  _SetParametersResult__max_serialized_size
};

static rosidl_message_type_support_t _SetParametersResult__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetParametersResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetParametersResult)() {
  return &_SetParametersResult__type_support;
}

#if defined(__cplusplus)
}
#endif
