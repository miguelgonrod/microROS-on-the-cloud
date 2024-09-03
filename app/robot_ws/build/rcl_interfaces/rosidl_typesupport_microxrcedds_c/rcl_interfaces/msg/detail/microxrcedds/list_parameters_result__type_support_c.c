// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/ListParametersResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/list_parameters_result__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/list_parameters_result__struct.h"
#include "rcl_interfaces/msg/detail/list_parameters_result__functions.h"

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

#include "rosidl_runtime_c/string.h"  // names, prefixes
#include "rosidl_runtime_c/string_functions.h"  // names, prefixes

// forward declare type support functions


typedef rcl_interfaces__msg__ListParametersResult _ListParametersResult__ros_msg_type;

static bool _ListParametersResult__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ListParametersResult__ros_msg_type * ros_message = (_ListParametersResult__ros_msg_type *)(untyped_ros_message);
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

  return rv;
}

static bool _ListParametersResult__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ListParametersResult__ros_msg_type * ros_message = (_ListParametersResult__ros_msg_type *)(untyped_ros_message);
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
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ListParametersResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ListParametersResult__ros_msg_type * ros_message = (const _ListParametersResult__ros_msg_type *)(untyped_ros_message);
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
  // Member: prefixes
  {
    const size_t sequence_size = ros_message->prefixes.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->prefixes.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListParametersResult__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__ListParametersResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ListParametersResult(
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
  // Member: prefixes
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ListParametersResult__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__ListParametersResult(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ListParametersResult = {
  "rcl_interfaces::msg",
  "ListParametersResult",
  _ListParametersResult__cdr_serialize,
  _ListParametersResult__cdr_deserialize,
  _ListParametersResult__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__ListParametersResult,
  _ListParametersResult__max_serialized_size
};

static rosidl_message_type_support_t _ListParametersResult__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ListParametersResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ListParametersResult)() {
  return &_ListParametersResult__type_support;
}

#if defined(__cplusplus)
}
#endif
