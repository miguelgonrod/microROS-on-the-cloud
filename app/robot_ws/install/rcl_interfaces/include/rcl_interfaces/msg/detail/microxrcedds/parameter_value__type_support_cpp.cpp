// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_value__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/msg/detail/parameter_value__struct.hpp"

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

namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::ParameterValue & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.type);
  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, ros_message.bool_value);
  // Member: integer_value
  rv = ucdr_serialize_int64_t(cdr, ros_message.integer_value);
  // Member: double_value
  rv = ucdr_serialize_double(cdr, ros_message.double_value);
  // Member: string_value
  rv = ucdr_serialize_string(cdr, ros_message.string_value.c_str());
  // Member: byte_array_value
  {
    size_t size = ros_message.byte_array_value.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.byte_array_value[0], size);
  }
  // Member: bool_array_value
  {
    size_t size = ros_message.bool_array_value.size();
    bool * temp = new bool[size];
    std::copy(ros_message.bool_array_value.begin(), ros_message.bool_array_value.end(), temp);
    rv = ucdr_serialize_sequence_bool(cdr, temp, size);
    delete[] temp;
  }
  // Member: integer_array_value
  {
    size_t size = ros_message.integer_array_value.size();
    rv = ucdr_serialize_sequence_int64_t(cdr, &ros_message.integer_array_value[0], size);
  }
  // Member: double_array_value
  {
    size_t size = ros_message.double_array_value.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.double_array_value[0], size);
  }
  // Member: string_array_value
  {
    size_t size = ros_message.string_array_value.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.string_array_value[i].c_str());
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::msg::ParameterValue & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.type);
  // Member: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message.bool_value);
  // Member: integer_value
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.integer_value);
  // Member: double_value
  rv = ucdr_deserialize_double(cdr, &ros_message.double_value);
  // Member: string_value
  ros_message.string_value.resize(ros_message.string_value.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_value[0], ros_message.string_value.capacity());
  if (rv) {
    ros_message.string_value.resize(std::strlen(&ros_message.string_value[0]));
  }
  // Member: byte_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message.byte_array_value.capacity();
    ros_message.byte_array_value.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.byte_array_value[0], capacity, &size);
    if (rv) {
      ros_message.byte_array_value.resize(size);
    }
  }
  // Member: bool_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message.bool_array_value.capacity();
    ros_message.bool_array_value.resize(capacity);
    bool * temp = new bool[capacity];
    rv = ucdr_deserialize_sequence_bool(cdr, temp, capacity, &size);
    if (rv) {
      std::copy(temp, temp + size, ros_message.bool_array_value.begin());
    }
    delete[] temp;
    if (rv) {
      ros_message.bool_array_value.resize(size);
    }
  }
  // Member: integer_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message.integer_array_value.capacity();
    ros_message.integer_array_value.resize(capacity);
    rv = ucdr_deserialize_sequence_int64_t(cdr, &ros_message.integer_array_value[0], capacity, &size);
    if (rv) {
      ros_message.integer_array_value.resize(size);
    }
  }
  // Member: double_array_value
  {
    uint32_t size;
    const size_t capacity = ros_message.double_array_value.capacity();
    ros_message.double_array_value.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.double_array_value[0], capacity, &size);
    if (rv) {
      ros_message.double_array_value.resize(size);
    }
  }
  // Member: string_array_value
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.string_array_value.capacity()) {
      ros_message.string_array_value.resize(size);
    } else {
      ros_message.string_array_value.resize(ros_message.string_array_value.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.string_array_value[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.string_array_value[i] = std::move(stemp);
      }
      free(temp);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::ParameterValue & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message.bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: integer_value
  {
    const size_t item_size = sizeof(ros_message.integer_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: double_value
  {
    const size_t item_size = sizeof(ros_message.double_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_value.size() + 1;
  // Member: byte_array_value
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.byte_array_value.size();
    size_t item_size = sizeof(ros_message.byte_array_value[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: bool_array_value
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.bool_array_value.size();
    size_t item_size = sizeof(ros_message.bool_array_value[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: integer_array_value
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.integer_array_value.size();
    size_t item_size = sizeof(ros_message.integer_array_value[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: double_array_value
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.double_array_value.size();
    size_t item_size = sizeof(ros_message.double_array_value[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: string_array_value
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.string_array_value.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.string_array_value[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_ParameterValue(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: integer_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: double_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: string_value
  *full_bounded = false;
  // Member: byte_array_value
  {
    *full_bounded = false;
  }
  // Member: bool_array_value
  {
    *full_bounded = false;
  }
  // Member: integer_array_value
  {
    *full_bounded = false;
  }
  // Member: double_array_value
  {
    *full_bounded = false;
  }
  // Member: string_array_value
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ParameterValue__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParameterValue__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::ParameterValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParameterValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParameterValue__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::ParameterValue *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ParameterValue__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ParameterValue(&full_bounded, 0);
}

static message_type_support_callbacks_t _ParameterValue__callbacks = {
  "rcl_interfaces::msg",
  "ParameterValue",
  _ParameterValue__cdr_serialize,
  _ParameterValue__cdr_deserialize,
  _ParameterValue__get_serialized_size,
  _ParameterValue__get_serialized_size_with_initial_alignment,
  _ParameterValue__max_serialized_size
};

static rosidl_message_type_support_t _ParameterValue__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ParameterValue__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::msg::ParameterValue>()
{
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterValue__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, msg, ParameterValue)() {
  return &rcl_interfaces::msg::typesupport_microxrcedds_cpp::_ParameterValue__handle;
}

#ifdef __cplusplus
}
#endif
