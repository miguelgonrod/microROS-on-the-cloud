// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"

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

namespace complex_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_serialize(
  const complex_msgs::msg::MultiStringTest & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: data1
  rv = ucdr_serialize_string(cdr, ros_message.data1.c_str());
  // Member: data2
  rv = ucdr_serialize_string(cdr, ros_message.data2.c_str());
  // Member: data3
  rv = ucdr_serialize_string(cdr, ros_message.data3.c_str());
  // Member: data4
  rv = ucdr_serialize_string(cdr, ros_message.data4.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  complex_msgs::msg::MultiStringTest & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: data1
  ros_message.data1.resize(ros_message.data1.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.data1[0], ros_message.data1.capacity());
  if (rv) {
    ros_message.data1.resize(std::strlen(&ros_message.data1[0]));
  }
  // Member: data2
  ros_message.data2.resize(ros_message.data2.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.data2[0], ros_message.data2.capacity());
  if (rv) {
    ros_message.data2.resize(std::strlen(&ros_message.data2[0]));
  }
  // Member: data3
  ros_message.data3.resize(ros_message.data3.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.data3[0], ros_message.data3.capacity());
  if (rv) {
    ros_message.data3.resize(std::strlen(&ros_message.data3[0]));
  }
  // Member: data4
  ros_message.data4.resize(ros_message.data4.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.data4[0], ros_message.data4.capacity());
  if (rv) {
    ros_message.data4.resize(std::strlen(&ros_message.data4[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
get_serialized_size(
  const complex_msgs::msg::MultiStringTest & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.data1.size() + 1;
  // Member: data2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.data2.size() + 1;
  // Member: data3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.data3.size() + 1;
  // Member: data4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.data4.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
max_serialized_size_MultiStringTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  *full_bounded = false;
  // Member: data2
  *full_bounded = false;
  // Member: data3
  *full_bounded = false;
  // Member: data4
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _MultiStringTest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiStringTest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiStringTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiStringTest__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MultiStringTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MultiStringTest(&full_bounded, 0);
}

static message_type_support_callbacks_t _MultiStringTest__callbacks = {
  "complex_msgs::msg",
  "MultiStringTest",
  _MultiStringTest__cdr_serialize,
  _MultiStringTest__cdr_deserialize,
  _MultiStringTest__get_serialized_size,
  _MultiStringTest__get_serialized_size_with_initial_alignment,
  _MultiStringTest__max_serialized_size
};

static rosidl_message_type_support_t _MultiStringTest__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MultiStringTest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace complex_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_complex_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<complex_msgs::msg::MultiStringTest>()
{
  return &complex_msgs::msg::typesupport_microxrcedds_cpp::_MultiStringTest__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, complex_msgs, msg, MultiStringTest)() {
  return &complex_msgs::msg::typesupport_microxrcedds_cpp::_MultiStringTest__handle;
}

#ifdef __cplusplus
}
#endif
