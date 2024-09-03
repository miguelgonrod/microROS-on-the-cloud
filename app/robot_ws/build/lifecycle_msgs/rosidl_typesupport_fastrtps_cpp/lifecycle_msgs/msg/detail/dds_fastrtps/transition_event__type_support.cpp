// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:msg/TransitionEvent.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_event__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lifecycle_msgs/msg/detail/transition_event__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::Transition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lifecycle_msgs::msg::Transition &);
size_t get_serialized_size(
  const lifecycle_msgs::msg::Transition &,
  size_t current_alignment);
size_t
max_serialized_size_Transition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lifecycle_msgs

namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::State &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lifecycle_msgs::msg::State &);
size_t get_serialized_size(
  const lifecycle_msgs::msg::State &,
  size_t current_alignment);
size_t
max_serialized_size_State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lifecycle_msgs

// functions for lifecycle_msgs::msg::State already declared above


namespace lifecycle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::msg::TransitionEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: transition
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.transition,
    cdr);
  // Member: start_state
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.start_state,
    cdr);
  // Member: goal_state
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_state,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs::msg::TransitionEvent & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: transition
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.transition);

  // Member: start_state
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.start_state);

  // Member: goal_state
  lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_state);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::msg::TransitionEvent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transition

  current_alignment +=
    lifecycle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.transition, current_alignment);
  // Member: start_state

  current_alignment +=
    lifecycle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.start_state, current_alignment);
  // Member: goal_state

  current_alignment +=
    lifecycle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_state, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_TransitionEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: transition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lifecycle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Transition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: start_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lifecycle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lifecycle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_State(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lifecycle_msgs::msg::TransitionEvent;
    is_plain =
      (
      offsetof(DataType, goal_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TransitionEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::msg::TransitionEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TransitionEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _TransitionEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TransitionEvent(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TransitionEvent__callbacks = {
  "lifecycle_msgs::msg",
  "TransitionEvent",
  _TransitionEvent__cdr_serialize,
  _TransitionEvent__cdr_deserialize,
  _TransitionEvent__get_serialized_size,
  _TransitionEvent__max_serialized_size
};

static rosidl_message_type_support_t _TransitionEvent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TransitionEvent__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::msg::TransitionEvent>()
{
  return &lifecycle_msgs::msg::typesupport_fastrtps_cpp::_TransitionEvent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, msg, TransitionEvent)() {
  return &lifecycle_msgs::msg::typesupport_fastrtps_cpp::_TransitionEvent__handle;
}

#ifdef __cplusplus
}
#endif
