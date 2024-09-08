// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/marker__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/marker__struct.h"
#include "visualization_msgs/msg/detail/marker__functions.h"

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
#include "geometry_msgs/msg/detail/point__functions.h"  // points
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "geometry_msgs/msg/detail/vector3__functions.h"  // scale
#include "rosidl_runtime_c/string.h"  // mesh_resource, ns, text, texture_resource
#include "rosidl_runtime_c/string_functions.h"  // mesh_resource, ns, text, texture_resource
#include "sensor_msgs/msg/detail/compressed_image__functions.h"  // texture
#include "std_msgs/msg/detail/color_rgba__functions.h"  // color, colors
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "visualization_msgs/msg/detail/mesh_file__functions.h"  // mesh_file
#include "visualization_msgs/msg/detail/uv_coordinate__functions.h"  // uv_coordinates

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
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t get_serialized_size_sensor_msgs__msg__CompressedImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
size_t max_serialized_size_sensor_msgs__msg__CompressedImage(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CompressedImage)();
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
size_t get_serialized_size_visualization_msgs__msg__MeshFile(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__MeshFile(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, MeshFile)();
size_t get_serialized_size_visualization_msgs__msg__UVCoordinate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__UVCoordinate(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, UVCoordinate)();


typedef visualization_msgs__msg__Marker _Marker__ros_msg_type;

static bool _Marker__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Marker__ros_msg_type * ros_message = (_Marker__ros_msg_type *)(untyped_ros_message);
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
  // Member: pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_serialize(&ros_message->pose, cdr);
  // Member: scale
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->scale, cdr);
  // Member: color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_serialize(&ros_message->color, cdr);
  // Member: lifetime
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_serialize(&ros_message->lifetime, cdr);
  // Member: frame_locked
  rv = ucdr_serialize_bool(cdr, (ros_message->frame_locked) ? 0x01 : 0x00);
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
  // Member: colors
  {
    const size_t size = ros_message->colors.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
          )()->data))->cdr_serialize(&ros_message->colors.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: texture_resource
 {
    uint32_t string_len = (ros_message->texture_resource.data == NULL) ? 0 : (uint32_t)strlen(ros_message->texture_resource.data) + 1;
    ros_message->texture_resource.size = (ros_message->texture_resource.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->texture_resource.data, string_len);
  }
  // Member: texture
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CompressedImage
      )()->data))->cdr_serialize(&ros_message->texture, cdr);
  // Member: uv_coordinates
  {
    const size_t size = ros_message->uv_coordinates.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, UVCoordinate
          )()->data))->cdr_serialize(&ros_message->uv_coordinates.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: text
 {
    uint32_t string_len = (ros_message->text.data == NULL) ? 0 : (uint32_t)strlen(ros_message->text.data) + 1;
    ros_message->text.size = (ros_message->text.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->text.data, string_len);
  }
  // Member: mesh_resource
 {
    uint32_t string_len = (ros_message->mesh_resource.data == NULL) ? 0 : (uint32_t)strlen(ros_message->mesh_resource.data) + 1;
    ros_message->mesh_resource.size = (ros_message->mesh_resource.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->mesh_resource.data, string_len);
  }
  // Member: mesh_file
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, MeshFile
      )()->data))->cdr_serialize(&ros_message->mesh_file, cdr);
  // Member: mesh_use_embedded_materials
  rv = ucdr_serialize_bool(cdr, (ros_message->mesh_use_embedded_materials) ? 0x01 : 0x00);

  return rv;
}

