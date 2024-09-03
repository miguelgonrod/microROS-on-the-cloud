// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/Illuminance.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/illuminance__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/illuminance__struct.h"
#include "sensor_msgs/msg/detail/illuminance__functions.h"

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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef sensor_msgs__msg__Illuminance _Illuminance__ros_msg_type;

static bool _Illuminance__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Illuminance__ros_msg_type * ros_message = (_Illuminance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: illuminance
  rv = ucdr_serialize_double(cdr, ros_message->illuminance);
  // Member: variance
  rv = ucdr_serialize_double(cdr, ros_message->variance);

  return rv;
}

static bool _Illuminance__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Illuminance__ros_msg_type * ros_message = (_Illuminance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: illuminance
  rv = ucdr_deserialize_double(cdr, &ros_message->illuminance);
  // Field name: variance
  rv = ucdr_deserialize_double(cdr, &ros_message->variance);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__Illuminance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Illuminance__ros_msg_type * ros_message = (const _Illuminance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: illuminance
  {
    const size_t item_size = sizeof(ros_message->illuminance);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: variance
  {
    const size_t item_size = sizeof(ros_message->variance);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Illuminance__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__Illuminance(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__Illuminance(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: illuminance
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: variance
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _Illuminance__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__Illuminance(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Illuminance = {
  "sensor_msgs::msg",
  "Illuminance",
  _Illuminance__cdr_serialize,
  _Illuminance__cdr_deserialize,
  _Illuminance__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__Illuminance,
  _Illuminance__max_serialized_size
};

static rosidl_message_type_support_t _Illuminance__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Illuminance,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Illuminance)() {
  return &_Illuminance__type_support;
}

#if defined(__cplusplus)
}
#endif
