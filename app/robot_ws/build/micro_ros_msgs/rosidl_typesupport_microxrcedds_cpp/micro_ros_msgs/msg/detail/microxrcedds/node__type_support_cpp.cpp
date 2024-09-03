// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/node__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "micro_ros_msgs/msg/detail/node__struct.hpp"

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
namespace micro_ros_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const micro_ros_msgs::msg::Entity &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  micro_ros_msgs::msg::Entity &);

size_t get_serialized_size(
  const micro_ros_msgs::msg::Entity &,
  size_t current_alignment);

size_t
max_serialized_size_Entity(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace micro_ros_msgs


namespace micro_ros_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_serialize(
  const micro_ros_msgs::msg::Node & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: node_namespace
  rv = ucdr_serialize_string(cdr, ros_message.node_namespace.c_str());
  // Member: node_name
  rv = ucdr_serialize_string(cdr, ros_message.node_name.c_str());
  // Member: entities
  {
    size_t size = ros_message.entities.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = micro_ros_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.entities[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  micro_ros_msgs::msg::Node & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: node_namespace
  ros_message.node_namespace.resize(ros_message.node_namespace.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.node_namespace[0], ros_message.node_namespace.capacity());
  if (rv) {
    ros_message.node_namespace.resize(std::strlen(&ros_message.node_namespace[0]));
  }
  // Member: node_name
  ros_message.node_name.resize(ros_message.node_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.node_name[0], ros_message.node_name.capacity());
  if (rv) {
    ros_message.node_name.resize(std::strlen(&ros_message.node_name[0]));
  }
  // Member: entities
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.entities.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = micro_ros_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.entities[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
get_serialized_size(
  const micro_ros_msgs::msg::Node & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: node_namespace
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.node_namespace.size() + 1;
  // Member: node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.node_name.size() + 1;
  // Member: entities
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.entities.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = micro_ros_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.entities[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
max_serialized_size_Node(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: node_namespace
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 256 + 1;
  // Member: node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 256 + 1;
  // Member: entities
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Node__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Node *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Node__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<micro_ros_msgs::msg::Node *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Node__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Node *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Node__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Node *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Node__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Node(&full_bounded, 0);
}

static message_type_support_callbacks_t _Node__callbacks = {
  "micro_ros_msgs::msg",
  "Node",
  _Node__cdr_serialize,
  _Node__cdr_deserialize,
  _Node__get_serialized_size,
  _Node__get_serialized_size_with_initial_alignment,
  _Node__max_serialized_size
};

static rosidl_message_type_support_t _Node__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Node__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace micro_ros_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_micro_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<micro_ros_msgs::msg::Node>()
{
  return &micro_ros_msgs::msg::typesupport_microxrcedds_cpp::_Node__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, micro_ros_msgs, msg, Node)() {
  return &micro_ros_msgs::msg::typesupport_microxrcedds_cpp::_Node__handle;
}

#ifdef __cplusplus
}
#endif
