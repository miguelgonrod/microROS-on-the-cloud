// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_feedback__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/interactive_marker_feedback__struct.hpp"

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


namespace visualization_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_serialize(
  const visualization_msgs::msg::InteractiveMarkerFeedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: client_id
  rv = ucdr_serialize_string(cdr, ros_message.client_id.c_str());
  // Member: marker_name
  rv = ucdr_serialize_string(cdr, ros_message.marker_name.c_str());
  // Member: control_name
  rv = ucdr_serialize_string(cdr, ros_message.control_name.c_str());
  // Member: event_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.event_type);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: menu_entry_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message.menu_entry_id);
  // Member: mouse_point
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.mouse_point,
    cdr);
  // Member: mouse_point_valid
  rv = ucdr_serialize_bool(cdr, ros_message.mouse_point_valid);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::InteractiveMarkerFeedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: client_id
  ros_message.client_id.resize(ros_message.client_id.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.client_id[0], ros_message.client_id.capacity());
  if (rv) {
    ros_message.client_id.resize(std::strlen(&ros_message.client_id[0]));
  }
  // Member: marker_name
  ros_message.marker_name.resize(ros_message.marker_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.marker_name[0], ros_message.marker_name.capacity());
  if (rv) {
    ros_message.marker_name.resize(std::strlen(&ros_message.marker_name[0]));
  }
  // Member: control_name
  ros_message.control_name.resize(ros_message.control_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.control_name[0], ros_message.control_name.capacity());
  if (rv) {
    ros_message.control_name.resize(std::strlen(&ros_message.control_name[0]));
  }
  // Member: event_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.event_type);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.pose);
  // Member: menu_entry_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.menu_entry_id);
  // Member: mouse_point
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.mouse_point);
  // Member: mouse_point_valid
  rv = ucdr_deserialize_bool(cdr, &ros_message.mouse_point_valid);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::InteractiveMarkerFeedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: client_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.client_id.size() + 1;
  // Member: marker_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.marker_name.size() + 1;
  // Member: control_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.control_name.size() + 1;
  // Member: event_type
  {
    const size_t item_size = sizeof(ros_message.event_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.pose,
    current_alignment);
  // Member: menu_entry_id
  {
    const size_t item_size = sizeof(ros_message.menu_entry_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: mouse_point
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.mouse_point,
    current_alignment);
  // Member: mouse_point_valid
  {
    const size_t item_size = sizeof(ros_message.mouse_point_valid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_InteractiveMarkerFeedback(
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
  // Member: client_id
  *full_bounded = false;
  // Member: marker_name
  *full_bounded = false;
  // Member: control_name
  *full_bounded = false;
  // Member: event_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Pose(
    full_bounded,
    current_alignment);
  // Member: menu_entry_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: mouse_point
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Point(
    full_bounded,
    current_alignment);
  // Member: mouse_point_valid
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _InteractiveMarkerFeedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerFeedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InteractiveMarkerFeedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::InteractiveMarkerFeedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InteractiveMarkerFeedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerFeedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InteractiveMarkerFeedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerFeedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _InteractiveMarkerFeedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_InteractiveMarkerFeedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _InteractiveMarkerFeedback__callbacks = {
  "visualization_msgs::msg",
  "InteractiveMarkerFeedback",
  _InteractiveMarkerFeedback__cdr_serialize,
  _InteractiveMarkerFeedback__cdr_deserialize,
  _InteractiveMarkerFeedback__get_serialized_size,
  _InteractiveMarkerFeedback__get_serialized_size_with_initial_alignment,
  _InteractiveMarkerFeedback__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerFeedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_InteractiveMarkerFeedback__callbacks,
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
get_message_type_support_handle<visualization_msgs::msg::InteractiveMarkerFeedback>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarkerFeedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, InteractiveMarkerFeedback)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarkerFeedback__handle;
}

#ifdef __cplusplus
}
#endif
