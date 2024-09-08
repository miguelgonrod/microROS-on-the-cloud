// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/map_meta_data__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/msg/detail/map_meta_data__struct.h"
#include "nav_msgs/msg/detail/map_meta_data__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // map_load_time
#include "geometry_msgs/msg/detail/pose__functions.h"  // origin

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose)();


typedef nav_msgs__msg__MapMetaData _MapMetaData__ros_msg_type;

static bool _MapMetaData__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MapMetaData__ros_msg_type * ros_message = (_MapMetaData__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: map_load_time
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->map_load_time, cdr);
  // Member: resolution
  rv = ucdr_serialize_float(cdr, ros_message->resolution);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message->width);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message->height);
  // Member: origin
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_serialize(&ros_message->origin, cdr);

  return rv;
}

static bool _MapMetaData__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MapMetaData__ros_msg_type * ros_message = (_MapMetaData__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: map_load_time
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->map_load_time);
  // Field name: resolution
  rv = ucdr_deserialize_float(cdr, &ros_message->resolution);
  // Field name: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->width);
  // Field name: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->height);
  // Field name: origin
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_deserialize(cdr, &ros_message->origin);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__msg__MapMetaData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MapMetaData__ros_msg_type * ros_message = (const _MapMetaData__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map_load_time
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->map_load_time, current_alignment);
  // Member: resolution
  {
    const size_t item_size = sizeof(ros_message->resolution);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message->width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: height
  {
    const size_t item_size = sizeof(ros_message->height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: origin
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Pose(&ros_message->origin, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MapMetaData__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__msg__MapMetaData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__msg__MapMetaData(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map_load_time
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: resolution
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: origin
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Pose(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _MapMetaData__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__msg__MapMetaData(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MapMetaData = {
  "nav_msgs::msg",
  "MapMetaData",
  _MapMetaData__cdr_serialize,
  _MapMetaData__cdr_deserialize,
  _MapMetaData__get_serialized_size,
  get_serialized_size_nav_msgs__msg__MapMetaData,
  _MapMetaData__max_serialized_size
};

static rosidl_message_type_support_t _MapMetaData__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MapMetaData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, MapMetaData)() {
  return &_MapMetaData__type_support;
}

#if defined(__cplusplus)
}
#endif
