// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/AccelWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__struct.h"
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__functions.h"

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

#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"  // accel
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, AccelWithCovariance)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef geometry_msgs__msg__AccelWithCovarianceStamped _AccelWithCovarianceStamped__ros_msg_type;

static bool _AccelWithCovarianceStamped__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AccelWithCovarianceStamped__ros_msg_type * ros_message = (_AccelWithCovarianceStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: accel
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, AccelWithCovariance
      )()->data))->cdr_serialize(&ros_message->accel, cdr);

  return rv;
}

static bool _AccelWithCovarianceStamped__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AccelWithCovarianceStamped__ros_msg_type * ros_message = (_AccelWithCovarianceStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: accel
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, AccelWithCovariance
      )()->data))->cdr_deserialize(cdr, &ros_message->accel);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__AccelWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AccelWithCovarianceStamped__ros_msg_type * ros_message = (const _AccelWithCovarianceStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: accel
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__AccelWithCovariance(&ros_message->accel, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AccelWithCovarianceStamped__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__AccelWithCovarianceStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__AccelWithCovarianceStamped(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: accel
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__AccelWithCovariance(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _AccelWithCovarianceStamped__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__AccelWithCovarianceStamped(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AccelWithCovarianceStamped = {
  "geometry_msgs::msg",
  "AccelWithCovarianceStamped",
  _AccelWithCovarianceStamped__cdr_serialize,
  _AccelWithCovarianceStamped__cdr_deserialize,
  _AccelWithCovarianceStamped__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__AccelWithCovarianceStamped,
  _AccelWithCovarianceStamped__max_serialized_size
};

static rosidl_message_type_support_t _AccelWithCovarianceStamped__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AccelWithCovarianceStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, AccelWithCovarianceStamped)() {
  return &_AccelWithCovarianceStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
