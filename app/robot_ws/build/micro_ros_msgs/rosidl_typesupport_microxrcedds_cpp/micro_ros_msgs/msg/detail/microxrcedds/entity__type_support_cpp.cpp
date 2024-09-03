// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/entity__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "micro_ros_msgs/msg/detail/entity__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_serialize(
  const micro_ros_msgs::msg::Entity & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: entity_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.entity_type);
  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: types
  {
    size_t size = ros_message.types.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.types[i].c_str());
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  micro_ros_msgs::msg::Entity & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: entity_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.entity_type);
  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: types
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.types.capacity()) {
      ros_message.types.resize(size);
    } else {
      ros_message.types.resize(ros_message.types.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.types[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.types[i] = std::move(stemp);
      }
      free(temp);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
get_serialized_size(
  const micro_ros_msgs::msg::Entity & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: entity_type
  {
    const size_t item_size = sizeof(ros_message.entity_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: types
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.types.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.types[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_micro_ros_msgs
max_serialized_size_Entity(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: entity_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 256 + 1;
  // Member: types
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Entity__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Entity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Entity__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<micro_ros_msgs::msg::Entity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Entity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Entity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Entity__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const micro_ros_msgs::msg::Entity *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Entity__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Entity(&full_bounded, 0);
}

static message_type_support_callbacks_t _Entity__callbacks = {
  "micro_ros_msgs::msg",
  "Entity",
  _Entity__cdr_serialize,
  _Entity__cdr_deserialize,
  _Entity__get_serialized_size,
  _Entity__get_serialized_size_with_initial_alignment,
  _Entity__max_serialized_size
};

static rosidl_message_type_support_t _Entity__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Entity__callbacks,
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
get_message_type_support_handle<micro_ros_msgs::msg::Entity>()
{
  return &micro_ros_msgs::msg::typesupport_microxrcedds_cpp::_Entity__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, micro_ros_msgs, msg, Entity)() {
  return &micro_ros_msgs::msg::typesupport_microxrcedds_cpp::_Entity__handle;
}

#ifdef __cplusplus
}
#endif
