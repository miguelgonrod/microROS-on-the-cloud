// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "complex_msgs/msg/detail/nested_msg_test__struct.hpp"

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
bool cdr_serialize(
  const complex_msgs::msg::MultiStringTest &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  complex_msgs::msg::MultiStringTest &);

size_t get_serialized_size(
  const complex_msgs::msg::MultiStringTest &,
  size_t current_alignment);

size_t
max_serialized_size_MultiStringTest(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace complex_msgs


namespace complex_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_serialize(
  const complex_msgs::msg::NestedMsgTest & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: data1
  rv = ucdr_serialize_bool(cdr, ros_message.data1);
  // Member: data2
  rv = ucdr_serialize_uint8_t(cdr, ros_message.data2);
  // Member: data3
  rv = ucdr_serialize_uint8_t(cdr, ros_message.data3);
  // Member: data4
  rv = ucdr_serialize_float(cdr, ros_message.data4);
  // Member: data5
  rv = ucdr_serialize_double(cdr, ros_message.data5);
  // Member: data6
  rv = ucdr_serialize_int8_t(cdr, ros_message.data6);
  // Member: data7
  rv = ucdr_serialize_uint8_t(cdr, ros_message.data7);
  // Member: data8
  rv = ucdr_serialize_int16_t(cdr, ros_message.data8);
  // Member: data9
  rv = ucdr_serialize_uint16_t(cdr, ros_message.data9);
  // Member: data10
  rv = ucdr_serialize_int32_t(cdr, ros_message.data10);
  // Member: data11
  rv = ucdr_serialize_uint32_t(cdr, ros_message.data11);
  // Member: data12
  rv = ucdr_serialize_int64_t(cdr, ros_message.data12);
  // Member: data13
  rv = ucdr_serialize_uint64_t(cdr, ros_message.data13);
  // Member: data14
  rv = complex_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.data14,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  complex_msgs::msg::NestedMsgTest & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: data1
  rv = ucdr_deserialize_bool(cdr, &ros_message.data1);
  // Member: data2
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.data2);
  // Member: data3
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.data3);
  // Member: data4
  rv = ucdr_deserialize_float(cdr, &ros_message.data4);
  // Member: data5
  rv = ucdr_deserialize_double(cdr, &ros_message.data5);
  // Member: data6
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.data6);
  // Member: data7
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.data7);
  // Member: data8
  rv = ucdr_deserialize_int16_t(cdr, &ros_message.data8);
  // Member: data9
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.data9);
  // Member: data10
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.data10);
  // Member: data11
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.data11);
  // Member: data12
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.data12);
  // Member: data13
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.data13);
  // Member: data14
  rv = complex_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.data14);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
get_serialized_size(
  const complex_msgs::msg::NestedMsgTest & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  {
    const size_t item_size = sizeof(ros_message.data1);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data2
  {
    const size_t item_size = sizeof(ros_message.data2);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data3
  {
    const size_t item_size = sizeof(ros_message.data3);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data4
  {
    const size_t item_size = sizeof(ros_message.data4);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data5
  {
    const size_t item_size = sizeof(ros_message.data5);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data6
  {
    const size_t item_size = sizeof(ros_message.data6);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data7
  {
    const size_t item_size = sizeof(ros_message.data7);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data8
  {
    const size_t item_size = sizeof(ros_message.data8);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data9
  {
    const size_t item_size = sizeof(ros_message.data9);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data10
  {
    const size_t item_size = sizeof(ros_message.data10);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data11
  {
    const size_t item_size = sizeof(ros_message.data11);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data12
  {
    const size_t item_size = sizeof(ros_message.data12);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data13
  {
    const size_t item_size = sizeof(ros_message.data13);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: data14
  current_alignment += complex_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.data14,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_complex_msgs
max_serialized_size_NestedMsgTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data1
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: data2
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data3
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data4
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: data5
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: data6
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: data7
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: data8
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: data9
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: data10
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: data11
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: data12
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: data13
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: data14
  current_alignment += complex_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_MultiStringTest(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMsgTest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMsgTest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMsgTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMsgTest__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMsgTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMsgTest(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMsgTest__callbacks = {
  "complex_msgs::msg",
  "NestedMsgTest",
  _NestedMsgTest__cdr_serialize,
  _NestedMsgTest__cdr_deserialize,
  _NestedMsgTest__get_serialized_size,
  _NestedMsgTest__get_serialized_size_with_initial_alignment,
  _NestedMsgTest__max_serialized_size
};

static rosidl_message_type_support_t _NestedMsgTest__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMsgTest__callbacks,
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
get_message_type_support_handle<complex_msgs::msg::NestedMsgTest>()
{
  return &complex_msgs::msg::typesupport_microxrcedds_cpp::_NestedMsgTest__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, complex_msgs, msg, NestedMsgTest)() {
  return &complex_msgs::msg::typesupport_microxrcedds_cpp::_NestedMsgTest__handle;
}

#ifdef __cplusplus
}
#endif
