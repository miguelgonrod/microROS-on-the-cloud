// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/nav_sat_fix__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

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

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::NavSatStatus &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::NavSatStatus &);

size_t get_serialized_size(
  const sensor_msgs::msg::NavSatStatus &,
  size_t current_alignment);

size_t
max_serialized_size_NavSatStatus(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::NavSatFix & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: status
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  // Member: latitude
  rv = ucdr_serialize_double(cdr, ros_message.latitude);
  // Member: longitude
  rv = ucdr_serialize_double(cdr, ros_message.longitude);
  // Member: altitude
  rv = ucdr_serialize_double(cdr, ros_message.altitude);
  // Member: position_covariance
  {
    size_t size = ros_message.position_covariance.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.position_covariance.data(), size);
  }
  // Member: position_covariance_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.position_covariance_type);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::NavSatFix & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: status
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.status);
  // Member: latitude
  rv = ucdr_deserialize_double(cdr, &ros_message.latitude);
  // Member: longitude
  rv = ucdr_deserialize_double(cdr, &ros_message.longitude);
  // Member: altitude
  rv = ucdr_deserialize_double(cdr, &ros_message.altitude);
  // Member: position_covariance
  {
    const size_t size = ros_message.position_covariance.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.position_covariance.data(), size);
  }
  // Member: position_covariance_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.position_covariance_type);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::NavSatFix & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: status
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.status,
    current_alignment);
  // Member: latitude
  {
    const size_t item_size = sizeof(ros_message.latitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: longitude
  {
    const size_t item_size = sizeof(ros_message.longitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: altitude
  {
    const size_t item_size = sizeof(ros_message.altitude);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: position_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.position_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: position_covariance_type
  {
    const size_t item_size = sizeof(ros_message.position_covariance_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_NavSatFix(
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
  // Member: status
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_NavSatStatus(
    full_bounded,
    current_alignment);
  // Member: latitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: longitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: altitude
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: position_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: position_covariance_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _NavSatFix__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatFix *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavSatFix__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::NavSatFix *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavSatFix__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatFix *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavSatFix__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatFix *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NavSatFix__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NavSatFix(&full_bounded, 0);
}

static message_type_support_callbacks_t _NavSatFix__callbacks = {
  "sensor_msgs::msg",
  "NavSatFix",
  _NavSatFix__cdr_serialize,
  _NavSatFix__cdr_deserialize,
  _NavSatFix__get_serialized_size,
  _NavSatFix__get_serialized_size_with_initial_alignment,
  _NavSatFix__max_serialized_size
};

static rosidl_message_type_support_t _NavSatFix__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NavSatFix__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::NavSatFix>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_NavSatFix__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, NavSatFix)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_NavSatFix__handle;
}

#ifdef __cplusplus
}
#endif
