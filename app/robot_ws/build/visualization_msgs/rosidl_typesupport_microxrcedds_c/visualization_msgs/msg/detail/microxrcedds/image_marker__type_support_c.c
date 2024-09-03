// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/ImageMarker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/image_marker__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/image_marker__struct.h"
#include "visualization_msgs/msg/detail/image_marker__functions.h"

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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // lifetime
#include "geometry_msgs/msg/detail/point__functions.h"  // points, position
#include "rosidl_runtime_c/string.h"  // ns
#include "rosidl_runtime_c/string_functions.h"  // ns
#include "std_msgs/msg/detail/color_rgba__functions.h"  // fill_color, outline_color, outline_colors
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration)();
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
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA)();
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


typedef visualization_msgs__msg__ImageMarker _ImageMarker__ros_msg_type;

static bool _ImageMarker__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ImageMarker__ros_msg_type * ros_message = (_ImageMarker__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: ns
 {
    uint32_t string_len = (ros_message->ns.data == NULL) ? 0 : (uint32_t)strlen(ros_message->ns.data) + 1;
    ros_message->ns.size = (ros_message->ns.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->ns.data, string_len);
  }
  // Member: id
  rv = ucdr_serialize_int32_t(cdr, ros_message->id);
  // Member: type
  rv = ucdr_serialize_int32_t(cdr, ros_message->type);
  // Member: action
  rv = ucdr_serialize_int32_t(cdr, ros_message->action);
  // Member: position
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_serialize(&ros_message->position, cdr);
  // Member: scale
  rv = ucdr_serialize_float(cdr, ros_message->scale);
  // Member: outline_color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_serialize(&ros_message->outline_color, cdr);
  // Member: filled
  rv = ucdr_serialize_uint8_t(cdr, ros_message->filled);
  // Member: fill_color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_serialize(&ros_message->fill_color, cdr);
  // Member: lifetime
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_serialize(&ros_message->lifetime, cdr);
  // Member: points
  {
    const size_t size = ros_message->points.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
          )()->data))->cdr_serialize(&ros_message->points.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: outline_colors
  {
    const size_t size = ros_message->outline_colors.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
          )()->data))->cdr_serialize(&ros_message->outline_colors.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _ImageMarker__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ImageMarker__ros_msg_type * ros_message = (_ImageMarker__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: ns
  {
    size_t capacity = ros_message->ns.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->ns.data, capacity, &string_size);
    if (rv) {
      ros_message->ns.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->ns.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: id
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->id);
  // Field name: type
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->type);
  // Field name: action
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->action);
  // Field name: position
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_deserialize(cdr, &ros_message->position);
  // Field name: scale
  rv = ucdr_deserialize_float(cdr, &ros_message->scale);
  // Field name: outline_color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_deserialize(cdr, &ros_message->outline_color);
  // Field name: filled
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->filled);
  // Field name: fill_color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_deserialize(cdr, &ros_message->fill_color);
  // Field name: lifetime
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_deserialize(cdr, &ros_message->lifetime);
  // Field name: points
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->points.capacity){
      return 0;
    }

    ros_message->points.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
        )()->data))->cdr_deserialize(cdr, &ros_message->points.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: outline_colors
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->outline_colors.capacity){
      return 0;
    }

    ros_message->outline_colors.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
        )()->data))->cdr_deserialize(cdr, &ros_message->outline_colors.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__ImageMarker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ImageMarker__ros_msg_type * ros_message = (const _ImageMarker__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: ns
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->ns.size + 1;
  // Member: id
  {
    const size_t item_size = sizeof(ros_message->id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: action
  {
    const size_t item_size = sizeof(ros_message->action);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: position
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Point(&ros_message->position, current_alignment);
  // Member: scale
  {
    const size_t item_size = sizeof(ros_message->scale);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: outline_color
  current_alignment +=
    get_serialized_size_std_msgs__msg__ColorRGBA(&ros_message->outline_color, current_alignment);
  // Member: filled
  {
    const size_t item_size = sizeof(ros_message->filled);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: fill_color
  current_alignment +=
    get_serialized_size_std_msgs__msg__ColorRGBA(&ros_message->fill_color, current_alignment);
  // Member: lifetime
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Duration(&ros_message->lifetime, current_alignment);
  // Member: points
  {
    const size_t sequence_size = ros_message->points.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->points.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: outline_colors
  {
    const size_t sequence_size = ros_message->outline_colors.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->outline_colors.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImageMarker__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__ImageMarker(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__ImageMarker(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: ns
  *full_bounded = false;
  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: action
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: position
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Point(full_bounded, current_alignment);
  // Member: scale
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: outline_color
  current_alignment +=
    max_serialized_size_std_msgs__msg__ColorRGBA(full_bounded, current_alignment);
  // Member: filled
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: fill_color
  current_alignment +=
    max_serialized_size_std_msgs__msg__ColorRGBA(full_bounded, current_alignment);
  // Member: lifetime
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Duration(full_bounded, current_alignment);
  // Member: points
  {
    *full_bounded = false;
  }
  // Member: outline_colors
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ImageMarker__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__ImageMarker(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ImageMarker = {
  "visualization_msgs::msg",
  "ImageMarker",
  _ImageMarker__cdr_serialize,
  _ImageMarker__cdr_deserialize,
  _ImageMarker__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__ImageMarker,
  _ImageMarker__max_serialized_size
};

static rosidl_message_type_support_t _ImageMarker__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ImageMarker,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, ImageMarker)() {
  return &_ImageMarker__type_support;
}

#if defined(__cplusplus)
}
#endif
