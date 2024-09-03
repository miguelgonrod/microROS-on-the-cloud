// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/BoundedSequences.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_msgs/msg/detail/bounded_sequences__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoundedSequences_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_msgs::msg::BoundedSequences(_init);
}

void BoundedSequences_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_msgs::msg::BoundedSequences *>(message_memory);
  typed_message->~BoundedSequences();
}

size_t size_function__BoundedSequences__bool_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__BoundedSequences__bool_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__BoundedSequences__bool_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__BoundedSequences__bool_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__byte_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__byte_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__byte_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__byte_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__BoundedSequences__byte_values(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__byte_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__BoundedSequences__byte_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__byte_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__char_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__char_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__char_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__char_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__BoundedSequences__char_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__char_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__BoundedSequences__char_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__char_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__float32_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__float32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__float32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__float32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BoundedSequences__float32_values(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__float32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BoundedSequences__float32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__float32_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__float64_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__float64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__float64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__float64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BoundedSequences__float64_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__float64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BoundedSequences__float64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__float64_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int8_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__BoundedSequences__int8_values(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__BoundedSequences__int8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int8_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint8_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint8_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__BoundedSequences__uint8_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint8_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__BoundedSequences__uint8_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint8_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int16_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__BoundedSequences__int16_values(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__BoundedSequences__int16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int16_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint16_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint16_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__BoundedSequences__uint16_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint16_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__BoundedSequences__uint16_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint16_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int32_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BoundedSequences__int32_values(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BoundedSequences__int32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int32_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint32_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint32_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__BoundedSequences__uint32_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint32_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__BoundedSequences__uint32_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint32_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int64_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__BoundedSequences__int64_values(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__BoundedSequences__int64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int64_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint64_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint64_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__BoundedSequences__uint64_values(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint64_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__BoundedSequences__uint64_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint64_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__string_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__string_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__string_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__string_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BoundedSequences__string_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__string_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BoundedSequences__string_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__string_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__basic_types_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::BasicTypes> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__basic_types_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::BasicTypes> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__basic_types_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::BasicTypes> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__basic_types_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(
    get_const_function__BoundedSequences__basic_types_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BasicTypes *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__basic_types_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BasicTypes *>(
    get_function__BoundedSequences__basic_types_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BasicTypes *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__basic_types_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::BasicTypes> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__constants_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::Constants> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__constants_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::Constants> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__constants_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::Constants> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__constants_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Constants *>(
    get_const_function__BoundedSequences__constants_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Constants *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__constants_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Constants *>(
    get_function__BoundedSequences__constants_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Constants *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__constants_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::Constants> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__defaults_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::Defaults> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__defaults_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::Defaults> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__defaults_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::Defaults> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__defaults_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Defaults *>(
    get_const_function__BoundedSequences__defaults_values(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Defaults *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__defaults_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Defaults *>(
    get_function__BoundedSequences__defaults_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Defaults *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__defaults_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::Defaults> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__bool_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__BoundedSequences__bool_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__BoundedSequences__bool_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__BoundedSequences__bool_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__byte_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__byte_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__byte_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__byte_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__BoundedSequences__byte_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__byte_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__BoundedSequences__byte_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__byte_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__char_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__char_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__char_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__char_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__BoundedSequences__char_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__char_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__BoundedSequences__char_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__char_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__float32_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__float32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__float32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__float32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BoundedSequences__float32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__float32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BoundedSequences__float32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__float32_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__float64_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__float64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__float64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__float64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BoundedSequences__float64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__float64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BoundedSequences__float64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__float64_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int8_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__BoundedSequences__int8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__BoundedSequences__int8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int8_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint8_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint8_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__BoundedSequences__uint8_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint8_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__BoundedSequences__uint8_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint8_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int16_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__BoundedSequences__int16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__BoundedSequences__int16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int16_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint16_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint16_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__BoundedSequences__uint16_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint16_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__BoundedSequences__uint16_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint16_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int32_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BoundedSequences__int32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BoundedSequences__int32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int32_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint32_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint32_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__BoundedSequences__uint32_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint32_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__BoundedSequences__uint32_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint32_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__int64_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__int64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__int64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__int64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__BoundedSequences__int64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__int64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__BoundedSequences__int64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__int64_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__uint64_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__uint64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__uint64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__uint64_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__BoundedSequences__uint64_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__uint64_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__BoundedSequences__uint64_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__uint64_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundedSequences__string_values_default(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundedSequences__string_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundedSequences__string_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundedSequences__string_values_default(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BoundedSequences__string_values_default(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BoundedSequences__string_values_default(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BoundedSequences__string_values_default(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BoundedSequences__string_values_default(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundedSequences_message_member_array[32] = {
  {
    "bool_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, bool_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__bool_values,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__BoundedSequences__bool_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__bool_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__bool_values  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, byte_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__byte_values,  // size() function pointer
    get_const_function__BoundedSequences__byte_values,  // get_const(index) function pointer
    get_function__BoundedSequences__byte_values,  // get(index) function pointer
    fetch_function__BoundedSequences__byte_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__byte_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__byte_values  // resize(index) function pointer
  },
  {
    "char_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, char_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__char_values,  // size() function pointer
    get_const_function__BoundedSequences__char_values,  // get_const(index) function pointer
    get_function__BoundedSequences__char_values,  // get(index) function pointer
    fetch_function__BoundedSequences__char_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__char_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__char_values  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, float32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__float32_values,  // size() function pointer
    get_const_function__BoundedSequences__float32_values,  // get_const(index) function pointer
    get_function__BoundedSequences__float32_values,  // get(index) function pointer
    fetch_function__BoundedSequences__float32_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__float32_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__float32_values  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, float64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__float64_values,  // size() function pointer
    get_const_function__BoundedSequences__float64_values,  // get_const(index) function pointer
    get_function__BoundedSequences__float64_values,  // get(index) function pointer
    fetch_function__BoundedSequences__float64_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__float64_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__float64_values  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int8_values,  // size() function pointer
    get_const_function__BoundedSequences__int8_values,  // get_const(index) function pointer
    get_function__BoundedSequences__int8_values,  // get(index) function pointer
    fetch_function__BoundedSequences__int8_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int8_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int8_values  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint8_values,  // size() function pointer
    get_const_function__BoundedSequences__uint8_values,  // get_const(index) function pointer
    get_function__BoundedSequences__uint8_values,  // get(index) function pointer
    fetch_function__BoundedSequences__uint8_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint8_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint8_values  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int16_values,  // size() function pointer
    get_const_function__BoundedSequences__int16_values,  // get_const(index) function pointer
    get_function__BoundedSequences__int16_values,  // get(index) function pointer
    fetch_function__BoundedSequences__int16_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int16_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int16_values  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint16_values,  // size() function pointer
    get_const_function__BoundedSequences__uint16_values,  // get_const(index) function pointer
    get_function__BoundedSequences__uint16_values,  // get(index) function pointer
    fetch_function__BoundedSequences__uint16_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint16_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint16_values  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int32_values,  // size() function pointer
    get_const_function__BoundedSequences__int32_values,  // get_const(index) function pointer
    get_function__BoundedSequences__int32_values,  // get(index) function pointer
    fetch_function__BoundedSequences__int32_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int32_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int32_values  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint32_values,  // size() function pointer
    get_const_function__BoundedSequences__uint32_values,  // get_const(index) function pointer
    get_function__BoundedSequences__uint32_values,  // get(index) function pointer
    fetch_function__BoundedSequences__uint32_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint32_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint32_values  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int64_values,  // size() function pointer
    get_const_function__BoundedSequences__int64_values,  // get_const(index) function pointer
    get_function__BoundedSequences__int64_values,  // get(index) function pointer
    fetch_function__BoundedSequences__int64_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int64_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int64_values  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint64_values,  // size() function pointer
    get_const_function__BoundedSequences__uint64_values,  // get_const(index) function pointer
    get_function__BoundedSequences__uint64_values,  // get(index) function pointer
    fetch_function__BoundedSequences__uint64_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint64_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint64_values  // resize(index) function pointer
  },
  {
    "string_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, string_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__string_values,  // size() function pointer
    get_const_function__BoundedSequences__string_values,  // get_const(index) function pointer
    get_function__BoundedSequences__string_values,  // get(index) function pointer
    fetch_function__BoundedSequences__string_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__string_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__string_values  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, basic_types_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__basic_types_values,  // size() function pointer
    get_const_function__BoundedSequences__basic_types_values,  // get_const(index) function pointer
    get_function__BoundedSequences__basic_types_values,  // get(index) function pointer
    fetch_function__BoundedSequences__basic_types_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__basic_types_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__basic_types_values  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Constants>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, constants_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__constants_values,  // size() function pointer
    get_const_function__BoundedSequences__constants_values,  // get_const(index) function pointer
    get_function__BoundedSequences__constants_values,  // get(index) function pointer
    fetch_function__BoundedSequences__constants_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__constants_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__constants_values  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Defaults>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, defaults_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__defaults_values,  // size() function pointer
    get_const_function__BoundedSequences__defaults_values,  // get_const(index) function pointer
    get_function__BoundedSequences__defaults_values,  // get(index) function pointer
    fetch_function__BoundedSequences__defaults_values,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__defaults_values,  // assign(index, value) function pointer
    resize_function__BoundedSequences__defaults_values  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, bool_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__bool_values_default,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__BoundedSequences__bool_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__bool_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__bool_values_default  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, byte_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__byte_values_default,  // size() function pointer
    get_const_function__BoundedSequences__byte_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__byte_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__byte_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__byte_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__byte_values_default  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, char_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__char_values_default,  // size() function pointer
    get_const_function__BoundedSequences__char_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__char_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__char_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__char_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__char_values_default  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, float32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__float32_values_default,  // size() function pointer
    get_const_function__BoundedSequences__float32_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__float32_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__float32_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__float32_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__float32_values_default  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, float64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__float64_values_default,  // size() function pointer
    get_const_function__BoundedSequences__float64_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__float64_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__float64_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__float64_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__float64_values_default  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int8_values_default,  // size() function pointer
    get_const_function__BoundedSequences__int8_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__int8_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__int8_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int8_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int8_values_default  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint8_values_default,  // size() function pointer
    get_const_function__BoundedSequences__uint8_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__uint8_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__uint8_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint8_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint8_values_default  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int16_values_default,  // size() function pointer
    get_const_function__BoundedSequences__int16_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__int16_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__int16_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int16_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int16_values_default  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint16_values_default,  // size() function pointer
    get_const_function__BoundedSequences__uint16_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__uint16_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__uint16_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint16_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint16_values_default  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int32_values_default,  // size() function pointer
    get_const_function__BoundedSequences__int32_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__int32_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__int32_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int32_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int32_values_default  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint32_values_default,  // size() function pointer
    get_const_function__BoundedSequences__uint32_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__uint32_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__uint32_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint32_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint32_values_default  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, int64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__int64_values_default,  // size() function pointer
    get_const_function__BoundedSequences__int64_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__int64_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__int64_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__int64_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__int64_values_default  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, uint64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__uint64_values_default,  // size() function pointer
    get_const_function__BoundedSequences__uint64_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__uint64_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__uint64_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__uint64_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__uint64_values_default  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, string_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundedSequences__string_values_default,  // size() function pointer
    get_const_function__BoundedSequences__string_values_default,  // get_const(index) function pointer
    get_function__BoundedSequences__string_values_default,  // get(index) function pointer
    fetch_function__BoundedSequences__string_values_default,  // fetch(index, &value) function pointer
    assign_function__BoundedSequences__string_values_default,  // assign(index, value) function pointer
    resize_function__BoundedSequences__string_values_default  // resize(index) function pointer
  },
  {
    "alignment_check",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::BoundedSequences, alignment_check),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundedSequences_message_members = {
  "test_msgs::msg",  // message namespace
  "BoundedSequences",  // message name
  32,  // number of fields
  sizeof(test_msgs::msg::BoundedSequences),
  BoundedSequences_message_member_array,  // message members
  BoundedSequences_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundedSequences_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundedSequences_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundedSequences_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::BoundedSequences>()
{
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::BoundedSequences_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, msg, BoundedSequences)() {
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::BoundedSequences_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
