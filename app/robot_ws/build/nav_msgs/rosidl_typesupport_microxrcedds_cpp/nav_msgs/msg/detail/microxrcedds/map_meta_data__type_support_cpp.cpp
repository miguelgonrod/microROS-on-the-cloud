// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/map_meta_data__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "nav_msgs/msg/detail/map_meta_data__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
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


namespace nav_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::msg::MapMetaData & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: map_load_time
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.map_load_time,
    cdr);
  // Member: resolution
  rv = ucdr_serialize_float(cdr, ros_message.resolution);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message.width);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message.height);
  // Member: origin
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.origin,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::msg::MapMetaData & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: map_load_time
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.map_load_time);
  // Member: resolution
  rv = ucdr_deserialize_float(cdr, &ros_message.resolution);
  // Member: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.width);
  // Member: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.height);
  // Member: origin
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.origin);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::msg::MapMetaData & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map_load_time
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.map_load_time,
    current_alignment);
  // Member: resolution
  {
    const size_t item_size = sizeof(ros_message.resolution);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message.width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: height
  {
    const size_t item_size = sizeof(ros_message.height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: origin
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.origin,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_MapMetaData(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map_load_time
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: resolution
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: origin
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Pose(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _MapMetaData__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::MapMetaData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapMetaData__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::msg::MapMetaData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapMetaData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::MapMetaData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapMetaData__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::MapMetaData *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MapMetaData__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MapMetaData(&full_bounded, 0);
}

static message_type_support_callbacks_t _MapMetaData__callbacks = {
  "nav_msgs::msg",
  "MapMetaData",
  _MapMetaData__cdr_serialize,
  _MapMetaData__cdr_deserialize,
  _MapMetaData__get_serialized_size,
  _MapMetaData__get_serialized_size_with_initial_alignment,
  _MapMetaData__max_serialized_size
};

static rosidl_message_type_support_t _MapMetaData__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MapMetaData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::msg::MapMetaData>()
{
  return &nav_msgs::msg::typesupport_microxrcedds_cpp::_MapMetaData__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, msg, MapMetaData)() {
  return &nav_msgs::msg::typesupport_microxrcedds_cpp::_MapMetaData__handle;
}

#ifdef __cplusplus
}
#endif
