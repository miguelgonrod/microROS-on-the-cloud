// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__struct.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__functions.h"

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

#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"  // changed_parameters, deleted_parameters, new_parameters

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor)();


typedef rcl_interfaces__msg__ParameterEventDescriptors _ParameterEventDescriptors__ros_msg_type;

static bool _ParameterEventDescriptors__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ParameterEventDescriptors__ros_msg_type * ros_message = (_ParameterEventDescriptors__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: new_parameters
  {
    const size_t size = ros_message->new_parameters.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
          )()->data))->cdr_serialize(&ros_message->new_parameters.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: changed_parameters
  {
    const size_t size = ros_message->changed_parameters.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
          )()->data))->cdr_serialize(&ros_message->changed_parameters.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: deleted_parameters
  {
    const size_t size = ros_message->deleted_parameters.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
          )()->data))->cdr_serialize(&ros_message->deleted_parameters.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _ParameterEventDescriptors__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ParameterEventDescriptors__ros_msg_type * ros_message = (_ParameterEventDescriptors__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: new_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->new_parameters.capacity){
      return 0;
    }

    ros_message->new_parameters.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->cdr_deserialize(cdr, &ros_message->new_parameters.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: changed_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->changed_parameters.capacity){
      return 0;
    }

    ros_message->changed_parameters.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->cdr_deserialize(cdr, &ros_message->changed_parameters.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: deleted_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->deleted_parameters.capacity){
      return 0;
    }

    ros_message->deleted_parameters.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->cdr_deserialize(cdr, &ros_message->deleted_parameters.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ParameterEventDescriptors__ros_msg_type * ros_message = (const _ParameterEventDescriptors__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: new_parameters
  {
    const size_t sequence_size = ros_message->new_parameters.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->new_parameters.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: changed_parameters
  {
    const size_t sequence_size = ros_message->changed_parameters.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->changed_parameters.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: deleted_parameters
  {
    const size_t sequence_size = ros_message->deleted_parameters.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterDescriptor
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->deleted_parameters.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterEventDescriptors__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: new_parameters
  {
    *full_bounded = false;
  }
  // Member: changed_parameters
  {
    *full_bounded = false;
  }
  // Member: deleted_parameters
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ParameterEventDescriptors__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ParameterEventDescriptors = {
  "rcl_interfaces::msg",
  "ParameterEventDescriptors",
  _ParameterEventDescriptors__cdr_serialize,
  _ParameterEventDescriptors__cdr_deserialize,
  _ParameterEventDescriptors__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors,
  _ParameterEventDescriptors__max_serialized_size
};

static rosidl_message_type_support_t _ParameterEventDescriptors__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ParameterEventDescriptors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterEventDescriptors)() {
  return &_ParameterEventDescriptors__type_support;
}

#if defined(__cplusplus)
}
#endif
