// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_control__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/interactive_marker_control__struct.h"
#include "visualization_msgs/msg/detail/interactive_marker_control__functions.h"

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
#include "rosidl_runtime_c/string.h"  // description, name
#include "rosidl_runtime_c/string_functions.h"  // description, name
#include "visualization_msgs/msg/detail/marker__functions.h"  // markers

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion)();
size_t get_serialized_size_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__Marker(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker)();


typedef visualization_msgs__msg__InteractiveMarkerControl _InteractiveMarkerControl__ros_msg_type;

static bool _InteractiveMarkerControl__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _InteractiveMarkerControl__ros_msg_type * ros_message = (_InteractiveMarkerControl__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_serialize(&ros_message->orientation, cdr);
  // Member: orientation_mode
  rv = ucdr_serialize_uint8_t(cdr, ros_message->orientation_mode);
  // Member: interaction_mode
  rv = ucdr_serialize_uint8_t(cdr, ros_message->interaction_mode);
  // Member: always_visible
  rv = ucdr_serialize_bool(cdr, (ros_message->always_visible) ? 0x01 : 0x00);
  // Member: markers
  {
    const size_t size = ros_message->markers.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker
          )()->data))->cdr_serialize(&ros_message->markers.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: independent_marker_orientation
  rv = ucdr_serialize_bool(cdr, (ros_message->independent_marker_orientation) ? 0x01 : 0x00);
  // Member: description
 {
    uint32_t string_len = (ros_message->description.data == NULL) ? 0 : (uint32_t)strlen(ros_message->description.data) + 1;
    ros_message->description.size = (ros_message->description.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->description.data, string_len);
  }

  return rv;
}

static bool _InteractiveMarkerControl__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _InteractiveMarkerControl__ros_msg_type * ros_message = (_InteractiveMarkerControl__ros_msg_type *)(untyped_ros_message);
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
  // Field name: orientation
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion
      )()->data))->cdr_deserialize(cdr, &ros_message->orientation);
  // Field name: orientation_mode
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->orientation_mode);
  // Field name: interaction_mode
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->interaction_mode);
  // Field name: always_visible
  rv = ucdr_deserialize_bool(cdr, &ros_message->always_visible);
  // Field name: markers
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->markers.capacity){
      return 0;
    }

    ros_message->markers.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker
        )()->data))->cdr_deserialize(cdr, &ros_message->markers.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: independent_marker_orientation
  rv = ucdr_deserialize_bool(cdr, &ros_message->independent_marker_orientation);
  // Field name: description
  {
    size_t capacity = ros_message->description.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->description.data, capacity, &string_size);
    if (rv) {
      ros_message->description.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->description.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarkerControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _InteractiveMarkerControl__ros_msg_type * ros_message = (const _InteractiveMarkerControl__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: orientation
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Quaternion(&ros_message->orientation, current_alignment);
  // Member: orientation_mode
  {
    const size_t item_size = sizeof(ros_message->orientation_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: interaction_mode
  {
    const size_t item_size = sizeof(ros_message->interaction_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: always_visible
  {
    const size_t item_size = sizeof(ros_message->always_visible);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: markers
  {
    const size_t sequence_size = ros_message->markers.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->markers.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: independent_marker_orientation
  {
    const size_t item_size = sizeof(ros_message->independent_marker_orientation);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: description
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->description.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _InteractiveMarkerControl__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__InteractiveMarkerControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__InteractiveMarkerControl(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: orientation
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Quaternion(full_bounded, current_alignment);
  // Member: orientation_mode
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: interaction_mode
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: always_visible
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: markers
  {
    *full_bounded = false;
  }
  // Member: independent_marker_orientation
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: description
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _InteractiveMarkerControl__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__InteractiveMarkerControl(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_InteractiveMarkerControl = {
  "visualization_msgs::msg",
  "InteractiveMarkerControl",
  _InteractiveMarkerControl__cdr_serialize,
  _InteractiveMarkerControl__cdr_deserialize,
  _InteractiveMarkerControl__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__InteractiveMarkerControl,
  _InteractiveMarkerControl__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerControl__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_InteractiveMarkerControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerControl)() {
  return &_InteractiveMarkerControl__type_support;
}

#if defined(__cplusplus)
}
#endif
