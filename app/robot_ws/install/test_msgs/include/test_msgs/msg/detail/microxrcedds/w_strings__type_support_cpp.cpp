// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/w_strings__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/msg/detail/w_strings__struct.hpp"

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

namespace test_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::WStrings & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: wstring_value
  // Micro CDR does not support WString type.
  // Member: wstring_value_default1
  // Micro CDR does not support WString type.
  // Member: wstring_value_default2
  // Micro CDR does not support WString type.
  // Member: wstring_value_default3
  // Micro CDR does not support WString type.
  // Member: array_of_wstrings
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: bounded_sequence_of_wstrings
  {
  }
  // Member: unbounded_sequence_of_wstrings
  {
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::msg::WStrings & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: wstring_value
  // Micro CDR does not support WString type.
  // Member: wstring_value_default1
  // Micro CDR does not support WString type.
  // Member: wstring_value_default2
  // Micro CDR does not support WString type.
  // Member: wstring_value_default3
  // Micro CDR does not support WString type.
  // Member: array_of_wstrings
  {
    // Micro CDR only support arrays of basic types.
  }
  // Member: bounded_sequence_of_wstrings
  {
  }
  // Member: unbounded_sequence_of_wstrings
  {
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::WStrings & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: wstring_value
  // Member: wstring_value_default1
  // Member: wstring_value_default2
  // Member: wstring_value_default3
  // Member: array_of_wstrings
  {
  }
  // Member: bounded_sequence_of_wstrings
  {
  // Member is abstractsequence
  }
  // Member: unbounded_sequence_of_wstrings
  {
  // Member is abstractsequence
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_WStrings(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: wstring_value
  *full_bounded = false;
  // Member: wstring_value_default1
  *full_bounded = false;
  // Member: wstring_value_default2
  *full_bounded = false;
  // Member: wstring_value_default3
  *full_bounded = false;
  // Member: array_of_wstrings
  {
    *full_bounded = false;
  }
  // Member: bounded_sequence_of_wstrings
  {
    *full_bounded = false;
  }
  // Member: unbounded_sequence_of_wstrings
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _WStrings__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WStrings__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WStrings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WStrings__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _WStrings__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_WStrings(&full_bounded, 0);
}

static message_type_support_callbacks_t _WStrings__callbacks = {
  "test_msgs::msg",
  "WStrings",
  _WStrings__cdr_serialize,
  _WStrings__cdr_deserialize,
  _WStrings__get_serialized_size,
  _WStrings__get_serialized_size_with_initial_alignment,
  _WStrings__max_serialized_size
};

static rosidl_message_type_support_t _WStrings__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_WStrings__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::WStrings>()
{
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_WStrings__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, WStrings)() {
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_WStrings__handle;
}

#ifdef __cplusplus
}
#endif
