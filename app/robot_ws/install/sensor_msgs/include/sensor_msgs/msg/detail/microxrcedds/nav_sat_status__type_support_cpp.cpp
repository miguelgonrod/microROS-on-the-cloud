// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/NavSatStatus.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/nav_sat_status__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/nav_sat_status__struct.hpp"

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

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::NavSatStatus & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);
  // Member: service
  rv = ucdr_serialize_uint16_t(cdr, ros_message.service);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::NavSatStatus & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);
  // Member: service
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.service);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::NavSatStatus & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: service
  {
    const size_t item_size = sizeof(ros_message.service);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_NavSatStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: service
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static bool _NavSatStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavSatStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::NavSatStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavSatStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavSatStatus__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::NavSatStatus *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NavSatStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NavSatStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t _NavSatStatus__callbacks = {
  "sensor_msgs::msg",
  "NavSatStatus",
  _NavSatStatus__cdr_serialize,
  _NavSatStatus__cdr_deserialize,
  _NavSatStatus__get_serialized_size,
  _NavSatStatus__get_serialized_size_with_initial_alignment,
  _NavSatStatus__max_serialized_size
};

static rosidl_message_type_support_t _NavSatStatus__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NavSatStatus__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::NavSatStatus>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_NavSatStatus__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, NavSatStatus)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_NavSatStatus__handle;
}

#ifdef __cplusplus
}
#endif
