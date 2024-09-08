// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_value__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"
#include "rcl_interfaces/msg/detail/parameter_value__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // bool_array_value, byte_array_value, double_array_value, integer_array_value
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bool_array_value, byte_array_value, double_array_value, integer_array_value
#include "rosidl_runtime_c/string.h"  // string_array_value, string_value
#include "rosidl_runtime_c/string_functions.h"  // string_array_value, string_value

// forward declare type support functions


typedef rcl_interfaces__msg__ParameterValue _ParameterValue__ros_msg_type;

static bool _ParameterValue__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ParameterValue__ros_msg_type * ros_message = (_ParameterValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type);
  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, (ros_message->bool_value) ? 0x01 : 0x00);
  // Member: integer_value
  rv = ucdr_serialize_int64_t(cdr, ros_message->integer_value);
  // Member: double_value
  rv = ucdr_serialize_double(cdr, ros_message->double_value);
  // Member: string_value
 {
    uint32_t string_len = (ros_message->string_value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value.data) + 1;
    ros_message->string_value.size = (ros_message->string_value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value.data, string_len);
  }
  // Member: byte_array_value
  {
    const size_t size = ros_message->byte_array_value.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->byte_array_value.data, size);
  }
  // Member: bool_array_value
  {
    const size_t size = ros_message->bool_array_value.size;
    rv = ucdr_serialize_sequence_bool(cdr, ros_message->bool_array_value.data, size);
  }
  // Member: integer_array_value
  {
    const size_t size = ros_message->integer_array_value.size;
    rv = ucdr_serialize_sequence_int64_t(cdr, ros_message->integer_array_value.data, size);
  }
  // Member: double_array_value
  {
    const size_t size = ros_message->double_array_value.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->double_array_value.data, size);
  }
  // Member: string_array_value
  {
    const size_t size = ros_message->string_array_value.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->string_array_value.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_array_value.data[i].data) + 1;
      ros_message->string_array_value.data[i].size = (ros_message->string_array_value.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->string_array_value.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _ParameterValue__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ParameterValue__ros_msg_type * ros_message = (_ParameterValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type);
  // Field name: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message->bool_value);
  // Field name: integer_value
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->integer_value);
  // Field name: double_value
  rv = ucdr_deserialize_double(cdr, &ros_message->double_value);
  // Field name: string_value
  {
    size_t capacity = ros_message->string_value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: byte_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message->byte_array_value.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->byte_array_value.data, capacity, &size);
    if (rv) {
      ros_message->byte_array_value.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->byte_array_value.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: bool_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message->bool_array_value.capacity;
    rv = ucdr_deserialize_sequence_bool(cdr, ros_message->bool_array_value.data, capacity, &size);
    if (rv) {
      ros_message->bool_array_value.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bool_array_value.size = 0;
      ucdr_align_to(cdr, sizeof(bool));
      ucdr_advance_buffer(cdr, size * sizeof(bool));
    }
  }
  // Field name: integer_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message->integer_array_value.capacity;
    rv = ucdr_deserialize_sequence_int64_t(cdr, ros_message->integer_array_value.data, capacity, &size);
    if (rv) {
      ros_message->integer_array_value.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->integer_array_value.size = 0;
      ucdr_align_to(cdr, sizeof(int64_t));
      ucdr_advance_buffer(cdr, size * sizeof(int64_t));
    }
  }
  // Field name: double_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message->double_array_value.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->double_array_value.data, capacity, &size);
    if (rv) {
      ros_message->double_array_value.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->double_array_value.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: string_array_value
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->string_array_value.capacity){
      return 0;
    }
    ros_message->string_array_value.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->string_array_value.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->string_array_value.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->string_array_value.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->string_array_value.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterValue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ParameterValue__ros_msg_type * ros_message = (const _ParameterValue__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: integer_value
  {
    const size_t item_size = sizeof(ros_message->integer_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: double_value
  {
    const size_t item_size = sizeof(ros_message->double_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value.size + 1;
  // Member: byte_array_value
  {
    size_t sequence_size = ros_message->byte_array_value.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->byte_array_value.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: bool_array_value
  {
    size_t sequence_size = ros_message->bool_array_value.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->bool_array_value.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: integer_array_value
  {
    size_t sequence_size = ros_message->integer_array_value.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->integer_array_value.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: double_array_value
  {
    size_t sequence_size = ros_message->double_array_value.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->double_array_value.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: string_array_value
  {
    const size_t sequence_size = ros_message->string_array_value.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->string_array_value.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterValue__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__ParameterValue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterValue(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: integer_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: double_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: string_value
  *full_bounded = false;
  // Member: byte_array_value
  {
    *full_bounded = false;
  }
  // Member: bool_array_value
  {
    *full_bounded = false;
  }
  // Member: integer_array_value
  {
    *full_bounded = false;
  }
  // Member: double_array_value
  {
    *full_bounded = false;
  }
  // Member: string_array_value
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ParameterValue__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__ParameterValue(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ParameterValue = {
  "rcl_interfaces::msg",
  "ParameterValue",
  _ParameterValue__cdr_serialize,
  _ParameterValue__cdr_deserialize,
  _ParameterValue__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__ParameterValue,
  _ParameterValue__max_serialized_size
};

static rosidl_message_type_support_t _ParameterValue__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ParameterValue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterValue)() {
  return &_ParameterValue__type_support;
}

#if defined(__cplusplus)
}
#endif
