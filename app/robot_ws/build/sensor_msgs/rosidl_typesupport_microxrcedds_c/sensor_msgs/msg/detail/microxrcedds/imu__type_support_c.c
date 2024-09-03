// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/imu__struct.h"
#include "sensor_msgs/msg/detail/imu__functions.h"

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

#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation
#include "geometry_msgs/msg/detail/vector3__functions.h"  // angular_velocity, linear_acceleration
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3)();
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


typedef sensor_msgs__msg__Imu _Imu__ros_msg_type;

static bool _Imu__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Imu__ros_msg_type * ros_message = (_Imu__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_serialize(&ros_message->orientation, cdr);
  // Member: orientation_covariance
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->orientation_covariance, size);
  }
  // Member: angular_velocity
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->angular_velocity, cdr);
  // Member: angular_velocity_covariance
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->angular_velocity_covariance, size);
  }
  // Member: linear_acceleration
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->linear_acceleration, cdr);
  // Member: linear_acceleration_covariance
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->linear_acceleration_covariance, size);
  }

  return rv;
}

static bool _Imu__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Imu__ros_msg_type * ros_message = (_Imu__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_deserialize(cdr, &ros_message->orientation);
  // Field name: orientation_covariance
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->orientation_covariance, size);
  }
  // Field name: angular_velocity
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->angular_velocity);
  // Field name: angular_velocity_covariance
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->angular_velocity_covariance, size);
  }
  // Field name: linear_acceleration
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->linear_acceleration);
  // Field name: linear_acceleration_covariance
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->linear_acceleration_covariance, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Imu__ros_msg_type * ros_message = (const _Imu__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: orientation
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Quaternion(&ros_message->orientation, current_alignment);
  // Member: orientation_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->orientation_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: angular_velocity
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->angular_velocity, current_alignment);
  // Member: angular_velocity_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->angular_velocity_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: linear_acceleration
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->linear_acceleration, current_alignment);
  // Member: linear_acceleration_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->linear_acceleration_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Imu__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__Imu(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__Imu(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: orientation
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Quaternion(full_bounded, current_alignment);
  // Member: orientation_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: angular_velocity
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);
  // Member: angular_velocity_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: linear_acceleration
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);
  // Member: linear_acceleration_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static size_t _Imu__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__Imu(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Imu = {
  "sensor_msgs::msg",
  "Imu",
  _Imu__cdr_serialize,
  _Imu__cdr_deserialize,
  _Imu__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__Imu,
  _Imu__max_serialized_size
};

static rosidl_message_type_support_t _Imu__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Imu,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Imu)() {
  return &_Imu__type_support;
}

#if defined(__cplusplus)
}
#endif
