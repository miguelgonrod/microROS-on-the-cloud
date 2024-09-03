// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/ParameterType.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_type__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_type__struct.h"
#include "rcl_interfaces/msg/detail/parameter_type__functions.h"

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


typedef rcl_interfaces__msg__ParameterType _ParameterType__ros_msg_type;

static bool _ParameterType__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ParameterType__ros_msg_type * ros_message = (_ParameterType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _ParameterType__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ParameterType__ros_msg_type * ros_message = (_ParameterType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ParameterType__ros_msg_type * ros_message = (const _ParameterType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterType__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__ParameterType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterType(
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

static size_t _ParameterType__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__ParameterType(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ParameterType = {
  "rcl_interfaces::msg",
  "ParameterType",
  _ParameterType__cdr_serialize,
  _ParameterType__cdr_deserialize,
  _ParameterType__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__ParameterType,
  _ParameterType__max_serialized_size
};

static rosidl_message_type_support_t _ParameterType__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ParameterType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterType)() {
  return &_ParameterType__type_support;
}

#if defined(__cplusplus)
}
#endif
