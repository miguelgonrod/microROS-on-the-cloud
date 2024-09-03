// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

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
  const sensor_msgs::msg::PointField &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::PointField &);

size_t get_serialized_size(
  const sensor_msgs::msg::PointField &,
  size_t current_alignment);

size_t
max_serialized_size_PointField(
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
  const sensor_msgs::msg::PointCloud2 & ros_message,
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
  // Member: fields
  {
    size_t size = ros_message.fields.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.fields[i],
        cdr);
      i++;
    }
  }
  // Member: is_bigendian
  rv = ucdr_serialize_bool(cdr, ros_message.is_bigendian);
  // Member: point_step
  rv = ucdr_serialize_uint32_t(cdr, ros_message.point_step);
  // Member: row_step
  rv = ucdr_serialize_uint32_t(cdr, ros_message.row_step);
  // Member: data
  {
    size_t size = ros_message.data.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.data[0], size);
  }
  // Member: is_dense
  rv = ucdr_serialize_bool(cdr, ros_message.is_dense);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::PointCloud2 & ros_message)
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
  // Member: fields
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.fields.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.fields[i]);
      i++;
    }
  }
  // Member: is_bigendian
  rv = ucdr_deserialize_bool(cdr, &ros_message.is_bigendian);
  // Member: point_step
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.point_step);
  // Member: row_step
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.row_step);
  // Member: data
  {
    uint32_t size;
    const size_t capacity = ros_message.data.capacity();
    ros_message.data.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.data[0], capacity, &size);
    if (rv) {
      ros_message.data.resize(size);
    }
  }
  // Member: is_dense
  rv = ucdr_deserialize_bool(cdr, &ros_message.is_dense);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::PointCloud2 & ros_message,
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
  // Member: fields
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.fields.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.fields[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: is_bigendian
  {
    const size_t item_size = sizeof(ros_message.is_bigendian);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: point_step
  {
    const size_t item_size = sizeof(ros_message.point_step);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: row_step
  {
    const size_t item_size = sizeof(ros_message.row_step);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.data.size();
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: is_dense
  {
    const size_t item_size = sizeof(ros_message.is_dense);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_PointCloud2(
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
  // Member: fields
  {
    *full_bounded = false;
  }
  // Member: is_bigendian
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: point_step
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: row_step
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: data
  {
    *full_bounded = false;
  }
  // Member: is_dense
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _PointCloud2__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointCloud2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PointCloud2__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::PointCloud2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PointCloud2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointCloud2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PointCloud2__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::PointCloud2 *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _PointCloud2__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_PointCloud2(&full_bounded, 0);
}

static message_type_support_callbacks_t _PointCloud2__callbacks = {
  "sensor_msgs::msg",
  "PointCloud2",
  _PointCloud2__cdr_serialize,
  _PointCloud2__cdr_deserialize,
  _PointCloud2__get_serialized_size,
  _PointCloud2__get_serialized_size_with_initial_alignment,
  _PointCloud2__max_serialized_size
};

static rosidl_message_type_support_t _PointCloud2__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_PointCloud2__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::PointCloud2>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_PointCloud2__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, PointCloud2)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_PointCloud2__handle;
}

#ifdef __cplusplus
}
#endif
