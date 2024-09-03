// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/ChannelFloat32.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/channel_float32__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/channel_float32__struct.h"
#include "sensor_msgs/msg/detail/channel_float32__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // values
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


typedef sensor_msgs__msg__ChannelFloat32 _ChannelFloat32__ros_msg_type;

static bool _ChannelFloat32__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ChannelFloat32__ros_msg_type * ros_message = (_ChannelFloat32__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: values
  {
    const size_t size = ros_message->values.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->values.data, size);
  }

  return rv;
}

static bool _ChannelFloat32__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ChannelFloat32__ros_msg_type * ros_message = (_ChannelFloat32__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: name
  {
    size_t capacity = ros_message->name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->name.data, capacity, &string_size);
    if (rv) {
      ros_message->name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: values
  {
    uint32_t size;
    const size_t capacity = ros_message->values.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->values.data, capacity, &size);
    if (rv) {
      ros_message->values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->values.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__ChannelFloat32(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ChannelFloat32__ros_msg_type * ros_message = (const _ChannelFloat32__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: values
  {
    size_t sequence_size = ros_message->values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChannelFloat32__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__ChannelFloat32(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__ChannelFloat32(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: values
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ChannelFloat32__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__ChannelFloat32(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ChannelFloat32 = {
  "sensor_msgs::msg",
  "ChannelFloat32",
  _ChannelFloat32__cdr_serialize,
  _ChannelFloat32__cdr_deserialize,
  _ChannelFloat32__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__ChannelFloat32,
  _ChannelFloat32__max_serialized_size
};

static rosidl_message_type_support_t _ChannelFloat32__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ChannelFloat32,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, ChannelFloat32)() {
  return &_ChannelFloat32__type_support;
}

#if defined(__cplusplus)
}
#endif
