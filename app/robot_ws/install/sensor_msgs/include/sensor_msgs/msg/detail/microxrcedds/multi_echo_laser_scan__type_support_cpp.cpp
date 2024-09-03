// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__struct.hpp"

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
  const sensor_msgs::msg::LaserEcho &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::LaserEcho &);

size_t get_serialized_size(
  const sensor_msgs::msg::LaserEcho &,
  size_t current_alignment);

size_t
max_serialized_size_LaserEcho(
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
bool cdr_serialize(
  const sensor_msgs::msg::LaserEcho &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::LaserEcho &);

size_t get_serialized_size(
  const sensor_msgs::msg::LaserEcho &,
  size_t current_alignment);

size_t
max_serialized_size_LaserEcho(
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
  const sensor_msgs::msg::MultiEchoLaserScan & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: angle_min
  rv = ucdr_serialize_float(cdr, ros_message.angle_min);
  // Member: angle_max
  rv = ucdr_serialize_float(cdr, ros_message.angle_max);
  // Member: angle_increment
  rv = ucdr_serialize_float(cdr, ros_message.angle_increment);
  // Member: time_increment
  rv = ucdr_serialize_float(cdr, ros_message.time_increment);
  // Member: scan_time
  rv = ucdr_serialize_float(cdr, ros_message.scan_time);
  // Member: range_min
  rv = ucdr_serialize_float(cdr, ros_message.range_min);
  // Member: range_max
  rv = ucdr_serialize_float(cdr, ros_message.range_max);
  // Member: ranges
  {
    size_t size = ros_message.ranges.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.ranges[i],
        cdr);
      i++;
    }
  }
  // Member: intensities
  {
    size_t size = ros_message.intensities.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.intensities[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::MultiEchoLaserScan & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: angle_min
  rv = ucdr_deserialize_float(cdr, &ros_message.angle_min);
  // Member: angle_max
  rv = ucdr_deserialize_float(cdr, &ros_message.angle_max);
  // Member: angle_increment
  rv = ucdr_deserialize_float(cdr, &ros_message.angle_increment);
  // Member: time_increment
  rv = ucdr_deserialize_float(cdr, &ros_message.time_increment);
  // Member: scan_time
  rv = ucdr_deserialize_float(cdr, &ros_message.scan_time);
  // Member: range_min
  rv = ucdr_deserialize_float(cdr, &ros_message.range_min);
  // Member: range_max
  rv = ucdr_deserialize_float(cdr, &ros_message.range_max);
  // Member: ranges
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.ranges.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.ranges[i]);
      i++;
    }
  }
  // Member: intensities
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.intensities.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.intensities[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::MultiEchoLaserScan & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: angle_min
  {
    const size_t item_size = sizeof(ros_message.angle_min);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angle_max
  {
    const size_t item_size = sizeof(ros_message.angle_max);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angle_increment
  {
    const size_t item_size = sizeof(ros_message.angle_increment);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: time_increment
  {
    const size_t item_size = sizeof(ros_message.time_increment);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: scan_time
  {
    const size_t item_size = sizeof(ros_message.scan_time);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range_min
  {
    const size_t item_size = sizeof(ros_message.range_min);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: range_max
  {
    const size_t item_size = sizeof(ros_message.range_max);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: ranges
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.ranges.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.ranges[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: intensities
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.intensities.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.intensities[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_MultiEchoLaserScan(
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
  // Member: angle_min
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angle_max
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angle_increment
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: time_increment
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: scan_time
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range_min
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: range_max
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: ranges
  {
    *full_bounded = false;
  }
  // Member: intensities
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _MultiEchoLaserScan__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiEchoLaserScan *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiEchoLaserScan__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::MultiEchoLaserScan *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiEchoLaserScan__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiEchoLaserScan *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiEchoLaserScan__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiEchoLaserScan *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MultiEchoLaserScan__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MultiEchoLaserScan(&full_bounded, 0);
}

static message_type_support_callbacks_t _MultiEchoLaserScan__callbacks = {
  "sensor_msgs::msg",
  "MultiEchoLaserScan",
  _MultiEchoLaserScan__cdr_serialize,
  _MultiEchoLaserScan__cdr_deserialize,
  _MultiEchoLaserScan__get_serialized_size,
  _MultiEchoLaserScan__get_serialized_size_with_initial_alignment,
  _MultiEchoLaserScan__max_serialized_size
};

static rosidl_message_type_support_t _MultiEchoLaserScan__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MultiEchoLaserScan__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::MultiEchoLaserScan>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_MultiEchoLaserScan__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, MultiEchoLaserScan)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_MultiEchoLaserScan__handle;
}

#ifdef __cplusplus
}
#endif
