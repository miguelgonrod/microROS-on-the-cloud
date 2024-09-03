// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Nested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/nested__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/msg/detail/nested__struct.hpp"

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
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::BasicTypes &);

size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);

size_t
max_serialized_size_BasicTypes(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs


namespace test_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::Nested & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: basic_types_value
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.basic_types_value,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::msg::Nested & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: basic_types_value
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.basic_types_value);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::Nested & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: basic_types_value
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.basic_types_value,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_Nested(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: basic_types_value
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_BasicTypes(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Nested__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Nested *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Nested__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::Nested *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Nested__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Nested *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Nested__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Nested *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Nested__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Nested(&full_bounded, 0);
}

static message_type_support_callbacks_t _Nested__callbacks = {
  "test_msgs::msg",
  "Nested",
  _Nested__cdr_serialize,
  _Nested__cdr_deserialize,
  _Nested__get_serialized_size,
  _Nested__get_serialized_size_with_initial_alignment,
  _Nested__max_serialized_size
};

static rosidl_message_type_support_t _Nested__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Nested__callbacks,
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
get_message_type_support_handle<test_msgs::msg::Nested>()
{
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Nested__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, msg, Nested)() {
  return &test_msgs::msg::typesupport_microxrcedds_cpp::_Nested__handle;
}

#ifdef __cplusplus
}
#endif
