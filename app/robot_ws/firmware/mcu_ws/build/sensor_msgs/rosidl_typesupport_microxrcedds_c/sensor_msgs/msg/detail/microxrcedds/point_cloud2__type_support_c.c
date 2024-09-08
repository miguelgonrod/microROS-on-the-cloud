// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data
#include "sensor_msgs/msg/detail/point_field__functions.h"  // fields
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_sensor_msgs__msg__PointField(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sensor_msgs__msg__PointField(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, PointField)();
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


typedef sensor_msgs__msg__PointCloud2 _PointCloud2__ros_msg_type;

static bool _PointCloud2__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _PointCloud2__ros_msg_type * ros_message = (_PointCloud2__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message->height);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message->width);
  // Member: fields
  {
    const size_t size = ros_message->fields.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, PointField
          )()->data))->cdr_serialize(&ros_message->fields.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: is_bigendian
  rv = ucdr_serialize_bool(cdr, (ros_message->is_bigendian) ? 0x01 : 0x00);
  // Member: point_step
  rv = ucdr_serialize_uint32_t(cdr, ros_message->point_step);
  // Member: row_step
  rv = ucdr_serialize_uint32_t(cdr, ros_message->row_step);
  // Member: data
  {
    const size_t size = ros_message->data.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->data.data, size);
  }
  // Member: is_dense
  rv = ucdr_serialize_bool(cdr, (ros_message->is_dense) ? 0x01 : 0x00);

  return rv;
}

static bool _PointCloud2__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _PointCloud2__ros_msg_type * ros_message = (_PointCloud2__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->height);
  // Field name: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->width);
  // Field name: fields
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->fields.capacity){
      return 0;
    }

    ros_message->fields.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, PointField
        )()->data))->cdr_deserialize(cdr, &ros_message->fields.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: is_bigendian
  rv = ucdr_deserialize_bool(cdr, &ros_message->is_bigendian);
  // Field name: point_step
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->point_step);
  // Field name: row_step
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->row_step);
  // Field name: data
  {
    uint32_t size;
    const size_t capacity = ros_message->data.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->data.data, capacity, &size);
    if (rv) {
      ros_message->data.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: is_dense
  rv = ucdr_deserialize_bool(cdr, &ros_message->is_dense);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _PointCloud2__ros_msg_type * ros_message = (const _PointCloud2__ros_msg_type *)(untyped_ros_message);
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
  // Member: fields
  {
    const size_t sequence_size = ros_message->fields.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, PointField
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->fields.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: is_bigendian
  {
    const size_t item_size = sizeof(ros_message->is_bigendian);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: point_step
  {
    const size_t item_size = sizeof(ros_message->point_step);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: row_step
  {
    const size_t item_size = sizeof(ros_message->row_step);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data
  {
    size_t sequence_size = ros_message->data.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->data.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: is_dense
  {
    const size_t item_size = sizeof(ros_message->is_dense);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PointCloud2__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__PointCloud2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
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
  // Member: fields
  {
    *full_bounded = false;
  }
  // Member: is_bigendian
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: point_step
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: row_step
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: data
  {
    *full_bounded = false;
  }
  // Member: is_dense
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _PointCloud2__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__PointCloud2(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_PointCloud2 = {
  "sensor_msgs::msg",
  "PointCloud2",
  _PointCloud2__cdr_serialize,
  _PointCloud2__cdr_deserialize,
  _PointCloud2__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__PointCloud2,
  _PointCloud2__max_serialized_size
};

static rosidl_message_type_support_t _PointCloud2__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_PointCloud2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, PointCloud2)() {
  return &_PointCloud2__type_support;
}

#if defined(__cplusplus)
}
#endif
