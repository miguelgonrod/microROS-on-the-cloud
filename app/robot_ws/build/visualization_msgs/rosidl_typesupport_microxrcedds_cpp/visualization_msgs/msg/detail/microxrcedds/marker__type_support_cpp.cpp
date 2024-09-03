// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/marker__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/marker__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Pose &);

size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);

size_t
max_serialized_size_Pose(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Vector3 &);

size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);

size_t
max_serialized_size_Vector3(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::ColorRGBA &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::ColorRGBA &);

size_t get_serialized_size(
  const std_msgs::msg::ColorRGBA &,
  size_t current_alignment);

size_t
max_serialized_size_ColorRGBA(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Duration &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);

size_t
max_serialized_size_Duration(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces

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

namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::ColorRGBA &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::ColorRGBA &);

size_t get_serialized_size(
  const std_msgs::msg::ColorRGBA &,
  size_t current_alignment);

size_t
max_serialized_size_ColorRGBA(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::CompressedImage &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::CompressedImage &);

size_t get_serialized_size(
  const sensor_msgs::msg::CompressedImage &,
  size_t current_alignment);

size_t
max_serialized_size_CompressedImage(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace visualization_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const visualization_msgs::msg::UVCoordinate &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  visualization_msgs::msg::UVCoordinate &);

size_t get_serialized_size(
  const visualization_msgs::msg::UVCoordinate &,
  size_t current_alignment);

size_t
max_serialized_size_UVCoordinate(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace visualization_msgs

namespace visualization_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const visualization_msgs::msg::MeshFile &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  visualization_msgs::msg::MeshFile &);

size_t get_serialized_size(
  const visualization_msgs::msg::MeshFile &,
  size_t current_alignment);

