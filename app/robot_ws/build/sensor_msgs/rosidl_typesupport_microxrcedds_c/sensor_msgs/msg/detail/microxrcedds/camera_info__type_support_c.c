// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/camera_info__struct.h"
#include "sensor_msgs/msg/detail/camera_info__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // d
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // d
#include "rosidl_runtime_c/string.h"  // distortion_model
#include "rosidl_runtime_c/string_functions.h"  // distortion_model
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // roi
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest)();
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


typedef sensor_msgs__msg__CameraInfo _CameraInfo__ros_msg_type;

static bool _CameraInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _CameraInfo__ros_msg_type * ros_message = (_CameraInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message->height);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message->width);
  // Member: distortion_model
 {
    uint32_t string_len = (ros_message->distortion_model.data == NULL) ? 0 : (uint32_t)strlen(ros_message->distortion_model.data) + 1;
    ros_message->distortion_model.size = (ros_message->distortion_model.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->distortion_model.data, string_len);
  }
  // Member: d
  {
    const size_t size = ros_message->d.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->d.data, size);
  }
  // Member: k
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->k, size);
  }
  // Member: r
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->r, size);
  }
  // Member: p
  {
    const size_t size = 12;
    rv = ucdr_serialize_array_double(cdr, ros_message->p, size);
  }
  // Member: binning_x
  rv = ucdr_serialize_uint32_t(cdr, ros_message->binning_x);
  // Member: binning_y
  rv = ucdr_serialize_uint32_t(cdr, ros_message->binning_y);
  // Member: roi
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest
      )()->data))->cdr_serialize(&ros_message->roi, cdr);

  return rv;
}

static bool _CameraInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _CameraInfo__ros_msg_type * ros_message = (_CameraInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->height);
  // Field name: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->width);
  // Field name: distortion_model
  {
    size_t capacity = ros_message->distortion_model.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->distortion_model.data, capacity, &string_size);
    if (rv) {
      ros_message->distortion_model.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->distortion_model.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: d
  {
    uint32_t size;
    const size_t capacity = ros_message->d.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->d.data, capacity, &size);
    if (rv) {
      ros_message->d.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->d.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: k
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->k, size);
  }
  // Field name: r
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->r, size);
  }
  // Field name: p
  {
    const size_t size = 12;
    rv = ucdr_deserialize_array_double(cdr, ros_message->p, size);
  }
  // Field name: binning_x
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->binning_x);
  // Field name: binning_y
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->binning_y);
  // Field name: roi
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest
      )()->data))->cdr_deserialize(cdr, &ros_message->roi);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _CameraInfo__ros_msg_type * ros_message = (const _CameraInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
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
  // Member: distortion_model
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->distortion_model.size + 1;
  // Member: d
  {
    size_t sequence_size = ros_message->d.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->d.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: k
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->k[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->r[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: p
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message->p[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: binning_x
  {
    const size_t item_size = sizeof(ros_message->binning_x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: binning_y
  {
    const size_t item_size = sizeof(ros_message->binning_y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: roi
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__RegionOfInterest(&ros_message->roi, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraInfo__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__CameraInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: distortion_model
  *full_bounded = false;
  // Member: d
  {
    *full_bounded = false;
  }
  // Member: k
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: r
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: p
  {
    const size_t array_size = 12;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: binning_x
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: binning_y
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: roi
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__RegionOfInterest(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _CameraInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__CameraInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_CameraInfo = {
  "sensor_msgs::msg",
  "CameraInfo",
  _CameraInfo__cdr_serialize,
  _CameraInfo__cdr_deserialize,
  _CameraInfo__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__CameraInfo,
  _CameraInfo__max_serialized_size
};

static rosidl_message_type_support_t _CameraInfo__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_CameraInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CameraInfo)() {
  return &_CameraInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
