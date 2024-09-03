// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/inertia__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "geometry_msgs/msg/detail/inertia__struct.hpp"

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


namespace geometry_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_serialize(
  const geometry_msgs::msg::Inertia & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: m
  rv = ucdr_serialize_double(cdr, ros_message.m);
  // Member: com
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.com,
    cdr);
  // Member: ixx
  rv = ucdr_serialize_double(cdr, ros_message.ixx);
  // Member: ixy
  rv = ucdr_serialize_double(cdr, ros_message.ixy);
  // Member: ixz
  rv = ucdr_serialize_double(cdr, ros_message.ixz);
  // Member: iyy
  rv = ucdr_serialize_double(cdr, ros_message.iyy);
  // Member: iyz
  rv = ucdr_serialize_double(cdr, ros_message.iyz);
  // Member: izz
  rv = ucdr_serialize_double(cdr, ros_message.izz);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  geometry_msgs::msg::Inertia & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: m
  rv = ucdr_deserialize_double(cdr, &ros_message.m);
  // Member: com
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.com);
  // Member: ixx
  rv = ucdr_deserialize_double(cdr, &ros_message.ixx);
  // Member: ixy
  rv = ucdr_deserialize_double(cdr, &ros_message.ixy);
  // Member: ixz
  rv = ucdr_deserialize_double(cdr, &ros_message.ixz);
  // Member: iyy
  rv = ucdr_deserialize_double(cdr, &ros_message.iyy);
  // Member: iyz
  rv = ucdr_deserialize_double(cdr, &ros_message.iyz);
  // Member: izz
  rv = ucdr_deserialize_double(cdr, &ros_message.izz);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
get_serialized_size(
  const geometry_msgs::msg::Inertia & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: m
  {
    const size_t item_size = sizeof(ros_message.m);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: com
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.com,
    current_alignment);
  // Member: ixx
  {
    const size_t item_size = sizeof(ros_message.ixx);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ixy
  {
    const size_t item_size = sizeof(ros_message.ixy);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ixz
  {
    const size_t item_size = sizeof(ros_message.ixz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: iyy
  {
    const size_t item_size = sizeof(ros_message.iyy);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: iyz
  {
    const size_t item_size = sizeof(ros_message.iyz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: izz
  {
    const size_t item_size = sizeof(ros_message.izz);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
max_serialized_size_Inertia(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: m
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: com
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Vector3(
    full_bounded,
    current_alignment);
  // Member: ixx
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: ixy
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: ixz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: iyy
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: iyz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: izz
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static bool _Inertia__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Inertia__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Inertia__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Inertia__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Inertia__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Inertia(&full_bounded, 0);
}

static message_type_support_callbacks_t _Inertia__callbacks = {
  "geometry_msgs::msg",
  "Inertia",
  _Inertia__cdr_serialize,
  _Inertia__cdr_deserialize,
  _Inertia__get_serialized_size,
  _Inertia__get_serialized_size_with_initial_alignment,
  _Inertia__max_serialized_size
};

static rosidl_message_type_support_t _Inertia__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Inertia__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace geometry_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::Inertia>()
{
  return &geometry_msgs::msg::typesupport_microxrcedds_cpp::_Inertia__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, geometry_msgs, msg, Inertia)() {
  return &geometry_msgs::msg::typesupport_microxrcedds_cpp::_Inertia__handle;
}

#ifdef __cplusplus
}
#endif
