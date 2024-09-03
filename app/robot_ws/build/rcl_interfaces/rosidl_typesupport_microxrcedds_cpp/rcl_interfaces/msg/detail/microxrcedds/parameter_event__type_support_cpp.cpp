// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/ParameterEvent.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_event__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/parameter_event__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::Parameter &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::Parameter &);

size_t get_serialized_size(
  const rcl_interfaces::msg::Parameter &,
  size_t current_alignment);

size_t
max_serialized_size_Parameter(
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
  const rcl_interfaces::msg::Parameter &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::Parameter &);

size_t get_serialized_size(
  const rcl_interfaces::msg::Parameter &,
  size_t current_alignment);

size_t
max_serialized_size_Parameter(
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
  const rcl_interfaces::msg::Parameter &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::Parameter &);

size_t get_serialized_size(
  const rcl_interfaces::msg::Parameter &,
  size_t current_alignment);

size_t
max_serialized_size_Parameter(
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
  const rcl_interfaces::msg::ParameterEvent & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: node
  rv = ucdr_serialize_string(cdr, ros_message.node.c_str());
  // Member: new_parameters
  {
    size_t size = ros_message.new_parameters.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.new_parameters[i],
        cdr);
      i++;
    }
  }
  // Member: changed_parameters
  {
    size_t size = ros_message.changed_parameters.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.changed_parameters[i],
        cdr);
      i++;
    }
  }
  // Member: deleted_parameters
  {
    size_t size = ros_message.deleted_parameters.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.deleted_parameters[i],
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
  rcl_interfaces::msg::ParameterEvent & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);
  // Member: node
  ros_message.node.resize(ros_message.node.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.node[0], ros_message.node.capacity());
  if (rv) {
    ros_message.node.resize(std::strlen(&ros_message.node[0]));
  }
  // Member: new_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.new_parameters.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.new_parameters[i]);
      i++;
    }
  }
  // Member: changed_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.changed_parameters.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.changed_parameters[i]);
      i++;
    }
  }
  // Member: deleted_parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.deleted_parameters.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.deleted_parameters[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::ParameterEvent & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);
  // Member: node
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.node.size() + 1;
  // Member: new_parameters
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.new_parameters.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.new_parameters[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: changed_parameters
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.changed_parameters.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.changed_parameters[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: deleted_parameters
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.deleted_parameters.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.deleted_parameters[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_ParameterEvent(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: node
  *full_bounded = false;
  // Member: new_parameters
  {
    *full_bounded = false;
  }
  // Member: changed_parameters
  {
    *full_bounded = false;
  }
  // Member: deleted_parameters
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ParameterEvent__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParameterEvent__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::ParameterEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParameterEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParameterEvent__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterEvent *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ParameterEvent__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ParameterEvent(&full_bounded, 0);
}

static message_type_support_callbacks_t _ParameterEvent__callbacks = {
  "rcl_interfaces::msg",
  "ParameterEvent",
  _ParameterEvent__cdr_serialize,
  _ParameterEvent__cdr_deserialize,
  _ParameterEvent__get_serialized_size,
  _ParameterEvent__get_serialized_size_with_initial_alignment,
  _ParameterEvent__max_serialized_size
};

static rosidl_message_type_support_t _ParameterEvent__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ParameterEvent__callbacks,
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
get_message_type_support_handle<rcl_interfaces::msg::ParameterEvent>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterEvent__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, ParameterEvent)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterEvent__handle;
}

#ifdef __cplusplus
}
#endif
