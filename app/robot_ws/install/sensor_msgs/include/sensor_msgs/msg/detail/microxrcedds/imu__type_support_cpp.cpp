// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/imu__struct.hpp"

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
  const geometry_msgs::msg::Quaternion &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Quaternion &);

size_t get_serialized_size(
  const geometry_msgs::msg::Quaternion &,
  size_t current_alignment);

size_t
max_serialized_size_Quaternion(
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


namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::Imu & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: orientation
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  // Member: orientation_covariance
  {
    size_t size = ros_message.orientation_covariance.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.orientation_covariance.data(), size);
  }
  // Member: angular_velocity
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.angular_velocity,
    cdr);
  // Member: angular_velocity_covariance
  {
    size_t size = ros_message.angular_velocity_covariance.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.angular_velocity_covariance.data(), size);
  }
  // Member: linear_acceleration
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.linear_acceleration,
    cdr);
  // Member: linear_acceleration_covariance
  {
    size_t size = ros_message.linear_acceleration_covariance.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.linear_acceleration_covariance.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::Imu & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: orientation
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.orientation);
  // Member: orientation_covariance
  {
    const size_t size = ros_message.orientation_covariance.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.orientation_covariance.data(), size);
  }
  // Member: angular_velocity
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.angular_velocity);
  // Member: angular_velocity_covariance
  {
    const size_t size = ros_message.angular_velocity_covariance.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.angular_velocity_covariance.data(), size);
  }
  // Member: linear_acceleration
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.linear_acceleration);
  // Member: linear_acceleration_covariance
  {
    const size_t size = ros_message.linear_acceleration_covariance.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.linear_acceleration_covariance.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::Imu & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: orientation
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.orientation,
    current_alignment);
  // Member: orientation_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.orientation_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: angular_velocity
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.angular_velocity,
    current_alignment);
  // Member: angular_velocity_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.angular_velocity_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: linear_acceleration
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.linear_acceleration,
    current_alignment);
  // Member: linear_acceleration_covariance
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message.linear_acceleration_covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_Imu(
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
  // Member: orientation
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Quaternion(
    full_bounded,
    current_alignment);
  // Member: orientation_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: angular_velocity
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Vector3(
    full_bounded,
    current_alignment);
  // Member: angular_velocity_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: linear_acceleration
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Vector3(
    full_bounded,
    current_alignment);
  // Member: linear_acceleration_covariance
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static bool _Imu__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Imu *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Imu__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::Imu *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Imu__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Imu *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Imu__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::Imu *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Imu__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Imu(&full_bounded, 0);
}

static message_type_support_callbacks_t _Imu__callbacks = {
  "sensor_msgs::msg",
  "Imu",
  _Imu__cdr_serialize,
  _Imu__cdr_deserialize,
  _Imu__get_serialized_size,
  _Imu__get_serialized_size_with_initial_alignment,
  _Imu__max_serialized_size
};

static rosidl_message_type_support_t _Imu__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Imu__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::Imu>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Imu__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, Imu)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_Imu__handle;
}

#ifdef __cplusplus
}
#endif
