// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_descriptor__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"

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

#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"  // floating_point_range
#include "rcl_interfaces/msg/detail/integer_range__functions.h"  // integer_range
#include "rosidl_runtime_c/string.h"  // additional_constraints, description, name
#include "rosidl_runtime_c/string_functions.h"  // additional_constraints, description, name

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, FloatingPointRange)();
size_t get_serialized_size_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__IntegerRange(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, IntegerRange)();


typedef rcl_interfaces__msg__ParameterDescriptor _ParameterDescriptor__ros_msg_type;

static bool _ParameterDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ParameterDescriptor__ros_msg_type * ros_message = (_ParameterDescriptor__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type);
  // Member: description
 {
    uint32_t string_len = (ros_message->description.data == NULL) ? 0 : (uint32_t)strlen(ros_message->description.data) + 1;
    ros_message->description.size = (ros_message->description.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->description.data, string_len);
  }
  // Member: additional_constraints
 {
    uint32_t string_len = (ros_message->additional_constraints.data == NULL) ? 0 : (uint32_t)strlen(ros_message->additional_constraints.data) + 1;
    ros_message->additional_constraints.size = (ros_message->additional_constraints.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->additional_constraints.data, string_len);
  }
  // Member: read_only
  rv = ucdr_serialize_bool(cdr, (ros_message->read_only) ? 0x01 : 0x00);
  // Member: dynamic_typing
  rv = ucdr_serialize_bool(cdr, (ros_message->dynamic_typing) ? 0x01 : 0x00);
  // Member: floating_point_range
  {
    const size_t size = ros_message->floating_point_range.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, FloatingPointRange
          )()->data))->cdr_serialize(&ros_message->floating_point_range.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: integer_range
  {
    const size_t size = ros_message->integer_range.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, IntegerRange
          )()->data))->cdr_serialize(&ros_message->integer_range.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _ParameterDescriptor__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ParameterDescriptor__ros_msg_type * ros_message = (_ParameterDescriptor__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

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
  // Field name: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type);
  // Field name: description
  {
    size_t capacity = ros_message->description.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->description.data, capacity, &string_size);
    if (rv) {
      ros_message->description.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->description.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: additional_constraints
  {
    size_t capacity = ros_message->additional_constraints.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->additional_constraints.data, capacity, &string_size);
    if (rv) {
      ros_message->additional_constraints.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->additional_constraints.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: read_only
  rv = ucdr_deserialize_bool(cdr, &ros_message->read_only);
  // Field name: dynamic_typing
  rv = ucdr_deserialize_bool(cdr, &ros_message->dynamic_typing);
  // Field name: floating_point_range
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->floating_point_range.capacity){
      return 0;
    }

    ros_message->floating_point_range.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, FloatingPointRange
        )()->data))->cdr_deserialize(cdr, &ros_message->floating_point_range.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: integer_range
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->integer_range.capacity){
      return 0;
    }

    ros_message->integer_range.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, IntegerRange
        )()->data))->cdr_deserialize(cdr, &ros_message->integer_range.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ParameterDescriptor__ros_msg_type * ros_message = (const _ParameterDescriptor__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: description
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->description.size + 1;
  // Member: additional_constraints
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->additional_constraints.size + 1;
  // Member: read_only
  {
    const size_t item_size = sizeof(ros_message->read_only);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: dynamic_typing
  {
    const size_t item_size = sizeof(ros_message->dynamic_typing);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: floating_point_range
  {
    const size_t sequence_size = ros_message->floating_point_range.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, FloatingPointRange
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->floating_point_range.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: integer_range
  {
    const size_t sequence_size = ros_message->integer_range.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, IntegerRange
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->integer_range.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterDescriptor__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: description
  *full_bounded = false;
  // Member: additional_constraints
  *full_bounded = false;
  // Member: read_only
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: dynamic_typing
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: floating_point_range
  {
    *full_bounded = false;
  }
  // Member: integer_range
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ParameterDescriptor__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ParameterDescriptor = {
  "rcl_interfaces::msg",
  "ParameterDescriptor",
  _ParameterDescriptor__cdr_serialize,
  _ParameterDescriptor__cdr_deserialize,
  _ParameterDescriptor__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__ParameterDescriptor,
  _ParameterDescriptor__max_serialized_size
};

static rosidl_message_type_support_t _ParameterDescriptor__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ParameterDescriptor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor)() {
  return &_ParameterDescriptor__type_support;
}

#if defined(__cplusplus)
}
#endif
