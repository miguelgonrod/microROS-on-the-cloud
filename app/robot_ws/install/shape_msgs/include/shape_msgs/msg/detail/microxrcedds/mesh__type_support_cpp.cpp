// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "shape_msgs/msg/detail/mesh__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace shape_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const shape_msgs::msg::MeshTriangle &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  shape_msgs::msg::MeshTriangle &);

size_t get_serialized_size(
  const shape_msgs::msg::MeshTriangle &,
  size_t current_alignment);

size_t
max_serialized_size_MeshTriangle(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace shape_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Point &);

size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);

size_t
max_serialized_size_Point(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace shape_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_serialize(
  const shape_msgs::msg::Mesh & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: triangles
  {
    size_t size = ros_message.triangles.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = shape_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.triangles[i],
        cdr);
      i++;
    }
  }
  // Member: vertices
  {
    size_t size = ros_message.vertices.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.vertices[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  shape_msgs::msg::Mesh & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: triangles
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.triangles.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = shape_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.triangles[i]);
      i++;
    }
  }
  // Member: vertices
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.vertices.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.vertices[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
get_serialized_size(
  const shape_msgs::msg::Mesh & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: triangles
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.triangles.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = shape_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.triangles[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: vertices
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.vertices.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.vertices[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
max_serialized_size_Mesh(
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

static bool _Mesh__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Mesh *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mesh__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<shape_msgs::msg::Mesh *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mesh__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Mesh *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mesh__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Mesh *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Mesh__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Mesh(&full_bounded, 0);
}

static message_type_support_callbacks_t _Mesh__callbacks = {
  "shape_msgs::msg",
  "Mesh",
  _Mesh__cdr_serialize,
  _Mesh__cdr_deserialize,
  _Mesh__get_serialized_size,
  _Mesh__get_serialized_size_with_initial_alignment,
  _Mesh__max_serialized_size
};

static rosidl_message_type_support_t _Mesh__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Mesh__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace shape_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_shape_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::Mesh>()
{
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_Mesh__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, shape_msgs, msg, Mesh)() {
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_Mesh__handle;
}

#ifdef __cplusplus
}
#endif
