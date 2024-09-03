// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

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

#include "diagnostic_msgs/msg/detail/key_value__functions.h"  // values
#include "rosidl_runtime_c/string.h"  // hardware_id, message, name
#include "rosidl_runtime_c/string_functions.h"  // hardware_id, message, name

// forward declare type support functions
size_t get_serialized_size_diagnostic_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_diagnostic_msgs__msg__KeyValue(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, KeyValue)();


typedef diagnostic_msgs__msg__DiagnosticStatus _DiagnosticStatus__ros_msg_type;

static bool _DiagnosticStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _DiagnosticStatus__ros_msg_type * ros_message = (_DiagnosticStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: level
  rv = ucdr_serialize_uint8_t(cdr, ros_message->level);
  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: message
 {
    uint32_t string_len = (ros_message->message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->message.data) + 1;
    ros_message->message.size = (ros_message->message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->message.data, string_len);
  }
  // Member: hardware_id
 {
    uint32_t string_len = (ros_message->hardware_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->hardware_id.data) + 1;
    ros_message->hardware_id.size = (ros_message->hardware_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->hardware_id.data, string_len);
  }
  // Member: values
  {
    const size_t size = ros_message->values.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, KeyValue
          )()->data))->cdr_serialize(&ros_message->values.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _DiagnosticStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _DiagnosticStatus__ros_msg_type * ros_message = (_DiagnosticStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: level
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->level);
  // Field name: name
  {
    size_t capacity = ros_message->name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->name.data, capacity, &string_size);
    if (rv) {
      ros_message->name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
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
  // Field name: hardware_id
  {
    size_t capacity = ros_message->hardware_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->hardware_id.data, capacity, &string_size);
    if (rv) {
      ros_message->hardware_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->hardware_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->values.capacity){
      return 0;
    }

    ros_message->values.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, KeyValue
        )()->data))->cdr_deserialize(cdr, &ros_message->values.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _DiagnosticStatus__ros_msg_type * ros_message = (const _DiagnosticStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: level
  {
    const size_t item_size = sizeof(ros_message->level);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->message.size + 1;
  // Member: hardware_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->hardware_id.size + 1;
  // Member: values
  {
    const size_t sequence_size = ros_message->values.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, KeyValue
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->values.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiagnosticStatus__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: level
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: name
  *full_bounded = false;
  // Member: message
  *full_bounded = false;
  // Member: hardware_id
  *full_bounded = false;
  // Member: values
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _DiagnosticStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_DiagnosticStatus = {
  "diagnostic_msgs::msg",
  "DiagnosticStatus",
  _DiagnosticStatus__cdr_serialize,
  _DiagnosticStatus__cdr_deserialize,
  _DiagnosticStatus__get_serialized_size,
  get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus,
  _DiagnosticStatus__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticStatus__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_DiagnosticStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticStatus)() {
  return &_DiagnosticStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
