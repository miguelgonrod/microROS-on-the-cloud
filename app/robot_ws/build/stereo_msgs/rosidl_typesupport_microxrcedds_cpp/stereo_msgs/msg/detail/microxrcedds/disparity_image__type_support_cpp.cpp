// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice
#include "stereo_msgs/msg/detail/disparity_image__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "stereo_msgs/msg/detail/disparity_image__struct.hpp"

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
  const sensor_msgs::msg::Image &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::Image &);

size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);

size_t
max_serialized_size_Image(
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


namespace stereo_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_stereo_msgs
cdr_serialize(
  const stereo_msgs::msg::DisparityImage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: image
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.image,
    cdr);
  // Member: f
  rv = ucdr_serialize_float(cdr, ros_message.f);
  // Member: t
  rv = ucdr_serialize_float(cdr, ros_message.t);
  // Member: valid_window
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.valid_window,
    cdr);
  // Member: min_disparity
  rv = ucdr_serialize_float(cdr, ros_message.min_disparity);
  // Member: max_disparity
  rv = ucdr_serialize_float(cdr, ros_message.max_disparity);
  // Member: delta_d
  rv = ucdr_serialize_float(cdr, ros_message.delta_d);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_stereo_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  stereo_msgs::msg::DisparityImage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: image
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.image);
  // Member: f
  rv = ucdr_deserialize_float(cdr, &ros_message.f);
  // Member: t
  rv = ucdr_deserialize_float(cdr, &ros_message.t);
  // Member: valid_window
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.valid_window);
  // Member: min_disparity
  rv = ucdr_deserialize_float(cdr, &ros_message.min_disparity);
  // Member: max_disparity
  rv = ucdr_deserialize_float(cdr, &ros_message.max_disparity);
  // Member: delta_d
  rv = ucdr_deserialize_float(cdr, &ros_message.delta_d);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_stereo_msgs
get_serialized_size(
  const stereo_msgs::msg::DisparityImage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: image
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.image,
    current_alignment);
  // Member: f
  {
    const size_t item_size = sizeof(ros_message.f);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: t
  {
    const size_t item_size = sizeof(ros_message.t);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: valid_window
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.valid_window,
    current_alignment);
  // Member: min_disparity
  {
    const size_t item_size = sizeof(ros_message.min_disparity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_disparity
  {
    const size_t item_size = sizeof(ros_message.max_disparity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: delta_d
  {
    const size_t item_size = sizeof(ros_message.delta_d);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_stereo_msgs
max_serialized_size_DisparityImage(
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
  // Member: image
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Image(
    full_bounded,
    current_alignment);
  // Member: f
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: t
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: valid_window
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_RegionOfInterest(
    full_bounded,
    current_alignment);
  // Member: min_disparity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: max_disparity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: delta_d
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _DisparityImage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const stereo_msgs::msg::DisparityImage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DisparityImage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<stereo_msgs::msg::DisparityImage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DisparityImage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const stereo_msgs::msg::DisparityImage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DisparityImage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const stereo_msgs::msg::DisparityImage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _DisparityImage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_DisparityImage(&full_bounded, 0);
}

static message_type_support_callbacks_t _DisparityImage__callbacks = {
  "stereo_msgs::msg",
  "DisparityImage",
  _DisparityImage__cdr_serialize,
  _DisparityImage__cdr_deserialize,
  _DisparityImage__get_serialized_size,
  _DisparityImage__get_serialized_size_with_initial_alignment,
  _DisparityImage__max_serialized_size
};

static rosidl_message_type_support_t _DisparityImage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_DisparityImage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace stereo_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_stereo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<stereo_msgs::msg::DisparityImage>()
{
  return &stereo_msgs::msg::typesupport_microxrcedds_cpp::_DisparityImage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, stereo_msgs, msg, DisparityImage)() {
  return &stereo_msgs::msg::typesupport_microxrcedds_cpp::_DisparityImage__handle;
}

#ifdef __cplusplus
}
#endif
