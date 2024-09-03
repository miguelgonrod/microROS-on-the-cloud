// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/strings__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/msg/detail/strings__struct.hpp"

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
  const test_msgs::msg::Strings & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: string_value
  rv = ucdr_serialize_string(cdr, ros_message.string_value.c_str());
  // Member: string_value_default1
  rv = ucdr_serialize_string(cdr, ros_message.string_value_default1.c_str());
  // Member: string_value_default2
  rv = ucdr_serialize_string(cdr, ros_message.string_value_default2.c_str());
  // Member: string_value_default3
  rv = ucdr_serialize_string(cdr, ros_message.string_value_default3.c_str());
  // Member: string_value_default4
  rv = ucdr_serialize_string(cdr, ros_message.string_value_default4.c_str());
  // Member: string_value_default5
  rv = ucdr_serialize_string(cdr, ros_message.string_value_default5.c_str());
  // Member: bounded_string_value
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value.c_str());
  // Member: bounded_string_value_default1
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value_default1.c_str());
  // Member: bounded_string_value_default2
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value_default2.c_str());
  // Member: bounded_string_value_default3
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value_default3.c_str());
  // Member: bounded_string_value_default4
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value_default4.c_str());
  // Member: bounded_string_value_default5
  rv = ucdr_serialize_string(cdr, ros_message.bounded_string_value_default5.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::msg::Strings & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: string_value
  ros_message.string_value.resize(ros_message.string_value.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value[0], ros_message.string_value.capacity());
  if (rv) {
    ros_message.string_value.resize(std::strlen(&ros_message.string_value[0]));
  }
  // Member: string_value_default1
  ros_message.string_value_default1.resize(ros_message.string_value_default1.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value_default1[0], ros_message.string_value_default1.capacity());
  if (rv) {
    ros_message.string_value_default1.resize(std::strlen(&ros_message.string_value_default1[0]));
  }
  // Member: string_value_default2
  ros_message.string_value_default2.resize(ros_message.string_value_default2.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value_default2[0], ros_message.string_value_default2.capacity());
  if (rv) {
    ros_message.string_value_default2.resize(std::strlen(&ros_message.string_value_default2[0]));
  }
  // Member: string_value_default3
  ros_message.string_value_default3.resize(ros_message.string_value_default3.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value_default3[0], ros_message.string_value_default3.capacity());
  if (rv) {
    ros_message.string_value_default3.resize(std::strlen(&ros_message.string_value_default3[0]));
  }
  // Member: string_value_default4
  ros_message.string_value_default4.resize(ros_message.string_value_default4.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value_default4[0], ros_message.string_value_default4.capacity());
  if (rv) {
    ros_message.string_value_default4.resize(std::strlen(&ros_message.string_value_default4[0]));
  }
  // Member: string_value_default5
  ros_message.string_value_default5.resize(ros_message.string_value_default5.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value_default5[0], ros_message.string_value_default5.capacity());
  if (rv) {
    ros_message.string_value_default5.resize(std::strlen(&ros_message.string_value_default5[0]));
  }
  // Member: bounded_string_value
  ros_message.bounded_string_value.resize(ros_message.bounded_string_value.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value[0], ros_message.bounded_string_value.capacity());
  if (rv) {
    ros_message.bounded_string_value.resize(std::strlen(&ros_message.bounded_string_value[0]));
  }
  // Member: bounded_string_value_default1
  ros_message.bounded_string_value_default1.resize(ros_message.bounded_string_value_default1.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value_default1[0], ros_message.bounded_string_value_default1.capacity());
  if (rv) {
    ros_message.bounded_string_value_default1.resize(std::strlen(&ros_message.bounded_string_value_default1[0]));
  }
  // Member: bounded_string_value_default2
  ros_message.bounded_string_value_default2.resize(ros_message.bounded_string_value_default2.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value_default2[0], ros_message.bounded_string_value_default2.capacity());
  if (rv) {
    ros_message.bounded_string_value_default2.resize(std::strlen(&ros_message.bounded_string_value_default2[0]));
  }
  // Member: bounded_string_value_default3
  ros_message.bounded_string_value_default3.resize(ros_message.bounded_string_value_default3.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value_default3[0], ros_message.bounded_string_value_default3.capacity());
  if (rv) {
    ros_message.bounded_string_value_default3.resize(std::strlen(&ros_message.bounded_string_value_default3[0]));
  }
  // Member: bounded_string_value_default4
  ros_message.bounded_string_value_default4.resize(ros_message.bounded_string_value_default4.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value_default4[0], ros_message.bounded_string_value_default4.capacity());
  if (rv) {
    ros_message.bounded_string_value_default4.resize(std::strlen(&ros_message.bounded_string_value_default4[0]));
  }
  // Member: bounded_string_value_default5
  ros_message.bounded_string_value_default5.resize(ros_message.bounded_string_value_default5.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.bounded_string_value_default5[0], ros_message.bounded_string_value_default5.capacity());
  if (rv) {
    ros_message.bounded_string_value_default5.resize(std::strlen(&ros_message.bounded_string_value_default5[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::Strings & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value.size() + 1;
  // Member: string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value_default1.size() + 1;
  // Member: string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value_default2.size() + 1;
  // Member: string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value_default3.size() + 1;
  // Member: string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value_default4.size() + 1;
  // Member: string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value_default5.size() + 1;
  // Member: bounded_string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value.size() + 1;
  // Member: bounded_string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value_default1.size() + 1;
  // Member: bounded_string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value_default2.size() + 1;
  // Member: bounded_string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value_default3.size() + 1;
  // Member: bounded_string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value_default4.size() + 1;
  // Member: bounded_string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.bounded_string_value_default5.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_Strings(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: string_value
  *full_bounded = false;
  // Member: string_value_default1
  *full_bounded = false;
  // Member: string_value_default2
  *full_bounded = false;
  // Member: string_value_default3
  *full_bounded = false;
  // Member: string_value_default4
  *full_bounded = false;
  // Member: string_value_default5
  *full_bounded = false;
  // Member: bounded_string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;
  // Member: bounded_string_value_default5
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 22 + 1;

  return current_alignment - initial_alignment;
}

static bool _Strings__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Strings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Strings__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::Strings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Strings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Strings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Strings__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Strings *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Strings__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Strings(&full_bounded, 0);
}

static message_type_support_callbacks_t _Strings__callbacks = {
  "test_msgs::msg",
  "Strings",
  _Strings__cdr_serialize,
  _Strings__cdr_deserialize,
  _Strings__get_serialized_size,
  _Strings__get_serialized_size_with_initial_alignment,
  _Strings__max_serialized_size
};

static rosidl_message_type_support_t _Strings__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Strings__callbacks,
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
get_message_type_support_handle<test_msgs::msg::Strings>()
{
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Strings__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, Strings)() {
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Strings__handle;
}

#ifdef __cplusplus
}
#endif
