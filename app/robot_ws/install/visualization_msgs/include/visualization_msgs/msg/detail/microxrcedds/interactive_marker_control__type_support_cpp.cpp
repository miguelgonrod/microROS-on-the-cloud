// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_control__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/interactive_marker_control__struct.hpp"

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

namespace visualization_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const visualization_msgs::msg::Marker &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  visualization_msgs::msg::Marker &);

size_t get_serialized_size(
  const visualization_msgs::msg::Marker &,
  size_t current_alignment);

size_t
max_serialized_size_Marker(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace visualization_msgs


namespace visualization_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_serialize(
  const visualization_msgs::msg::InteractiveMarkerControl & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: orientation
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  // Member: orientation_mode
  rv = ucdr_serialize_uint8_t(cdr, ros_message.orientation_mode);
  // Member: interaction_mode
  rv = ucdr_serialize_uint8_t(cdr, ros_message.interaction_mode);
  // Member: always_visible
  rv = ucdr_serialize_bool(cdr, ros_message.always_visible);
  // Member: markers
  {
    size_t size = ros_message.markers.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.markers[i],
        cdr);
      i++;
    }
  }
  // Member: independent_marker_orientation
  rv = ucdr_serialize_bool(cdr, ros_message.independent_marker_orientation);
  // Member: description
  rv = ucdr_serialize_string(cdr, ros_message.description.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::InteractiveMarkerControl & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: orientation
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.orientation);
  // Member: orientation_mode
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.orientation_mode);
  // Member: interaction_mode
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.interaction_mode);
  // Member: always_visible
  rv = ucdr_deserialize_bool(cdr, &ros_message.always_visible);
  // Member: markers
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.markers.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.markers[i]);
      i++;
    }
  }
  // Member: independent_marker_orientation
  rv = ucdr_deserialize_bool(cdr, &ros_message.independent_marker_orientation);
  // Member: description
  ros_message.description.resize(ros_message.description.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.description[0], ros_message.description.capacity());
  if (rv) {
    ros_message.description.resize(std::strlen(&ros_message.description[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::InteractiveMarkerControl & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: orientation
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.orientation,
    current_alignment);
  // Member: orientation_mode
  {
    const size_t item_size = sizeof(ros_message.orientation_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: interaction_mode
  {
    const size_t item_size = sizeof(ros_message.interaction_mode);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: always_visible
  {
    const size_t item_size = sizeof(ros_message.always_visible);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: markers
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.markers.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = visualization_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.markers[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: independent_marker_orientation
  {
    const size_t item_size = sizeof(ros_message.independent_marker_orientation);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: description
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.description.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_InteractiveMarkerControl(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: orientation
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Quaternion(
    full_bounded,
    current_alignment);
  // Member: orientation_mode
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: interaction_mode
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: always_visible
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: markers
  {
    *full_bounded = false;
  }
  // Member: independent_marker_orientation
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: description
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _InteractiveMarkerControl__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InteractiveMarkerControl__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::InteractiveMarkerControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InteractiveMarkerControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InteractiveMarkerControl__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarkerControl *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _InteractiveMarkerControl__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_InteractiveMarkerControl(&full_bounded, 0);
}

static message_type_support_callbacks_t _InteractiveMarkerControl__callbacks = {
  "visualization_msgs::msg",
  "InteractiveMarkerControl",
  _InteractiveMarkerControl__cdr_serialize,
  _InteractiveMarkerControl__cdr_deserialize,
  _InteractiveMarkerControl__get_serialized_size,
  _InteractiveMarkerControl__get_serialized_size_with_initial_alignment,
  _InteractiveMarkerControl__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerControl__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_InteractiveMarkerControl__callbacks,
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
get_message_type_support_handle<visualization_msgs::msg::InteractiveMarkerControl>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarkerControl__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, InteractiveMarkerControl)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarkerControl__handle;
}

#ifdef __cplusplus
}
#endif
