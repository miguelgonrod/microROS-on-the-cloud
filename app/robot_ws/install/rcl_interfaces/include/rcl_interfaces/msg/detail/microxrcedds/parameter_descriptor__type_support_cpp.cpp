// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_descriptor__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.hpp"

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
namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::FloatingPointRange &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::FloatingPointRange &);

size_t get_serialized_size(
  const rcl_interfaces::msg::FloatingPointRange &,
  size_t current_alignment);

size_t
max_serialized_size_FloatingPointRange(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rcl_interfaces

namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::IntegerRange &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::IntegerRange &);

size_t get_serialized_size(
  const rcl_interfaces::msg::IntegerRange &,
  size_t current_alignment);

size_t
max_serialized_size_IntegerRange(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::ParameterDescriptor & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.type);
  // Member: description
  rv = ucdr_serialize_string(cdr, ros_message.description.c_str());
  // Member: additional_constraints
  rv = ucdr_serialize_string(cdr, ros_message.additional_constraints.c_str());
  // Member: read_only
  rv = ucdr_serialize_bool(cdr, ros_message.read_only);
  // Member: dynamic_typing
  rv = ucdr_serialize_bool(cdr, ros_message.dynamic_typing);
  // Member: floating_point_range
  {
    size_t size = ros_message.floating_point_range.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.floating_point_range[i],
        cdr);
      i++;
    }
  }
  // Member: integer_range
  {
    size_t size = ros_message.integer_range.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.integer_range[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::ParameterDescriptor & ros_message)
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
  // Member: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.type);
  // Member: description
  ros_message.description.resize(ros_message.description.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.description[0], ros_message.description.capacity());
  if (rv) {
    ros_message.description.resize(std::strlen(&ros_message.description[0]));
  }
  // Member: additional_constraints
  ros_message.additional_constraints.resize(ros_message.additional_constraints.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.additional_constraints[0], ros_message.additional_constraints.capacity());
  if (rv) {
    ros_message.additional_constraints.resize(std::strlen(&ros_message.additional_constraints[0]));
  }
  // Member: read_only
  rv = ucdr_deserialize_bool(cdr, &ros_message.read_only);
  // Member: dynamic_typing
  rv = ucdr_deserialize_bool(cdr, &ros_message.dynamic_typing);
  // Member: floating_point_range
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.floating_point_range.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.floating_point_range[i]);
      i++;
    }
  }
  // Member: integer_range
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.integer_range.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.integer_range[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::ParameterDescriptor & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: description
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.description.size() + 1;
  // Member: additional_constraints
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.additional_constraints.size() + 1;
  // Member: read_only
  {
    const size_t item_size = sizeof(ros_message.read_only);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: dynamic_typing
  {
    const size_t item_size = sizeof(ros_message.dynamic_typing);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: floating_point_range
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.floating_point_range.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.floating_point_range[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: integer_range
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.integer_range.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.integer_range[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_ParameterDescriptor(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: description
  *full_bounded = false;
  // Member: additional_constraints
  *full_bounded = false;
  // Member: read_only
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: dynamic_typing
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: floating_point_range
  {
    *full_bounded = false;
  }
  // Member: integer_range
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ParameterDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterDescriptor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParameterDescriptor__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::ParameterDescriptor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParameterDescriptor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterDescriptor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParameterDescriptor__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterDescriptor *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ParameterDescriptor__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ParameterDescriptor(&full_bounded, 0);
}

static message_type_support_callbacks_t _ParameterDescriptor__callbacks = {
  "rcl_interfaces::msg",
  "ParameterDescriptor",
  _ParameterDescriptor__cdr_serialize,
  _ParameterDescriptor__cdr_deserialize,
  _ParameterDescriptor__get_serialized_size,
  _ParameterDescriptor__get_serialized_size_with_initial_alignment,
  _ParameterDescriptor__max_serialized_size
};

static rosidl_message_type_support_t _ParameterDescriptor__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ParameterDescriptor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::msg::ParameterDescriptor>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterDescriptor__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, ParameterDescriptor)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterDescriptor__handle;
}

#ifdef __cplusplus
}
#endif
