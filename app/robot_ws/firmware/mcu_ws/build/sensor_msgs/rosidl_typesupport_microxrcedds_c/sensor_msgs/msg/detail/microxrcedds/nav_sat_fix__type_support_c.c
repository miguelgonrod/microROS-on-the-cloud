// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/nav_sat_fix__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

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

#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"  // status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_sensor_msgs__msg__NavSatStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sensor_msgs__msg__NavSatStatus(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, NavSatStatus)();
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


typedef sensor_msgs__msg__NavSatFix _NavSatFix__ros_msg_type;

static bool _NavSatFix__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NavSatFix__ros_msg_type * ros_message = (_NavSatFix__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: status
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, NavSatStatus
      )()->data))->cdr_serialize(&ros_message->status, cdr);
  // Member: latitude
  rv = ucdr_serialize_double(cdr, ros_message->latitude);
  // Member: longitude
  rv = ucdr_serialize_double(cdr, ros_message->longitude);
  // Member: altitude
  rv = ucdr_serialize_double(cdr, ros_message->altitude);
  // Member: position_covariance
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->position_covariance, size);
  }
  // Member: position_covariance_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->position_covariance_type);

  return rv;
}

static bool _NavSatFix__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NavSatFix__ros_msg_type * ros_message = (_NavSatFix__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: status
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, NavSatStatus
      )()->data))->cdr_deserialize(cdr, &ros_message->status);
  // Field name: latitude
  rv = ucdr_deserialize_double(cdr, &ros_message->latitude);
  // Field name: longitude
  rv = ucdr_deserialize_double(cdr, &ros_message->longitude);
  // Field name: altitude
  rv = ucdr_deserialize_double(cdr, &ros_message->altitude);
  // Field name: position_covariance
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->position_covariance, size);
  }
  // Field name: position_covariance_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->position_covariance_type);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__NavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NavSatFix__ros_msg_type * ros_message = (const _NavSatFix__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: status
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__NavSatStatus(&ros_message->status, current_alignment);
  // Member: latitude
  {
    const size_t item_size = sizeof(ros_message->latitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: longitude
  {
    const size_t item_size = sizeof(ros_message->longitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: altitude
  {
    const size_t item_size = sizeof(ros_message->altitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: position_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->position_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: position_covariance_type
  {
    const size_t item_size = sizeof(ros_message->position_covariance_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavSatFix__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__NavSatFix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__NavSatFix(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: status
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__NavSatStatus(full_bounded, current_alignment);
  // Member: latitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: longitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: altitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: position_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: position_covariance_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _NavSatFix__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__NavSatFix(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NavSatFix = {
  "sensor_msgs::msg",
  "NavSatFix",
  _NavSatFix__cdr_serialize,
  _NavSatFix__cdr_deserialize,
  _NavSatFix__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__NavSatFix,
  _NavSatFix__max_serialized_size
};

static rosidl_message_type_support_t _NavSatFix__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NavSatFix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, NavSatFix)() {
  return &_NavSatFix__type_support;
}

#if defined(__cplusplus)
}
#endif
