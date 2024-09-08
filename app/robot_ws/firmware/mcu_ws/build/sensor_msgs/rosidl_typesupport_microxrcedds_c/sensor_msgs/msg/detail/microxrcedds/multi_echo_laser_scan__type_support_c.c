// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__struct.h"
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__functions.h"

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

#include "sensor_msgs/msg/detail/laser_echo__functions.h"  // intensities, ranges
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_sensor_msgs__msg__LaserEcho(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sensor_msgs__msg__LaserEcho(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho)();
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


typedef sensor_msgs__msg__MultiEchoLaserScan _MultiEchoLaserScan__ros_msg_type;

static bool _MultiEchoLaserScan__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiEchoLaserScan__ros_msg_type * ros_message = (_MultiEchoLaserScan__ros_msg_type *)(untyped_ros_message);
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
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
          )()->data))->cdr_serialize(&ros_message->ranges.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: intensities
  {
    const size_t size = ros_message->intensities.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
          )()->data))->cdr_serialize(&ros_message->intensities.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _MultiEchoLaserScan__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiEchoLaserScan__ros_msg_type * ros_message = (_MultiEchoLaserScan__ros_msg_type *)(untyped_ros_message);
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
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->ranges.capacity){
      return 0;
    }

    ros_message->ranges.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
        )()->data))->cdr_deserialize(cdr, &ros_message->ranges.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: intensities
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->intensities.capacity){
      return 0;
    }

    ros_message->intensities.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
        )()->data))->cdr_deserialize(cdr, &ros_message->intensities.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__MultiEchoLaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiEchoLaserScan__ros_msg_type * ros_message = (const _MultiEchoLaserScan__ros_msg_type *)(untyped_ros_message);
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
    const size_t sequence_size = ros_message->ranges.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->ranges.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: intensities
  {
    const size_t sequence_size = ros_message->intensities.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, LaserEcho
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->intensities.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiEchoLaserScan__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__MultiEchoLaserScan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__MultiEchoLaserScan(
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

static size_t _MultiEchoLaserScan__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__MultiEchoLaserScan(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiEchoLaserScan = {
  "sensor_msgs::msg",
  "MultiEchoLaserScan",
  _MultiEchoLaserScan__cdr_serialize,
  _MultiEchoLaserScan__cdr_deserialize,
  _MultiEchoLaserScan__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__MultiEchoLaserScan,
  _MultiEchoLaserScan__max_serialized_size
};

static rosidl_message_type_support_t _MultiEchoLaserScan__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiEchoLaserScan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, MultiEchoLaserScan)() {
  return &_MultiEchoLaserScan__type_support;
}

#if defined(__cplusplus)
}
#endif
