// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "shape_msgs/msg/detail/mesh__struct.h"
#include "shape_msgs/msg/detail/mesh__functions.h"

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

#include "geometry_msgs/msg/detail/point__functions.h"  // vertices
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"  // triangles

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_shape_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point)();
size_t get_serialized_size_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shape_msgs__msg__MeshTriangle(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, MeshTriangle)();


typedef shape_msgs__msg__Mesh _Mesh__ros_msg_type;

static bool _Mesh__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Mesh__ros_msg_type * ros_message = (_Mesh__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: triangles
  {
    const size_t size = ros_message->triangles.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, MeshTriangle
          )()->data))->cdr_serialize(&ros_message->triangles.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: vertices
  {
    const size_t size = ros_message->vertices.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
          )()->data))->cdr_serialize(&ros_message->vertices.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _Mesh__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Mesh__ros_msg_type * ros_message = (_Mesh__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: triangles
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->triangles.capacity){
      return 0;
    }

    ros_message->triangles.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, MeshTriangle
        )()->data))->cdr_deserialize(cdr, &ros_message->triangles.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: vertices
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->vertices.capacity){
      return 0;
    }

    ros_message->vertices.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
        )()->data))->cdr_deserialize(cdr, &ros_message->vertices.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__Mesh(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Mesh__ros_msg_type * ros_message = (const _Mesh__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: triangles
  {
    const size_t sequence_size = ros_message->triangles.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, MeshTriangle
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->triangles.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: vertices
  {
    const size_t sequence_size = ros_message->vertices.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->vertices.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mesh__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_shape_msgs__msg__Mesh(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__Mesh(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: triangles
  {
    *full_bounded = false;
  }
  // Member: vertices
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Mesh__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_shape_msgs__msg__Mesh(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Mesh = {
  "shape_msgs::msg",
  "Mesh",
  _Mesh__cdr_serialize,
  _Mesh__cdr_deserialize,
  _Mesh__get_serialized_size,
  get_serialized_size_shape_msgs__msg__Mesh,
  _Mesh__max_serialized_size
};

static rosidl_message_type_support_t _Mesh__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Mesh,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, Mesh)() {
  return &_Mesh__type_support;
}

#if defined(__cplusplus)
}
#endif
