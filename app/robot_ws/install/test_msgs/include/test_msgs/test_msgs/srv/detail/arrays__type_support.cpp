// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_msgs/srv/detail/arrays__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Arrays_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_msgs::srv::Arrays_Request(_init);
}

void Arrays_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_msgs::srv::Arrays_Request *>(message_memory);
  typed_message->~Arrays_Request();
}

size_t size_function__Arrays_Request__bool_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__bool_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__bool_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__bool_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__Arrays_Request__bool_values(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__bool_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__Arrays_Request__bool_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__byte_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__byte_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__byte_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__byte_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Arrays_Request__byte_values(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__byte_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Arrays_Request__byte_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__char_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__char_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__char_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__char_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Request__char_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__char_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Request__char_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__float32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__float32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__float32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__float32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Arrays_Request__float32_values(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__float32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Arrays_Request__float32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__float64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__float64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__float64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__float64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Arrays_Request__float64_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__float64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Arrays_Request__float64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__Arrays_Request__int8_values(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__Arrays_Request__int8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Request__uint8_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Request__uint8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Arrays_Request__int16_values(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Arrays_Request__int16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__Arrays_Request__uint16_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__Arrays_Request__uint16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Arrays_Request__int32_values(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Arrays_Request__int32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Arrays_Request__uint32_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Arrays_Request__uint32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Arrays_Request__int64_values(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Arrays_Request__int64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__Arrays_Request__uint64_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__Arrays_Request__uint64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__string_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__string_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__string_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__string_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Arrays_Request__string_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__string_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Arrays_Request__string_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__basic_types_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__basic_types_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__basic_types_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__basic_types_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(
    get_const_function__Arrays_Request__basic_types_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BasicTypes *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__basic_types_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BasicTypes *>(
    get_function__Arrays_Request__basic_types_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__constants_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__constants_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__constants_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__constants_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Constants *>(
    get_const_function__Arrays_Request__constants_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Constants *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__constants_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Constants *>(
    get_function__Arrays_Request__constants_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Constants *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__defaults_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__defaults_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__defaults_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__defaults_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Defaults *>(
    get_const_function__Arrays_Request__defaults_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Defaults *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__defaults_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Defaults *>(
    get_function__Arrays_Request__defaults_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Defaults *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__bool_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__bool_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__bool_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__bool_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__Arrays_Request__bool_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__bool_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__Arrays_Request__bool_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__byte_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__byte_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__byte_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__byte_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Arrays_Request__byte_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__byte_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Arrays_Request__byte_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__char_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__char_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__char_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__char_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Request__char_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__char_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Request__char_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__float32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__float32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__float32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__float32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Arrays_Request__float32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__float32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Arrays_Request__float32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__float64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__float64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__float64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__float64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Arrays_Request__float64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__float64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Arrays_Request__float64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__Arrays_Request__int8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__Arrays_Request__int8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Request__uint8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Request__uint8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Arrays_Request__int16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Arrays_Request__int16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__Arrays_Request__uint16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__Arrays_Request__uint16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Arrays_Request__int32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Arrays_Request__int32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Arrays_Request__uint32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Arrays_Request__uint32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__int64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__int64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__int64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__int64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Arrays_Request__int64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__int64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Arrays_Request__int64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__uint64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__uint64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__uint64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__uint64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__Arrays_Request__uint64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__uint64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__Arrays_Request__uint64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Request__string_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Request__string_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Request__string_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Request__string_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Arrays_Request__string_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Request__string_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Arrays_Request__string_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Arrays_Request_message_member_array[31] = {
  {
    "bool_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, bool_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__bool_values,  // size() function pointer
    get_const_function__Arrays_Request__bool_values,  // get_const(index) function pointer
    get_function__Arrays_Request__bool_values,  // get(index) function pointer
    fetch_function__Arrays_Request__bool_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__bool_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, byte_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__byte_values,  // size() function pointer
    get_const_function__Arrays_Request__byte_values,  // get_const(index) function pointer
    get_function__Arrays_Request__byte_values,  // get(index) function pointer
    fetch_function__Arrays_Request__byte_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__byte_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, char_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__char_values,  // size() function pointer
    get_const_function__Arrays_Request__char_values,  // get_const(index) function pointer
    get_function__Arrays_Request__char_values,  // get(index) function pointer
    fetch_function__Arrays_Request__char_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__char_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, float32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__float32_values,  // size() function pointer
    get_const_function__Arrays_Request__float32_values,  // get_const(index) function pointer
    get_function__Arrays_Request__float32_values,  // get(index) function pointer
    fetch_function__Arrays_Request__float32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__float32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, float64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__float64_values,  // size() function pointer
    get_const_function__Arrays_Request__float64_values,  // get_const(index) function pointer
    get_function__Arrays_Request__float64_values,  // get(index) function pointer
    fetch_function__Arrays_Request__float64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__float64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int8_values,  // size() function pointer
    get_const_function__Arrays_Request__int8_values,  // get_const(index) function pointer
    get_function__Arrays_Request__int8_values,  // get(index) function pointer
    fetch_function__Arrays_Request__int8_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int8_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint8_values,  // size() function pointer
    get_const_function__Arrays_Request__uint8_values,  // get_const(index) function pointer
    get_function__Arrays_Request__uint8_values,  // get(index) function pointer
    fetch_function__Arrays_Request__uint8_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint8_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int16_values,  // size() function pointer
    get_const_function__Arrays_Request__int16_values,  // get_const(index) function pointer
    get_function__Arrays_Request__int16_values,  // get(index) function pointer
    fetch_function__Arrays_Request__int16_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int16_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint16_values,  // size() function pointer
    get_const_function__Arrays_Request__uint16_values,  // get_const(index) function pointer
    get_function__Arrays_Request__uint16_values,  // get(index) function pointer
    fetch_function__Arrays_Request__uint16_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint16_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int32_values,  // size() function pointer
    get_const_function__Arrays_Request__int32_values,  // get_const(index) function pointer
    get_function__Arrays_Request__int32_values,  // get(index) function pointer
    fetch_function__Arrays_Request__int32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint32_values,  // size() function pointer
    get_const_function__Arrays_Request__uint32_values,  // get_const(index) function pointer
    get_function__Arrays_Request__uint32_values,  // get(index) function pointer
    fetch_function__Arrays_Request__uint32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int64_values,  // size() function pointer
    get_const_function__Arrays_Request__int64_values,  // get_const(index) function pointer
    get_function__Arrays_Request__int64_values,  // get(index) function pointer
    fetch_function__Arrays_Request__int64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint64_values,  // size() function pointer
    get_const_function__Arrays_Request__uint64_values,  // get_const(index) function pointer
    get_function__Arrays_Request__uint64_values,  // get(index) function pointer
    fetch_function__Arrays_Request__uint64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, string_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__string_values,  // size() function pointer
    get_const_function__Arrays_Request__string_values,  // get_const(index) function pointer
    get_function__Arrays_Request__string_values,  // get(index) function pointer
    fetch_function__Arrays_Request__string_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__string_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, basic_types_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__basic_types_values,  // size() function pointer
    get_const_function__Arrays_Request__basic_types_values,  // get_const(index) function pointer
    get_function__Arrays_Request__basic_types_values,  // get(index) function pointer
    fetch_function__Arrays_Request__basic_types_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__basic_types_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Constants>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, constants_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__constants_values,  // size() function pointer
    get_const_function__Arrays_Request__constants_values,  // get_const(index) function pointer
    get_function__Arrays_Request__constants_values,  // get(index) function pointer
    fetch_function__Arrays_Request__constants_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__constants_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Defaults>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, defaults_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__defaults_values,  // size() function pointer
    get_const_function__Arrays_Request__defaults_values,  // get_const(index) function pointer
    get_function__Arrays_Request__defaults_values,  // get(index) function pointer
    fetch_function__Arrays_Request__defaults_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__defaults_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, bool_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__bool_values_default,  // size() function pointer
    get_const_function__Arrays_Request__bool_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__bool_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__bool_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__bool_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, byte_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__byte_values_default,  // size() function pointer
    get_const_function__Arrays_Request__byte_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__byte_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__byte_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__byte_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, char_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__char_values_default,  // size() function pointer
    get_const_function__Arrays_Request__char_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__char_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__char_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__char_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, float32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__float32_values_default,  // size() function pointer
    get_const_function__Arrays_Request__float32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__float32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__float32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__float32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, float64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__float64_values_default,  // size() function pointer
    get_const_function__Arrays_Request__float64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__float64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__float64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__float64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int8_values_default,  // size() function pointer
    get_const_function__Arrays_Request__int8_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__int8_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__int8_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int8_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint8_values_default,  // size() function pointer
    get_const_function__Arrays_Request__uint8_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__uint8_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__uint8_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint8_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int16_values_default,  // size() function pointer
    get_const_function__Arrays_Request__int16_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__int16_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__int16_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int16_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint16_values_default,  // size() function pointer
    get_const_function__Arrays_Request__uint16_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__uint16_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__uint16_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint16_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int32_values_default,  // size() function pointer
    get_const_function__Arrays_Request__int32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__int32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__int32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint32_values_default,  // size() function pointer
    get_const_function__Arrays_Request__uint32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__uint32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__uint32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, int64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__int64_values_default,  // size() function pointer
    get_const_function__Arrays_Request__int64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__int64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__int64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__int64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, uint64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__uint64_values_default,  // size() function pointer
    get_const_function__Arrays_Request__uint64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__uint64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__uint64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__uint64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Request, string_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Request__string_values_default,  // size() function pointer
    get_const_function__Arrays_Request__string_values_default,  // get_const(index) function pointer
    get_function__Arrays_Request__string_values_default,  // get(index) function pointer
    fetch_function__Arrays_Request__string_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Request__string_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Arrays_Request_message_members = {
  "test_msgs::srv",  // message namespace
  "Arrays_Request",  // message name
  31,  // number of fields
  sizeof(test_msgs::srv::Arrays_Request),
  Arrays_Request_message_member_array,  // message members
  Arrays_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Arrays_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Arrays_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::srv::Arrays_Request>()
{
  return &::test_msgs::srv::rosidl_typesupport_introspection_cpp::Arrays_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, srv, Arrays_Request)() {
  return &::test_msgs::srv::rosidl_typesupport_introspection_cpp::Arrays_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Arrays_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_msgs::srv::Arrays_Response(_init);
}

void Arrays_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_msgs::srv::Arrays_Response *>(message_memory);
  typed_message->~Arrays_Response();
}

size_t size_function__Arrays_Response__bool_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__bool_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__bool_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__bool_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__Arrays_Response__bool_values(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__bool_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__Arrays_Response__bool_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__byte_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__byte_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__byte_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__byte_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Arrays_Response__byte_values(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__byte_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Arrays_Response__byte_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__char_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__char_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__char_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__char_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Response__char_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__char_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Response__char_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__float32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__float32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__float32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__float32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Arrays_Response__float32_values(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__float32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Arrays_Response__float32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__float64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__float64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__float64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__float64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Arrays_Response__float64_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__float64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Arrays_Response__float64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__Arrays_Response__int8_values(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__Arrays_Response__int8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Response__uint8_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Response__uint8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Arrays_Response__int16_values(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Arrays_Response__int16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__Arrays_Response__uint16_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__Arrays_Response__uint16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Arrays_Response__int32_values(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Arrays_Response__int32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Arrays_Response__uint32_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Arrays_Response__uint32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Arrays_Response__int64_values(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Arrays_Response__int64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__Arrays_Response__uint64_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__Arrays_Response__uint64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__string_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__string_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__string_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__string_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Arrays_Response__string_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__string_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Arrays_Response__string_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__basic_types_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__basic_types_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__basic_types_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__basic_types_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(
    get_const_function__Arrays_Response__basic_types_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BasicTypes *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__basic_types_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BasicTypes *>(
    get_function__Arrays_Response__basic_types_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__constants_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__constants_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__constants_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__constants_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Constants *>(
    get_const_function__Arrays_Response__constants_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Constants *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__constants_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Constants *>(
    get_function__Arrays_Response__constants_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Constants *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__defaults_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__defaults_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__defaults_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__defaults_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Defaults *>(
    get_const_function__Arrays_Response__defaults_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Defaults *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__defaults_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Defaults *>(
    get_function__Arrays_Response__defaults_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Defaults *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__bool_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__bool_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__bool_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__bool_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__Arrays_Response__bool_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__bool_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__Arrays_Response__bool_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__byte_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__byte_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__byte_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__byte_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Arrays_Response__byte_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__byte_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Arrays_Response__byte_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__char_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__char_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__char_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__char_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Response__char_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__char_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Response__char_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__float32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__float32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__float32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__float32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Arrays_Response__float32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__float32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Arrays_Response__float32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__float64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__float64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__float64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__float64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Arrays_Response__float64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__float64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Arrays_Response__float64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__Arrays_Response__int8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__Arrays_Response__int8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Arrays_Response__uint8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Arrays_Response__uint8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Arrays_Response__int16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Arrays_Response__int16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__Arrays_Response__uint16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__Arrays_Response__uint16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Arrays_Response__int32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Arrays_Response__int32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Arrays_Response__uint32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Arrays_Response__uint32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__int64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__int64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__int64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__int64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Arrays_Response__int64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__int64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Arrays_Response__int64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__uint64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__uint64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__uint64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__uint64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__Arrays_Response__uint64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__uint64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__Arrays_Response__uint64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

size_t size_function__Arrays_Response__string_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays_Response__string_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays_Response__string_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Arrays_Response__string_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Arrays_Response__string_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Arrays_Response__string_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Arrays_Response__string_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Arrays_Response_message_member_array[31] = {
  {
    "bool_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, bool_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__bool_values,  // size() function pointer
    get_const_function__Arrays_Response__bool_values,  // get_const(index) function pointer
    get_function__Arrays_Response__bool_values,  // get(index) function pointer
    fetch_function__Arrays_Response__bool_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__bool_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, byte_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__byte_values,  // size() function pointer
    get_const_function__Arrays_Response__byte_values,  // get_const(index) function pointer
    get_function__Arrays_Response__byte_values,  // get(index) function pointer
    fetch_function__Arrays_Response__byte_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__byte_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, char_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__char_values,  // size() function pointer
    get_const_function__Arrays_Response__char_values,  // get_const(index) function pointer
    get_function__Arrays_Response__char_values,  // get(index) function pointer
    fetch_function__Arrays_Response__char_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__char_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, float32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__float32_values,  // size() function pointer
    get_const_function__Arrays_Response__float32_values,  // get_const(index) function pointer
    get_function__Arrays_Response__float32_values,  // get(index) function pointer
    fetch_function__Arrays_Response__float32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__float32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, float64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__float64_values,  // size() function pointer
    get_const_function__Arrays_Response__float64_values,  // get_const(index) function pointer
    get_function__Arrays_Response__float64_values,  // get(index) function pointer
    fetch_function__Arrays_Response__float64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__float64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int8_values,  // size() function pointer
    get_const_function__Arrays_Response__int8_values,  // get_const(index) function pointer
    get_function__Arrays_Response__int8_values,  // get(index) function pointer
    fetch_function__Arrays_Response__int8_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int8_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint8_values,  // size() function pointer
    get_const_function__Arrays_Response__uint8_values,  // get_const(index) function pointer
    get_function__Arrays_Response__uint8_values,  // get(index) function pointer
    fetch_function__Arrays_Response__uint8_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint8_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int16_values,  // size() function pointer
    get_const_function__Arrays_Response__int16_values,  // get_const(index) function pointer
    get_function__Arrays_Response__int16_values,  // get(index) function pointer
    fetch_function__Arrays_Response__int16_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int16_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint16_values,  // size() function pointer
    get_const_function__Arrays_Response__uint16_values,  // get_const(index) function pointer
    get_function__Arrays_Response__uint16_values,  // get(index) function pointer
    fetch_function__Arrays_Response__uint16_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint16_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int32_values,  // size() function pointer
    get_const_function__Arrays_Response__int32_values,  // get_const(index) function pointer
    get_function__Arrays_Response__int32_values,  // get(index) function pointer
    fetch_function__Arrays_Response__int32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint32_values,  // size() function pointer
    get_const_function__Arrays_Response__uint32_values,  // get_const(index) function pointer
    get_function__Arrays_Response__uint32_values,  // get(index) function pointer
    fetch_function__Arrays_Response__uint32_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint32_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int64_values,  // size() function pointer
    get_const_function__Arrays_Response__int64_values,  // get_const(index) function pointer
    get_function__Arrays_Response__int64_values,  // get(index) function pointer
    fetch_function__Arrays_Response__int64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint64_values,  // size() function pointer
    get_const_function__Arrays_Response__uint64_values,  // get_const(index) function pointer
    get_function__Arrays_Response__uint64_values,  // get(index) function pointer
    fetch_function__Arrays_Response__uint64_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint64_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, string_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__string_values,  // size() function pointer
    get_const_function__Arrays_Response__string_values,  // get_const(index) function pointer
    get_function__Arrays_Response__string_values,  // get(index) function pointer
    fetch_function__Arrays_Response__string_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__string_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, basic_types_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__basic_types_values,  // size() function pointer
    get_const_function__Arrays_Response__basic_types_values,  // get_const(index) function pointer
    get_function__Arrays_Response__basic_types_values,  // get(index) function pointer
    fetch_function__Arrays_Response__basic_types_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__basic_types_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Constants>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, constants_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__constants_values,  // size() function pointer
    get_const_function__Arrays_Response__constants_values,  // get_const(index) function pointer
    get_function__Arrays_Response__constants_values,  // get(index) function pointer
    fetch_function__Arrays_Response__constants_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__constants_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Defaults>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, defaults_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__defaults_values,  // size() function pointer
    get_const_function__Arrays_Response__defaults_values,  // get_const(index) function pointer
    get_function__Arrays_Response__defaults_values,  // get(index) function pointer
    fetch_function__Arrays_Response__defaults_values,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__defaults_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, bool_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__bool_values_default,  // size() function pointer
    get_const_function__Arrays_Response__bool_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__bool_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__bool_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__bool_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, byte_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__byte_values_default,  // size() function pointer
    get_const_function__Arrays_Response__byte_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__byte_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__byte_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__byte_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, char_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__char_values_default,  // size() function pointer
    get_const_function__Arrays_Response__char_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__char_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__char_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__char_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, float32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__float32_values_default,  // size() function pointer
    get_const_function__Arrays_Response__float32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__float32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__float32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__float32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, float64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__float64_values_default,  // size() function pointer
    get_const_function__Arrays_Response__float64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__float64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__float64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__float64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int8_values_default,  // size() function pointer
    get_const_function__Arrays_Response__int8_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__int8_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__int8_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int8_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint8_values_default,  // size() function pointer
    get_const_function__Arrays_Response__uint8_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__uint8_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__uint8_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint8_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int16_values_default,  // size() function pointer
    get_const_function__Arrays_Response__int16_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__int16_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__int16_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int16_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint16_values_default,  // size() function pointer
    get_const_function__Arrays_Response__uint16_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__uint16_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__uint16_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint16_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int32_values_default,  // size() function pointer
    get_const_function__Arrays_Response__int32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__int32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__int32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint32_values_default,  // size() function pointer
    get_const_function__Arrays_Response__uint32_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__uint32_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__uint32_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint32_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, int64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__int64_values_default,  // size() function pointer
    get_const_function__Arrays_Response__int64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__int64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__int64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__int64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, uint64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__uint64_values_default,  // size() function pointer
    get_const_function__Arrays_Response__uint64_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__uint64_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__uint64_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__uint64_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::srv::Arrays_Response, string_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays_Response__string_values_default,  // size() function pointer
    get_const_function__Arrays_Response__string_values_default,  // get_const(index) function pointer
    get_function__Arrays_Response__string_values_default,  // get(index) function pointer
    fetch_function__Arrays_Response__string_values_default,  // fetch(index, &value) function pointer
    assign_function__Arrays_Response__string_values_default,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Arrays_Response_message_members = {
  "test_msgs::srv",  // message namespace
  "Arrays_Response",  // message name
  31,  // number of fields
  sizeof(test_msgs::srv::Arrays_Response),
  Arrays_Response_message_member_array,  // message members
  Arrays_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Arrays_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Arrays_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::srv::Arrays_Response>()
{
  return &::test_msgs::srv::rosidl_typesupport_introspection_cpp::Arrays_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, srv, Arrays_Response)() {
  return &::test_msgs::srv::rosidl_typesupport_introspection_cpp::Arrays_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Arrays_service_members = {
  "test_msgs::srv",  // service namespace
  "Arrays",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<test_msgs::srv::Arrays>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Arrays_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Arrays_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<test_msgs::srv::Arrays>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::test_msgs::srv::rosidl_typesupport_introspection_cpp::Arrays_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::test_msgs::srv::Arrays_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::test_msgs::srv::Arrays_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, srv, Arrays)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<test_msgs::srv::Arrays>();
}

#ifdef __cplusplus
}
#endif
