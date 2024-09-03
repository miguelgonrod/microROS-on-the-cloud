// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

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

namespace trajectory_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const trajectory_msgs::msg::JointTrajectoryPoint &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  trajectory_msgs::msg::JointTrajectoryPoint &);

size_t get_serialized_size(
  const trajectory_msgs::msg::JointTrajectoryPoint &,
  size_t current_alignment);

size_t
max_serialized_size_JointTrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace trajectory_msgs


namespace trajectory_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_serialize(
  const trajectory_msgs::msg::JointTrajectory & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: joint_names
  {
    size_t size = ros_message.joint_names.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.joint_names[i].c_str());
    }
  }
  // Member: points
  {
    size_t size = ros_message.points.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = trajectory_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  trajectory_msgs::msg::JointTrajectory & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: joint_names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.joint_names.capacity()) {
      ros_message.joint_names.resize(size);
    } else {
      ros_message.joint_names.resize(ros_message.joint_names.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.joint_names[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.joint_names[i] = std::move(stemp);
      }
      free(temp);
    }
  }
  // Member: points
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.points.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = trajectory_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.points[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
get_serialized_size(
  const trajectory_msgs::msg::JointTrajectory & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: joint_names
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.joint_names.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.joint_names[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: points
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.points.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = trajectory_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.points[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
max_serialized_size_JointTrajectory(
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
  // Member: joint_names
  {
    *full_bounded = false;
  }
  // Member: points
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _JointTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectory *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointTrajectory__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<trajectory_msgs::msg::JointTrajectory *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointTrajectory__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectory *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointTrajectory__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectory *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _JointTrajectory__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_JointTrajectory(&full_bounded, 0);
}

static message_type_support_callbacks_t _JointTrajectory__callbacks = {
  "trajectory_msgs::msg",
  "JointTrajectory",
  _JointTrajectory__cdr_serialize,
  _JointTrajectory__cdr_deserialize,
  _JointTrajectory__get_serialized_size,
  _JointTrajectory__get_serialized_size_with_initial_alignment,
  _JointTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectory__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_JointTrajectory__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace trajectory_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>()
{
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_JointTrajectory__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, trajectory_msgs, msg, JointTrajectory)() {
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_JointTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
