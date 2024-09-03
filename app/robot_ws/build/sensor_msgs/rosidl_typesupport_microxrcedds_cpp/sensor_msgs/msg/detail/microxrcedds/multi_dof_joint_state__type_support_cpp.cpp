// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/MultiDOFJointState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/multi_dof_joint_state__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/multi_dof_joint_state__struct.hpp"

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
  const geometry_msgs::msg::Transform &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Transform &);

size_t get_serialized_size(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);

size_t
max_serialized_size_Transform(
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
  const geometry_msgs::msg::Twist &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Twist &);

size_t get_serialized_size(
  const geometry_msgs::msg::Twist &,
  size_t current_alignment);

size_t
max_serialized_size_Twist(
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
  const geometry_msgs::msg::Wrench &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Wrench &);

size_t get_serialized_size(
  const geometry_msgs::msg::Wrench &,
  size_t current_alignment);

size_t
max_serialized_size_Wrench(
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
  const sensor_msgs::msg::MultiDOFJointState & ros_message,
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
  // Member: transforms
  {
    size_t size = ros_message.transforms.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.transforms[i],
        cdr);
      i++;
    }
  }
  // Member: twist
  {
    size_t size = ros_message.twist.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.twist[i],
        cdr);
      i++;
    }
  }
  // Member: wrench
  {
    size_t size = ros_message.wrench.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.wrench[i],
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
  sensor_msgs::msg::MultiDOFJointState & ros_message)
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
  // Member: transforms
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.transforms.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.transforms[i]);
      i++;
    }
  }
  // Member: twist
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.twist.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.twist[i]);
      i++;
    }
  }
  // Member: wrench
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.wrench.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.wrench[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::MultiDOFJointState & ros_message,
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
  // Member: transforms
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.transforms.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.transforms[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: twist
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.twist.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.twist[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: wrench
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.wrench.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.wrench[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_MultiDOFJointState(
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
  // Member: transforms
  {
    *full_bounded = false;
  }
  // Member: twist
  {
    *full_bounded = false;
  }
  // Member: wrench
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _MultiDOFJointState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiDOFJointState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiDOFJointState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::MultiDOFJointState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiDOFJointState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiDOFJointState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiDOFJointState__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::MultiDOFJointState *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MultiDOFJointState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MultiDOFJointState(&full_bounded, 0);
}

static message_type_support_callbacks_t _MultiDOFJointState__callbacks = {
  "sensor_msgs::msg",
  "MultiDOFJointState",
  _MultiDOFJointState__cdr_serialize,
  _MultiDOFJointState__cdr_deserialize,
  _MultiDOFJointState__get_serialized_size,
  _MultiDOFJointState__get_serialized_size_with_initial_alignment,
  _MultiDOFJointState__max_serialized_size
};

static rosidl_message_type_support_t _MultiDOFJointState__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MultiDOFJointState__callbacks,
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
get_message_type_support_handle<sensor_msgs::msg::MultiDOFJointState>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_MultiDOFJointState__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, MultiDOFJointState)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_MultiDOFJointState__handle;
}

#ifdef __cplusplus
}
#endif
