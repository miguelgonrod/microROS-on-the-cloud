// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

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


typedef sensor_msgs__msg__RegionOfInterest _RegionOfInterest__ros_msg_type;

static bool _RegionOfInterest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _RegionOfInterest__ros_msg_type * ros_message = (_RegionOfInterest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: x_offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message->x_offset);
  // Member: y_offset
  rv = ucdr_serialize_uint32_t(cdr, ros_message->y_offset);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message->height);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message->width);
  // Member: do_rectify
  rv = ucdr_serialize_bool(cdr, (ros_message->do_rectify) ? 0x01 : 0x00);

  return rv;
}

static bool _RegionOfInterest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _RegionOfInterest__ros_msg_type * ros_message = (_RegionOfInterest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: x_offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->x_offset);
  // Field name: y_offset
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->y_offset);
  // Field name: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->height);
  // Field name: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->width);
  // Field name: do_rectify
  rv = ucdr_deserialize_bool(cdr, &ros_message->do_rectify);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _RegionOfInterest__ros_msg_type * ros_message = (const _RegionOfInterest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: x_offset
  {
    const size_t item_size = sizeof(ros_message->x_offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y_offset
  {
    const size_t item_size = sizeof(ros_message->y_offset);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: height
  {
    const size_t item_size = sizeof(ros_message->height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message->width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: do_rectify
  {
    const size_t item_size = sizeof(ros_message->do_rectify);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RegionOfInterest__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__RegionOfInterest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: x_offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: y_offset
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: do_rectify
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _RegionOfInterest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__RegionOfInterest(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_RegionOfInterest = {
  "sensor_msgs::msg",
  "RegionOfInterest",
  _RegionOfInterest__cdr_serialize,
  _RegionOfInterest__cdr_deserialize,
  _RegionOfInterest__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__RegionOfInterest,
  _RegionOfInterest__max_serialized_size
};

static rosidl_message_type_support_t _RegionOfInterest__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_RegionOfInterest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest)() {
  return &_RegionOfInterest__type_support;
}

#if defined(__cplusplus)
}
#endif
