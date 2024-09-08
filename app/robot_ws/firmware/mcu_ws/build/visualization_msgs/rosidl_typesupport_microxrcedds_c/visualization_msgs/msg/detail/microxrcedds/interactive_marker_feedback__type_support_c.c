// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_feedback__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/interactive_marker_feedback__struct.h"
#include "visualization_msgs/msg/detail/interactive_marker_feedback__functions.h"

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

#include "geometry_msgs/msg/detail/point__functions.h"  // mouse_point
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "rosidl_runtime_c/string.h"  // client_id, control_name, marker_name
#include "rosidl_runtime_c/string_functions.h"  // client_id, control_name, marker_name
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef visualization_msgs__msg__InteractiveMarkerFeedback _InteractiveMarkerFeedback__ros_msg_type;

static bool _InteractiveMarkerFeedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _InteractiveMarkerFeedback__ros_msg_type * ros_message = (_InteractiveMarkerFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: client_id
 {
    uint32_t string_len = (ros_message->client_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->client_id.data) + 1;
    ros_message->client_id.size = (ros_message->client_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->client_id.data, string_len);
  }
  // Member: marker_name
 {
    uint32_t string_len = (ros_message->marker_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->marker_name.data) + 1;
    ros_message->marker_name.size = (ros_message->marker_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->marker_name.data, string_len);
  }
  // Member: control_name
 {
    uint32_t string_len = (ros_message->control_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->control_name.data) + 1;
    ros_message->control_name.size = (ros_message->control_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->control_name.data, string_len);
  }
  // Member: event_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->event_type);
  // Member: pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_serialize(&ros_message->pose, cdr);
  // Member: menu_entry_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message->menu_entry_id);
  // Member: mouse_point
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_serialize(&ros_message->mouse_point, cdr);
  // Member: mouse_point_valid
  rv = ucdr_serialize_bool(cdr, (ros_message->mouse_point_valid) ? 0x01 : 0x00);

  return rv;
}

static bool _InteractiveMarkerFeedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _InteractiveMarkerFeedback__ros_msg_type * ros_message = (_InteractiveMarkerFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: client_id
  {
    size_t capacity = ros_message->client_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->client_id.data, capacity, &string_size);
    if (rv) {
      ros_message->client_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->client_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: marker_name
  {
    size_t capacity = ros_message->marker_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->marker_name.data, capacity, &string_size);
    if (rv) {
      ros_message->marker_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->marker_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: control_name
  {
    size_t capacity = ros_message->control_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->control_name.data, capacity, &string_size);
    if (rv) {
      ros_message->control_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->control_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: event_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->event_type);
  // Field name: pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_deserialize(cdr, &ros_message->pose);
  // Field name: menu_entry_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->menu_entry_id);
  // Field name: mouse_point
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_deserialize(cdr, &ros_message->mouse_point);
  // Field name: mouse_point_valid
  rv = ucdr_deserialize_bool(cdr, &ros_message->mouse_point_valid);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarkerFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _InteractiveMarkerFeedback__ros_msg_type * ros_message = (const _InteractiveMarkerFeedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: client_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->client_id.size + 1;
  // Member: marker_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->marker_name.size + 1;
  // Member: control_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->control_name.size + 1;
  // Member: event_type
  {
    const size_t item_size = sizeof(ros_message->event_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: pose
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Pose(&ros_message->pose, current_alignment);
  // Member: menu_entry_id
  {
    const size_t item_size = sizeof(ros_message->menu_entry_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: mouse_point
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Point(&ros_message->mouse_point, current_alignment);
  // Member: mouse_point_valid
  {
    const size_t item_size = sizeof(ros_message->mouse_point_valid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InteractiveMarkerFeedback__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__InteractiveMarkerFeedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__InteractiveMarkerFeedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: client_id
  *full_bounded = false;
  // Member: marker_name
  *full_bounded = false;
  // Member: control_name
  *full_bounded = false;
  // Member: event_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: pose
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Pose(full_bounded, current_alignment);
  // Member: menu_entry_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: mouse_point
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Point(full_bounded, current_alignment);
  // Member: mouse_point_valid
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _InteractiveMarkerFeedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__InteractiveMarkerFeedback(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_InteractiveMarkerFeedback = {
  "visualization_msgs::msg",
  "InteractiveMarkerFeedback",
  _InteractiveMarkerFeedback__cdr_serialize,
  _InteractiveMarkerFeedback__cdr_deserialize,
  _InteractiveMarkerFeedback__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__InteractiveMarkerFeedback,
  _InteractiveMarkerFeedback__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerFeedback__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_InteractiveMarkerFeedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerFeedback)() {
  return &_InteractiveMarkerFeedback__type_support;
}

#if defined(__cplusplus)
}
#endif
