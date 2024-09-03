// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_msgs/msg/detail/multi_nested__struct.hpp"
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

void MultiNested_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_msgs::msg::MultiNested(_init);
}

void MultiNested_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_msgs::msg::MultiNested *>(message_memory);
  typed_message->~MultiNested();
}

size_t size_function__MultiNested__array_of_arrays(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MultiNested__array_of_arrays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Arrays, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__array_of_arrays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Arrays, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__array_of_arrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Arrays *>(
    get_const_function__MultiNested__array_of_arrays(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Arrays *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__array_of_arrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Arrays *>(
    get_function__MultiNested__array_of_arrays(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Arrays *>(untyped_value);
  item = value;
}

size_t size_function__MultiNested__array_of_bounded_sequences(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MultiNested__array_of_bounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::BoundedSequences, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__array_of_bounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::BoundedSequences, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__array_of_bounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(
    get_const_function__MultiNested__array_of_bounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__array_of_bounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(
    get_function__MultiNested__array_of_bounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(untyped_value);
  item = value;
}

size_t size_function__MultiNested__array_of_unbounded_sequences(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MultiNested__array_of_unbounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::UnboundedSequences, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__array_of_unbounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::UnboundedSequences, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__array_of_unbounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(
    get_const_function__MultiNested__array_of_unbounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__array_of_unbounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(
    get_function__MultiNested__array_of_unbounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(untyped_value);
  item = value;
}

size_t size_function__MultiNested__bounded_sequence_of_arrays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__bounded_sequence_of_arrays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__bounded_sequence_of_arrays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__bounded_sequence_of_arrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Arrays *>(
    get_const_function__MultiNested__bounded_sequence_of_arrays(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Arrays *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__bounded_sequence_of_arrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Arrays *>(
    get_function__MultiNested__bounded_sequence_of_arrays(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Arrays *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__bounded_sequence_of_arrays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiNested__bounded_sequence_of_bounded_sequences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__bounded_sequence_of_bounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__bounded_sequence_of_bounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__bounded_sequence_of_bounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(
    get_const_function__MultiNested__bounded_sequence_of_bounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__bounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(
    get_function__MultiNested__bounded_sequence_of_bounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__bounded_sequence_of_bounded_sequences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiNested__bounded_sequence_of_unbounded_sequences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__bounded_sequence_of_unbounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__bounded_sequence_of_unbounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__bounded_sequence_of_unbounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(
    get_const_function__MultiNested__bounded_sequence_of_unbounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__bounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(
    get_function__MultiNested__bounded_sequence_of_unbounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__bounded_sequence_of_unbounded_sequences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiNested__unbounded_sequence_of_arrays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__unbounded_sequence_of_arrays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__unbounded_sequence_of_arrays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__unbounded_sequence_of_arrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::Arrays *>(
    get_const_function__MultiNested__unbounded_sequence_of_arrays(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::Arrays *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__unbounded_sequence_of_arrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::Arrays *>(
    get_function__MultiNested__unbounded_sequence_of_arrays(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::Arrays *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__unbounded_sequence_of_arrays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::Arrays> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiNested__unbounded_sequence_of_bounded_sequences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__unbounded_sequence_of_bounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__unbounded_sequence_of_bounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__unbounded_sequence_of_bounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(
    get_const_function__MultiNested__unbounded_sequence_of_bounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__unbounded_sequence_of_bounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::BoundedSequences *>(
    get_function__MultiNested__unbounded_sequence_of_bounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::BoundedSequences *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__unbounded_sequence_of_bounded_sequences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::BoundedSequences> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiNested__unbounded_sequence_of_unbounded_sequences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiNested__unbounded_sequence_of_unbounded_sequences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiNested__unbounded_sequence_of_unbounded_sequences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiNested__unbounded_sequence_of_unbounded_sequences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(
    get_const_function__MultiNested__unbounded_sequence_of_unbounded_sequences(untyped_member, index));
  auto & value = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(untyped_value);
  value = item;
}

void assign_function__MultiNested__unbounded_sequence_of_unbounded_sequences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_msgs::msg::UnboundedSequences *>(
    get_function__MultiNested__unbounded_sequence_of_unbounded_sequences(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_msgs::msg::UnboundedSequences *>(untyped_value);
  item = value;
}

void resize_function__MultiNested__unbounded_sequence_of_unbounded_sequences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_msgs::msg::UnboundedSequences> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiNested_message_member_array[9] = {
  {
    "array_of_arrays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Arrays>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, array_of_arrays),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__array_of_arrays,  // size() function pointer
    get_const_function__MultiNested__array_of_arrays,  // get_const(index) function pointer
    get_function__MultiNested__array_of_arrays,  // get(index) function pointer
    fetch_function__MultiNested__array_of_arrays,  // fetch(index, &value) function pointer
    assign_function__MultiNested__array_of_arrays,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "array_of_bounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BoundedSequences>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, array_of_bounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__array_of_bounded_sequences,  // size() function pointer
    get_const_function__MultiNested__array_of_bounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__array_of_bounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__array_of_bounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__array_of_bounded_sequences,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "array_of_unbounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::UnboundedSequences>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, array_of_unbounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__array_of_unbounded_sequences,  // size() function pointer
    get_const_function__MultiNested__array_of_unbounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__array_of_unbounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__array_of_unbounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__array_of_unbounded_sequences,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_arrays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Arrays>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, bounded_sequence_of_arrays),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__bounded_sequence_of_arrays,  // size() function pointer
    get_const_function__MultiNested__bounded_sequence_of_arrays,  // get_const(index) function pointer
    get_function__MultiNested__bounded_sequence_of_arrays,  // get(index) function pointer
    fetch_function__MultiNested__bounded_sequence_of_arrays,  // fetch(index, &value) function pointer
    assign_function__MultiNested__bounded_sequence_of_arrays,  // assign(index, value) function pointer
    resize_function__MultiNested__bounded_sequence_of_arrays  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_bounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BoundedSequences>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, bounded_sequence_of_bounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__bounded_sequence_of_bounded_sequences,  // size() function pointer
    get_const_function__MultiNested__bounded_sequence_of_bounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__bounded_sequence_of_bounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__bounded_sequence_of_bounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__bounded_sequence_of_bounded_sequences,  // assign(index, value) function pointer
    resize_function__MultiNested__bounded_sequence_of_bounded_sequences  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_unbounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::UnboundedSequences>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, bounded_sequence_of_unbounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__bounded_sequence_of_unbounded_sequences,  // size() function pointer
    get_const_function__MultiNested__bounded_sequence_of_unbounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__bounded_sequence_of_unbounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__bounded_sequence_of_unbounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__bounded_sequence_of_unbounded_sequences,  // assign(index, value) function pointer
    resize_function__MultiNested__bounded_sequence_of_unbounded_sequences  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_arrays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Arrays>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, unbounded_sequence_of_arrays),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__unbounded_sequence_of_arrays,  // size() function pointer
    get_const_function__MultiNested__unbounded_sequence_of_arrays,  // get_const(index) function pointer
    get_function__MultiNested__unbounded_sequence_of_arrays,  // get(index) function pointer
    fetch_function__MultiNested__unbounded_sequence_of_arrays,  // fetch(index, &value) function pointer
    assign_function__MultiNested__unbounded_sequence_of_arrays,  // assign(index, value) function pointer
    resize_function__MultiNested__unbounded_sequence_of_arrays  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_bounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BoundedSequences>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, unbounded_sequence_of_bounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__unbounded_sequence_of_bounded_sequences,  // size() function pointer
    get_const_function__MultiNested__unbounded_sequence_of_bounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__unbounded_sequence_of_bounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__unbounded_sequence_of_bounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__unbounded_sequence_of_bounded_sequences,  // assign(index, value) function pointer
    resize_function__MultiNested__unbounded_sequence_of_bounded_sequences  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_unbounded_sequences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::UnboundedSequences>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::MultiNested, unbounded_sequence_of_unbounded_sequences),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiNested__unbounded_sequence_of_unbounded_sequences,  // size() function pointer
    get_const_function__MultiNested__unbounded_sequence_of_unbounded_sequences,  // get_const(index) function pointer
    get_function__MultiNested__unbounded_sequence_of_unbounded_sequences,  // get(index) function pointer
    fetch_function__MultiNested__unbounded_sequence_of_unbounded_sequences,  // fetch(index, &value) function pointer
    assign_function__MultiNested__unbounded_sequence_of_unbounded_sequences,  // assign(index, value) function pointer
    resize_function__MultiNested__unbounded_sequence_of_unbounded_sequences  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiNested_message_members = {
  "test_msgs::msg",  // message namespace
  "MultiNested",  // message name
  9,  // number of fields
  sizeof(test_msgs::msg::MultiNested),
  MultiNested_message_member_array,  // message members
  MultiNested_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiNested_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiNested_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiNested_message_members,
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
get_message_type_support_handle<test_msgs::msg::MultiNested>()
{
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::MultiNested_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, msg, MultiNested)() {
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::MultiNested_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