size_t
max_serialized_size_MeshFile(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace visualization_msgs


namespace visualization_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_serialize(
  const visualization_msgs::msg::Marker & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: ns
  rv = ucdr_serialize_string(cdr, ros_message.ns.c_str());
  // Member: id
  rv = ucdr_serialize_int32_t(cdr, ros_message.id);
  // Member: type
  rv = ucdr_serialize_int32_t(cdr, ros_message.type);
  // Member: action
  rv = ucdr_serialize_int32_t(cdr, ros_message.action);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: scale
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.scale,
    cdr);
  // Member: color
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.color,
    cdr);
  // Member: lifetime
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.lifetime,
    cdr);
  // Member: frame_locked
  rv = ucdr_serialize_bool(cdr, ros_message.frame_locked);
  // Member: points
  {
    size_t size = ros_message.points.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
      i++;
    }
  }
  // Member: colors
  {
    size_t size = ros_message.colors.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.colors[i],
        cdr);
      i++;
    }
  }
  // Member: texture_resource
  rv = ucdr_serialize_string(cdr, ros_message.texture_resource.c_str());
  // Member: texture
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.texture,
    cdr);
  // Member: uv_coordinates
  {
    size_t size = ros_message.uv_coordinates.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.uv_coordinates[i],
        cdr);
      i++;
    }
  }
  // Member: text
  rv = ucdr_serialize_string(cdr, ros_message.text.c_str());
  // Member: mesh_resource
  rv = ucdr_serialize_string(cdr, ros_message.mesh_resource.c_str());
  // Member: mesh_file
  rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.mesh_file,
    cdr);
  // Member: mesh_use_embedded_materials
  rv = ucdr_serialize_bool(cdr, ros_message.mesh_use_embedded_materials);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::Marker & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: ns
  ros_message.ns.resize(ros_message.ns.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.ns[0], ros_message.ns.capacity());
  if (rv) {
    ros_message.ns.resize(std::strlen(&ros_message.ns[0]));
  }
  // Member: id
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.id);
  // Member: type
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.type);
  // Member: action
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.action);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.pose);
  // Member: scale
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.scale);
  // Member: color
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.color);
  // Member: lifetime
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.lifetime);
  // Member: frame_locked
  rv = ucdr_deserialize_bool(cdr, &ros_message.frame_locked);
  // Member: points
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.points.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.points[i]);
      i++;
    }
  }
  // Member: colors
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.colors.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.colors[i]);
      i++;
    }
  }
  // Member: texture_resource
  ros_message.texture_resource.resize(ros_message.texture_resource.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.texture_resource[0], ros_message.texture_resource.capacity());
  if (rv) {
    ros_message.texture_resource.resize(std::strlen(&ros_message.texture_resource[0]));
  }
  // Member: texture
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.texture);
  // Member: uv_coordinates
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.uv_coordinates.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.uv_coordinates[i]);
      i++;
    }
  }
  // Member: text
  ros_message.text.resize(ros_message.text.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.text[0], ros_message.text.capacity());
  if (rv) {
    ros_message.text.resize(std::strlen(&ros_message.text[0]));
  }
  // Member: mesh_resource
  ros_message.mesh_resource.resize(ros_message.mesh_resource.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.mesh_resource[0], ros_message.mesh_resource.capacity());
  if (rv) {
    ros_message.mesh_resource.resize(std::strlen(&ros_message.mesh_resource[0]));
  }
  // Member: mesh_file
  rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.mesh_file);
  // Member: mesh_use_embedded_materials
  rv = ucdr_deserialize_bool(cdr, &ros_message.mesh_use_embedded_materials);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::Marker & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: ns
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.ns.size() + 1;
  // Member: id
  {
    const size_t item_size = sizeof(ros_message.id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: action
  {
    const size_t item_size = sizeof(ros_message.action);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.pose,
    current_alignment);
  // Member: scale
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.scale,
    current_alignment);
  // Member: color
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.color,
    current_alignment);
  // Member: lifetime
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.lifetime,
    current_alignment);
  // Member: frame_locked
  {
    const size_t item_size = sizeof(ros_message.frame_locked);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: points
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.points.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.points[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: colors
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.colors.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.colors[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: texture_resource
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.texture_resource.size() + 1;
  // Member: texture
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.texture,
    current_alignment);
  // Member: uv_coordinates
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.uv_coordinates.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = visualization_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.uv_coordinates[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: text
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.text.size() + 1;
  // Member: mesh_resource
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.mesh_resource.size() + 1;
  // Member: mesh_file
  current_alignment += visualization_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.mesh_file,
    current_alignment);
  // Member: mesh_use_embedded_materials
  {
    const size_t item_size = sizeof(ros_message.mesh_use_embedded_materials);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_Marker(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: ns
  *full_bounded = false;
  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: action
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Pose(
    full_bounded,
    current_alignment);
  // Member: scale
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Vector3(
    full_bounded,
    current_alignment);
  // Member: color
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_ColorRGBA(
    full_bounded,
    current_alignment);
  // Member: lifetime
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Duration(
    full_bounded,
    current_alignment);
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
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_CompressedImage(
    full_bounded,
    current_alignment);
  // Member: uv_coordinates
  {
    *full_bounded = false;
  }
  // Member: text
  *full_bounded = false;
  // Member: mesh_resource
  *full_bounded = false;
  // Member: mesh_file
  current_alignment += visualization_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_MeshFile(
    full_bounded,
    current_alignment);
  // Member: mesh_use_embedded_materials
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _Marker__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::Marker *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Marker__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::Marker *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Marker__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::Marker *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Marker__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::Marker *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Marker__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Marker(&full_bounded, 0);
}

static message_type_support_callbacks_t _Marker__callbacks = {
  "visualization_msgs::msg",
  "Marker",
  _Marker__cdr_serialize,
  _Marker__cdr_deserialize,
  _Marker__get_serialized_size,
  _Marker__get_serialized_size_with_initial_alignment,
  _Marker__max_serialized_size
};

static rosidl_message_type_support_t _Marker__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Marker__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace visualization_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<visualization_msgs::msg::Marker>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_Marker__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, Marker)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_Marker__handle;
}

#ifdef __cplusplus
}
#endif
