// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/LaserScan.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/laser_scan__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/laser_scan__struct.h"
#include "sensor_msgs/msg/detail/laser_scan__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // intensities, ranges
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // intensities, ranges
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


typedef sensor_msgs__msg__LaserScan _LaserScan__ros_msg_type;

static bool _LaserScan__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LaserScan__ros_msg_type * ros_message = (_LaserScan__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: angle_min
  rv = ucdr_serialize_float(cdr, ros_message->angle_min);
  // Member: angle_max
  rv = ucdr_serialize_float(cdr, ros_message->angle_max);
  // Member: angle_increment
  rv = ucdr_serialize_float(cdr, ros_message->angle_increment);
  // Member: time_increment
  rv = ucdr_serialize_float(cdr, ros_message->time_increment);
  // Member: scan_time
  rv = ucdr_serialize_float(cdr, ros_message->scan_time);
  // Member: range_min
  rv = ucdr_serialize_float(cdr, ros_message->range_min);
  // Member: range_max
  rv = ucdr_serialize_float(cdr, ros_message->range_max);
  // Member: ranges
  {
    const size_t size = ros_message->ranges.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->ranges.data, size);
  }
  // Member: intensities
  {
    const size_t size = ros_message->intensities.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->intensities.data, size);
  }

  return rv;
}

static bool _LaserScan__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LaserScan__ros_msg_type * ros_message = (_LaserScan__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: angle_min
  rv = ucdr_deserialize_float(cdr, &ros_message->angle_min);
  // Field name: angle_max
  rv = ucdr_deserialize_float(cdr, &ros_message->angle_max);
  // Field name: angle_increment
  rv = ucdr_deserialize_float(cdr, &ros_message->angle_increment);
  // Field name: time_increment
  rv = ucdr_deserialize_float(cdr, &ros_message->time_increment);
  // Field name: scan_time
  rv = ucdr_deserialize_float(cdr, &ros_message->scan_time);
  // Field name: range_min
  rv = ucdr_deserialize_float(cdr, &ros_message->range_min);
  // Field name: range_max
  rv = ucdr_deserialize_float(cdr, &ros_message->range_max);
  // Field name: ranges
  {
    uint32_t size;
    const size_t capacity = ros_message->ranges.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->ranges.data, capacity, &size);
    if (rv) {
      ros_message->ranges.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->ranges.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  // Field name: intensities
  {
    uint32_t size;
    const size_t capacity = ros_message->intensities.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->intensities.data, capacity, &size);
    if (rv) {
      ros_message->intensities.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->intensities.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LaserScan__ros_msg_type * ros_message = (const _LaserScan__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: angle_min
  {
    const size_t item_size = sizeof(ros_message->angle_min);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angle_max
  {
    const size_t item_size = sizeof(ros_message->angle_max);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angle_increment
  {
    const size_t item_size = sizeof(ros_message->angle_increment);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: time_increment
  {
    const size_t item_size = sizeof(ros_message->time_increment);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: scan_time
  {
    const size_t item_size = sizeof(ros_message->scan_time);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range_min
  {
    const size_t item_size = sizeof(ros_message->range_min);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range_max
  {
    const size_t item_size = sizeof(ros_message->range_max);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ranges
  {
    size_t sequence_size = ros_message->ranges.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->ranges.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: intensities
  {
    size_t sequence_size = ros_message->intensities.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->intensities.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaserScan__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__LaserScan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__LaserScan(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: angle_min
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angle_max
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angle_increment
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: time_increment
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: scan_time
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range_min
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range_max
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: ranges
  {
    *full_bounded = false;
  }
  // Member: intensities
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _LaserScan__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__LaserScan(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LaserScan = {
  "sensor_msgs::msg",
  "LaserScan",
  _LaserScan__cdr_serialize,
  _LaserScan__cdr_deserialize,
  _LaserScan__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__LaserScan,
  _LaserScan__max_serialized_size
};

static rosidl_message_type_support_t _LaserScan__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LaserScan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserScan)() {
  return &_LaserScan__type_support;
}

#if defined(__cplusplus)
}
#endif
