// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from example_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/multi_array_layout__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
#include "example_interfaces/msg/detail/multi_array_layout__functions.h"

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

#include "example_interfaces/msg/detail/multi_array_dimension__functions.h"  // dim

// forward declare type support functions
size_t get_serialized_size_example_interfaces__msg__MultiArrayDimension(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_example_interfaces__msg__MultiArrayDimension(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, MultiArrayDimension)();


typedef example_interfaces__msg__MultiArrayLayout _MultiArrayLayout__ros_msg_type;

static bool _MultiArrayLayout__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiArrayLayout__ros_msg_type * ros_message = (_MultiArrayLayout__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: dim
  {
    const size_t size = ros_message->dim.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, MultiArrayDimension
          )()->data))->cdr_serialize(&ros_message->dim.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: data_offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message->data_offset);

  return rv;
}

static bool _MultiArrayLayout__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiArrayLayout__ros_msg_type * ros_message = (_MultiArrayLayout__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: dim
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->dim.capacity){
      return 0;
    }

    ros_message->dim.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, MultiArrayDimension
        )()->data))->cdr_deserialize(cdr, &ros_message->dim.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: data_offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->data_offset);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__MultiArrayLayout(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiArrayLayout__ros_msg_type * ros_message = (const _MultiArrayLayout__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: dim
  {
    const size_t sequence_size = ros_message->dim.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, MultiArrayDimension
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->dim.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: data_offset
  {
    const size_t item_size = sizeof(ros_message->data_offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiArrayLayout__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_example_interfaces__msg__MultiArrayLayout(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__MultiArrayLayout(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: dim
  {
    *full_bounded = false;
  }
  // Member: data_offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);

  return current_alignment - initial_alignment;
}

static size_t _MultiArrayLayout__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_example_interfaces__msg__MultiArrayLayout(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiArrayLayout = {
  "example_interfaces::msg",
  "MultiArrayLayout",
  _MultiArrayLayout__cdr_serialize,
  _MultiArrayLayout__cdr_deserialize,
  _MultiArrayLayout__get_serialized_size,
  get_serialized_size_example_interfaces__msg__MultiArrayLayout,
  _MultiArrayLayout__max_serialized_size
};

static rosidl_message_type_support_t _MultiArrayLayout__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiArrayLayout,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, msg, MultiArrayLayout)() {
  return &_MultiArrayLayout__type_support;
}

#if defined(__cplusplus)
}
#endif
