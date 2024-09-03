// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/builtins__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/builtins__struct.h"
#include "test_msgs/msg/detail/builtins__functions.h"

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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // duration_value
#include "builtin_interfaces/msg/detail/time__functions.h"  // time_value

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef test_msgs__msg__Builtins _Builtins__ros_msg_type;

static bool _Builtins__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Builtins__ros_msg_type * ros_message = (_Builtins__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: duration_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_serialize(&ros_message->duration_value, cdr);
  // Member: time_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->time_value, cdr);

  return rv;
}

static bool _Builtins__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Builtins__ros_msg_type * ros_message = (_Builtins__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: duration_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_deserialize(cdr, &ros_message->duration_value);
  // Field name: time_value
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->time_value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Builtins__ros_msg_type * ros_message = (const _Builtins__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: duration_value
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Duration(&ros_message->duration_value, current_alignment);
  // Member: time_value
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->time_value, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Builtins__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__Builtins(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Builtins(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: duration_value
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Duration(full_bounded, current_alignment);
  // Member: time_value
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Builtins__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__Builtins(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Builtins = {
  "test_msgs::msg",
  "Builtins",
  _Builtins__cdr_serialize,
  _Builtins__cdr_deserialize,
  _Builtins__get_serialized_size,
  get_serialized_size_test_msgs__msg__Builtins,
  _Builtins__max_serialized_size
};

static rosidl_message_type_support_t _Builtins__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Builtins,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins)() {
  return &_Builtins__type_support;
}

#if defined(__cplusplus)
}
#endif