static bool _Marker__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Marker__ros_msg_type * ros_message = (_Marker__ros_msg_type *)(untyped_ros_message);
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
  // Field name: pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Pose
      )()->data))->cdr_deserialize(cdr, &ros_message->pose);
  // Field name: scale
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->scale);
  // Field name: color
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
      )()->data))->cdr_deserialize(cdr, &ros_message->color);
  // Field name: lifetime
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_deserialize(cdr, &ros_message->lifetime);
  // Field name: frame_locked
  rv = ucdr_deserialize_bool(cdr, &ros_message->frame_locked);
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
  // Field name: colors
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->colors.capacity){
      return 0;
    }

    ros_message->colors.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
        )()->data))->cdr_deserialize(cdr, &ros_message->colors.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: texture_resource
  {
    size_t capacity = ros_message->texture_resource.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->texture_resource.data, capacity, &string_size);
    if (rv) {
      ros_message->texture_resource.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->texture_resource.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: texture
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CompressedImage
      )()->data))->cdr_deserialize(cdr, &ros_message->texture);
  // Field name: uv_coordinates
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->uv_coordinates.capacity){
      return 0;
    }

    ros_message->uv_coordinates.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, UVCoordinate
        )()->data))->cdr_deserialize(cdr, &ros_message->uv_coordinates.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: text
  {
    size_t capacity = ros_message->text.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->text.data, capacity, &string_size);
    if (rv) {
      ros_message->text.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->text.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: mesh_resource
  {
    size_t capacity = ros_message->mesh_resource.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->mesh_resource.data, capacity, &string_size);
    if (rv) {
      ros_message->mesh_resource.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->mesh_resource.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: mesh_file
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, MeshFile
      )()->data))->cdr_deserialize(cdr, &ros_message->mesh_file);
  // Field name: mesh_use_embedded_materials
  rv = ucdr_deserialize_bool(cdr, &ros_message->mesh_use_embedded_materials);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Marker__ros_msg_type * ros_message = (const _Marker__ros_msg_type *)(untyped_ros_message);
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
  // Member: pose
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Pose(&ros_message->pose, current_alignment);
  // Member: scale
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->scale, current_alignment);
  // Member: color
  current_alignment +=
    get_serialized_size_std_msgs__msg__ColorRGBA(&ros_message->color, current_alignment);
  // Member: lifetime
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Duration(&ros_message->lifetime, current_alignment);
  // Member: frame_locked
  {
    const size_t item_size = sizeof(ros_message->frame_locked);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
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
  // Member: colors
  {
    const size_t sequence_size = ros_message->colors.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, ColorRGBA
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->colors.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: texture_resource
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->texture_resource.size + 1;
  // Member: texture
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__CompressedImage(&ros_message->texture, current_alignment);
  // Member: uv_coordinates
  {
    const size_t sequence_size = ros_message->uv_coordinates.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, UVCoordinate
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->uv_coordinates.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: text
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->text.size + 1;
  // Member: mesh_resource
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->mesh_resource.size + 1;
  // Member: mesh_file
  current_alignment +=
    get_serialized_size_visualization_msgs__msg__MeshFile(&ros_message->mesh_file, current_alignment);
  // Member: mesh_use_embedded_materials
  {
    const size_t item_size = sizeof(ros_message->mesh_use_embedded_materials);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Marker__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__Marker(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__Marker(
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
  // Member: pose
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Pose(full_bounded, current_alignment);
  // Member: scale
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);
  // Member: color
  current_alignment +=
    max_serialized_size_std_msgs__msg__ColorRGBA(full_bounded, current_alignment);
  // Member: lifetime
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Duration(full_bounded, current_alignment);
  // Member: frame_locked
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: points
  {
    *full_bounded = false;
  }
  // Member: colors
  {
    *full_bounded = false;
  }
  // Member: texture_resource
  *full_bounded = false;
  // Member: texture
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__CompressedImage(full_bounded, current_alignment);
  // Member: uv_coordinates
  {
    *full_bounded = false;
  }
  // Member: text
  *full_bounded = false;
  // Member: mesh_resource
  *full_bounded = false;
  // Member: mesh_file
  current_alignment +=
    max_serialized_size_visualization_msgs__msg__MeshFile(full_bounded, current_alignment);
  // Member: mesh_use_embedded_materials
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _Marker__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__Marker(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Marker = {
  "visualization_msgs::msg",
  "Marker",
  _Marker__cdr_serialize,
  _Marker__cdr_deserialize,
  _Marker__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__Marker,
  _Marker__max_serialized_size
};

static rosidl_message_type_support_t _Marker__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Marker,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker)() {
  return &_Marker__type_support;
}

#if defined(__cplusplus)
}
#endif
