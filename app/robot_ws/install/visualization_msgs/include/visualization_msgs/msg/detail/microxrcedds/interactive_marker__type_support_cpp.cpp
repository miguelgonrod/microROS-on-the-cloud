// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"

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

namespace visualization_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const visualization_msgs::msg::MenuEntry &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  visualization_msgs::msg::MenuEntry &);

size_t get_serialized_size(
  const visualization_msgs::msg::MenuEntry &,
  size_t current_alignment);

size_t
max_serialized_size_MenuEntry(
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
bool cdr_serialize(
  const visualization_msgs::msg::InteractiveMarkerControl &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  visualization_msgs::msg::InteractiveMarkerControl &);

size_t get_serialized_size(
  const visualization_msgs::msg::InteractiveMarkerControl &,
  size_t current_alignment);

size_t
max_serialized_size_InteractiveMarkerControl(
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
  const visualization_msgs::msg::InteractiveMarker & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: description
  rv = ucdr_serialize_string(cdr, ros_message.description.c_str());
  // Member: scale
  rv = ucdr_serialize_float(cdr, ros_message.scale);
  // Member: menu_entries
  {
    size_t size = ros_message.menu_entries.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.menu_entries[i],
        cdr);
      i++;
    }
  }
  // Member: controls
  {
    size_t size = ros_message.controls.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.controls[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  visualization_msgs::msg::InteractiveMarker & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: pose
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.pose);
  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: description
  ros_message.description.resize(ros_message.description.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.description[0], ros_message.description.capacity());
  if (rv) {
    ros_message.description.resize(std::strlen(&ros_message.description[0]));
  }
  // Member: scale
  rv = ucdr_deserialize_float(cdr, &ros_message.scale);
  // Member: menu_entries
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.menu_entries.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.menu_entries[i]);
      i++;
    }
  }
  // Member: controls
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.controls.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = visualization_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.controls[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
get_serialized_size(
  const visualization_msgs::msg::InteractiveMarker & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.pose,
    current_alignment);
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: description
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.description.size() + 1;
  // Member: scale
  {
    const size_t item_size = sizeof(ros_message.scale);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: menu_entries
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.menu_entries.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = visualization_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.menu_entries[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: controls
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.controls.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = visualization_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.controls[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_visualization_msgs
max_serialized_size_InteractiveMarker(
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
  // Member: pose
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Pose(
    full_bounded,
    current_alignment);
  // Member: name
  *full_bounded = false;
  // Member: description
  *full_bounded = false;
  // Member: scale
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: menu_entries
  {
    *full_bounded = false;
  }
  // Member: controls
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _InteractiveMarker__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarker *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InteractiveMarker__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<visualization_msgs::msg::InteractiveMarker *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InteractiveMarker__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarker *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InteractiveMarker__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const visualization_msgs::msg::InteractiveMarker *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _InteractiveMarker__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_InteractiveMarker(&full_bounded, 0);
}

static message_type_support_callbacks_t _InteractiveMarker__callbacks = {
  "visualization_msgs::msg",
  "InteractiveMarker",
  _InteractiveMarker__cdr_serialize,
  _InteractiveMarker__cdr_deserialize,
  _InteractiveMarker__get_serialized_size,
  _InteractiveMarker__get_serialized_size_with_initial_alignment,
  _InteractiveMarker__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarker__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_InteractiveMarker__callbacks,
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
get_message_type_support_handle<visualization_msgs::msg::InteractiveMarker>()
{
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarker__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, visualization_msgs, msg, InteractiveMarker)() {
  return &visualization_msgs::msg::typesupport_microxrcedds_cpp::_InteractiveMarker__handle;
}

#ifdef __cplusplus
}
#endif
