// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:msg/TransitionEvent.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_event__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "lifecycle_msgs/msg/detail/transition_event__struct.hpp"

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
namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::Transition &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  lifecycle_msgs::msg::Transition &);

size_t get_serialized_size(
  const lifecycle_msgs::msg::Transition &,
  size_t current_alignment);

size_t
max_serialized_size_Transition(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace lifecycle_msgs

namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::State &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  lifecycle_msgs::msg::State &);

size_t get_serialized_size(
  const lifecycle_msgs::msg::State &,
  size_t current_alignment);

size_t
max_serialized_size_State(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace lifecycle_msgs

namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::State &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  lifecycle_msgs::msg::State &);

size_t get_serialized_size(
  const lifecycle_msgs::msg::State &,
  size_t current_alignment);

size_t
max_serialized_size_State(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace lifecycle_msgs


namespace lifecycle_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::msg::TransitionEvent & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: timestamp
  rv = ucdr_serialize_uint64_t(cdr, ros_message.timestamp);
  // Member: transition
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.transition,
    cdr);
  // Member: start_state
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.start_state,
    cdr);
  // Member: goal_state
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_state,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  lifecycle_msgs::msg::TransitionEvent & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: timestamp
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.timestamp);
  // Member: transition
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.transition);
  // Member: start_state
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.start_state);
  // Member: goal_state
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_state);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::msg::TransitionEvent & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: timestamp
  {
    const size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: transition
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.transition,
    current_alignment);
  // Member: start_state
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.start_state,
    current_alignment);
  // Member: goal_state
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_state,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_TransitionEvent(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: timestamp
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: transition
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Transition(
    full_bounded,
    current_alignment);
  // Member: start_state
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_State(
    full_bounded,
    current_alignment);
  // Member: goal_state
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_State(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _TransitionEvent__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::msg::TransitionEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TransitionEvent__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lifecycle_msgs::msg::TransitionEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TransitionEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::msg::TransitionEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TransitionEvent__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::msg::TransitionEvent *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TransitionEvent__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TransitionEvent(&full_bounded, 0);
}

static message_type_support_callbacks_t _TransitionEvent__callbacks = {
  "lifecycle_msgs::msg",
  "TransitionEvent",
  _TransitionEvent__cdr_serialize,
  _TransitionEvent__cdr_deserialize,
  _TransitionEvent__get_serialized_size,
  _TransitionEvent__get_serialized_size_with_initial_alignment,
  _TransitionEvent__max_serialized_size
};

static rosidl_message_type_support_t _TransitionEvent__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TransitionEvent__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::msg::TransitionEvent>()
{
  return &lifecycle_msgs::msg::typesupport_microxrcedds_cpp::_TransitionEvent__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, msg, TransitionEvent)() {
  return &lifecycle_msgs::msg::typesupport_microxrcedds_cpp::_TransitionEvent__handle;
}

#ifdef __cplusplus
}
#endif
