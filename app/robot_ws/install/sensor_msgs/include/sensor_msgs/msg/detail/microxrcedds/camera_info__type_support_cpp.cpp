// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"

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
  const sensor_msgs::msg::RegionOfInterest &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::RegionOfInterest &);

size_t get_serialized_size(
  const sensor_msgs::msg::RegionOfInterest &,
  size_t current_alignment);

size_t
max_serialized_size_RegionOfInterest(
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
  const sensor_msgs::msg::CameraInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: height
  rv = ucdr_serialize_uint32_t(cdr, ros_message.height);
  // Member: width
  rv = ucdr_serialize_uint32_t(cdr, ros_message.width);
  // Member: distortion_model
  rv = ucdr_serialize_string(cdr, ros_message.distortion_model.c_str());
  // Member: d
  {
    size_t size = ros_message.d.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.d[0], size);
  }
  // Member: k
  {
    size_t size = ros_message.k.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.k.data(), size);
  }
  // Member: r
  {
    size_t size = ros_message.r.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.r.data(), size);
  }
  // Member: p
  {
    size_t size = ros_message.p.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.p.data(), size);
  }
  // Member: binning_x
  rv = ucdr_serialize_uint32_t(cdr, ros_message.binning_x);
  // Member: binning_y
  rv = ucdr_serialize_uint32_t(cdr, ros_message.binning_y);
  // Member: roi
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.roi,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::CameraInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: height
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.height);
  // Member: width
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.width);
  // Member: distortion_model
  ros_message.distortion_model.resize(ros_message.distortion_model.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.distortion_model[0], ros_message.distortion_model.capacity());
  if (rv) {
    ros_message.distortion_model.resize(std::strlen(&ros_message.distortion_model[0]));
  }
  // Member: d
  {
    uint32_t size;
    const size_t capacity = ros_message.d.capacity();
    ros_message.d.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.d[0], capacity, &size);
    if (rv) {
      ros_message.d.resize(size);
    }
  }
  // Member: k
  {
    const size_t size = ros_message.k.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.k.data(), size);
  }
  // Member: r
  {
    const size_t size = ros_message.r.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.r.data(), size);
  }
  // Member: p
  {
    const size_t size = ros_message.p.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.p.data(), size);
  }
  // Member: binning_x
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.binning_x);
  // Member: binning_y
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.binning_y);
  // Member: roi
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.roi);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::CameraInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: height
  {
    const size_t item_size = sizeof(ros_message.height);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message.width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: distortion_model
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.distortion_model.size() + 1;
  // Member: d
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.d.size();
    size_t item_size = sizeof(ros_message.d[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: k
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.k[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.r[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: p
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message.p[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: binning_x
  {
    const size_t item_size = sizeof(ros_message.binning_x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: binning_y
  {
    const size_t item_size = sizeof(ros_message.binning_y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: roi
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.roi,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_CameraInfo(
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
  // Member: height
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: distortion_model
  *full_bounded = false;
  // Member: d
  {
    *full_bounded = false;
  }
  // Member: k
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: r
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: p
  {
    const size_t array_size = 12;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: binning_x
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: binning_y
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: roi
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_RegionOfInterest(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _CameraInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::CameraInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::CameraInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::CameraInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::CameraInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _CameraInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_CameraInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _CameraInfo__callbacks = {
  "sensor_msgs::msg",
  "CameraInfo",
  _CameraInfo__cdr_serialize,
  _CameraInfo__cdr_deserialize,
  _CameraInfo__get_serialized_size,
  _CameraInfo__get_serialized_size_with_initial_alignment,
  _CameraInfo__max_serialized_size
};

static rosidl_message_type_support_t _CameraInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_CameraInfo__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::CameraInfo>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_CameraInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, CameraInfo)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_CameraInfo__handle;
}

#ifdef __cplusplus
}
#endif
