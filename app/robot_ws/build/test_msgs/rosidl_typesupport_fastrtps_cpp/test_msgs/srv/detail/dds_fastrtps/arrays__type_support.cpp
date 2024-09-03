// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/arrays__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_msgs/srv/detail/arrays__struct.hpp"

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
namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::BasicTypes &);
size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);
size_t
max_serialized_size_BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Constants &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::Constants &);
size_t get_serialized_size(
  const test_msgs::msg::Constants &,
  size_t current_alignment);
size_t
max_serialized_size_Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Defaults &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::Defaults &);
size_t get_serialized_size(
  const test_msgs::msg::Defaults &,
  size_t current_alignment);
size_t
max_serialized_size_Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs


namespace test_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::srv::Arrays_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_values
  {
    cdr << ros_message.bool_values;
  }
  // Member: byte_values
  {
    cdr << ros_message.byte_values;
  }
  // Member: char_values
  {
    cdr << ros_message.char_values;
  }
  // Member: float32_values
  {
    cdr << ros_message.float32_values;
  }
  // Member: float64_values
  {
    cdr << ros_message.float64_values;
  }
  // Member: int8_values
  {
    cdr << ros_message.int8_values;
  }
  // Member: uint8_values
  {
    cdr << ros_message.uint8_values;
  }
  // Member: int16_values
  {
    cdr << ros_message.int16_values;
  }
  // Member: uint16_values
  {
    cdr << ros_message.uint16_values;
  }
  // Member: int32_values
  {
    cdr << ros_message.int32_values;
  }
  // Member: uint32_values
  {
    cdr << ros_message.uint32_values;
  }
  // Member: int64_values
  {
    cdr << ros_message.int64_values;
  }
  // Member: uint64_values
  {
    cdr << ros_message.uint64_values;
  }
  // Member: string_values
  {
    cdr << ros_message.string_values;
  }
  // Member: basic_types_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.basic_types_values[i],
        cdr);
    }
  }
  // Member: constants_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.constants_values[i],
        cdr);
    }
  }
  // Member: defaults_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.defaults_values[i],
        cdr);
    }
  }
  // Member: bool_values_default
  {
    cdr << ros_message.bool_values_default;
  }
  // Member: byte_values_default
  {
    cdr << ros_message.byte_values_default;
  }
  // Member: char_values_default
  {
    cdr << ros_message.char_values_default;
  }
  // Member: float32_values_default
  {
    cdr << ros_message.float32_values_default;
  }
  // Member: float64_values_default
  {
    cdr << ros_message.float64_values_default;
  }
  // Member: int8_values_default
  {
    cdr << ros_message.int8_values_default;
  }
  // Member: uint8_values_default
  {
    cdr << ros_message.uint8_values_default;
  }
  // Member: int16_values_default
  {
    cdr << ros_message.int16_values_default;
  }
  // Member: uint16_values_default
  {
    cdr << ros_message.uint16_values_default;
  }
  // Member: int32_values_default
  {
    cdr << ros_message.int32_values_default;
  }
  // Member: uint32_values_default
  {
    cdr << ros_message.uint32_values_default;
  }
  // Member: int64_values_default
  {
    cdr << ros_message.int64_values_default;
  }
  // Member: uint64_values_default
  {
    cdr << ros_message.uint64_values_default;
  }
  // Member: string_values_default
  {
    cdr << ros_message.string_values_default;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::srv::Arrays_Request & ros_message)
{
  // Member: bool_values
  {
    cdr >> ros_message.bool_values;
  }

  // Member: byte_values
  {
    cdr >> ros_message.byte_values;
  }

  // Member: char_values
  {
    cdr >> ros_message.char_values;
  }

  // Member: float32_values
  {
    cdr >> ros_message.float32_values;
  }

  // Member: float64_values
  {
    cdr >> ros_message.float64_values;
  }

  // Member: int8_values
  {
    cdr >> ros_message.int8_values;
  }

  // Member: uint8_values
  {
    cdr >> ros_message.uint8_values;
  }

  // Member: int16_values
  {
    cdr >> ros_message.int16_values;
  }

  // Member: uint16_values
  {
    cdr >> ros_message.uint16_values;
  }

  // Member: int32_values
  {
    cdr >> ros_message.int32_values;
  }

  // Member: uint32_values
  {
    cdr >> ros_message.uint32_values;
  }

  // Member: int64_values
  {
    cdr >> ros_message.int64_values;
  }

  // Member: uint64_values
  {
    cdr >> ros_message.uint64_values;
  }

  // Member: string_values
  {
    cdr >> ros_message.string_values;
  }

  // Member: basic_types_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.basic_types_values[i]);
    }
  }

  // Member: constants_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.constants_values[i]);
    }
  }

  // Member: defaults_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.defaults_values[i]);
    }
  }

  // Member: bool_values_default
  {
    cdr >> ros_message.bool_values_default;
  }

  // Member: byte_values_default
  {
    cdr >> ros_message.byte_values_default;
  }

  // Member: char_values_default
  {
    cdr >> ros_message.char_values_default;
  }

  // Member: float32_values_default
  {
    cdr >> ros_message.float32_values_default;
  }

  // Member: float64_values_default
  {
    cdr >> ros_message.float64_values_default;
  }

  // Member: int8_values_default
  {
    cdr >> ros_message.int8_values_default;
  }

  // Member: uint8_values_default
  {
    cdr >> ros_message.uint8_values_default;
  }

  // Member: int16_values_default
  {
    cdr >> ros_message.int16_values_default;
  }

  // Member: uint16_values_default
  {
    cdr >> ros_message.uint16_values_default;
  }

  // Member: int32_values_default
  {
    cdr >> ros_message.int32_values_default;
  }

  // Member: uint32_values_default
  {
    cdr >> ros_message.uint32_values_default;
  }

  // Member: int64_values_default
  {
    cdr >> ros_message.int64_values_default;
  }

  // Member: uint64_values_default
  {
    cdr >> ros_message.uint64_values_default;
  }

  // Member: string_values_default
  {
    cdr >> ros_message.string_values_default;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::srv::Arrays_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.bool_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.byte_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.char_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int8_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint8_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int16_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint16_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_values
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_values[index].size() + 1);
    }
  }
  // Member: basic_types_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.basic_types_values[index], current_alignment);
    }
  }
  // Member: constants_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.constants_values[index], current_alignment);
    }
  }
  // Member: defaults_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.defaults_values[index], current_alignment);
    }
  }
  // Member: bool_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.bool_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.byte_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.char_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int8_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint8_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int16_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint16_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_values_default
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_values_default[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_Arrays_Request(
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


  // Member: bool_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: string_values
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: basic_types_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: constants_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: defaults_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bool_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: string_values_default
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs::srv::Arrays_Request;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Arrays_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::srv::Arrays_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Arrays_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::srv::Arrays_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Arrays_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::srv::Arrays_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Arrays_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Arrays_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Arrays_Request__callbacks = {
  "test_msgs::srv",
  "Arrays_Request",
  _Arrays_Request__cdr_serialize,
  _Arrays_Request__cdr_deserialize,
  _Arrays_Request__get_serialized_size,
  _Arrays_Request__max_serialized_size
};

static rosidl_message_type_support_t _Arrays_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Arrays_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::srv::Arrays_Request>()
{
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, srv, Arrays_Request)() {
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for test_msgs::msg::BasicTypes already declared above

// functions for test_msgs::msg::Constants already declared above

// functions for test_msgs::msg::Defaults already declared above


namespace test_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::srv::Arrays_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_values
  {
    cdr << ros_message.bool_values;
  }
  // Member: byte_values
  {
    cdr << ros_message.byte_values;
  }
  // Member: char_values
  {
    cdr << ros_message.char_values;
  }
  // Member: float32_values
  {
    cdr << ros_message.float32_values;
  }
  // Member: float64_values
  {
    cdr << ros_message.float64_values;
  }
  // Member: int8_values
  {
    cdr << ros_message.int8_values;
  }
  // Member: uint8_values
  {
    cdr << ros_message.uint8_values;
  }
  // Member: int16_values
  {
    cdr << ros_message.int16_values;
  }
  // Member: uint16_values
  {
    cdr << ros_message.uint16_values;
  }
  // Member: int32_values
  {
    cdr << ros_message.int32_values;
  }
  // Member: uint32_values
  {
    cdr << ros_message.uint32_values;
  }
  // Member: int64_values
  {
    cdr << ros_message.int64_values;
  }
  // Member: uint64_values
  {
    cdr << ros_message.uint64_values;
  }
  // Member: string_values
  {
    cdr << ros_message.string_values;
  }
  // Member: basic_types_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.basic_types_values[i],
        cdr);
    }
  }
  // Member: constants_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.constants_values[i],
        cdr);
    }
  }
  // Member: defaults_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.defaults_values[i],
        cdr);
    }
  }
  // Member: bool_values_default
  {
    cdr << ros_message.bool_values_default;
  }
  // Member: byte_values_default
  {
    cdr << ros_message.byte_values_default;
  }
  // Member: char_values_default
  {
    cdr << ros_message.char_values_default;
  }
  // Member: float32_values_default
  {
    cdr << ros_message.float32_values_default;
  }
  // Member: float64_values_default
  {
    cdr << ros_message.float64_values_default;
  }
  // Member: int8_values_default
  {
    cdr << ros_message.int8_values_default;
  }
  // Member: uint8_values_default
  {
    cdr << ros_message.uint8_values_default;
  }
  // Member: int16_values_default
  {
    cdr << ros_message.int16_values_default;
  }
  // Member: uint16_values_default
  {
    cdr << ros_message.uint16_values_default;
  }
  // Member: int32_values_default
  {
    cdr << ros_message.int32_values_default;
  }
  // Member: uint32_values_default
  {
    cdr << ros_message.uint32_values_default;
  }
  // Member: int64_values_default
  {
    cdr << ros_message.int64_values_default;
  }
  // Member: uint64_values_default
  {
    cdr << ros_message.uint64_values_default;
  }
  // Member: string_values_default
  {
    cdr << ros_message.string_values_default;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::srv::Arrays_Response & ros_message)
{
  // Member: bool_values
  {
    cdr >> ros_message.bool_values;
  }

  // Member: byte_values
  {
    cdr >> ros_message.byte_values;
  }

  // Member: char_values
  {
    cdr >> ros_message.char_values;
  }

  // Member: float32_values
  {
    cdr >> ros_message.float32_values;
  }

  // Member: float64_values
  {
    cdr >> ros_message.float64_values;
  }

  // Member: int8_values
  {
    cdr >> ros_message.int8_values;
  }

  // Member: uint8_values
  {
    cdr >> ros_message.uint8_values;
  }

  // Member: int16_values
  {
    cdr >> ros_message.int16_values;
  }

  // Member: uint16_values
  {
    cdr >> ros_message.uint16_values;
  }

  // Member: int32_values
  {
    cdr >> ros_message.int32_values;
  }

  // Member: uint32_values
  {
    cdr >> ros_message.uint32_values;
  }

  // Member: int64_values
  {
    cdr >> ros_message.int64_values;
  }

  // Member: uint64_values
  {
    cdr >> ros_message.uint64_values;
  }

  // Member: string_values
  {
    cdr >> ros_message.string_values;
  }

  // Member: basic_types_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.basic_types_values[i]);
    }
  }

  // Member: constants_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.constants_values[i]);
    }
  }

  // Member: defaults_values
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.defaults_values[i]);
    }
  }

  // Member: bool_values_default
  {
    cdr >> ros_message.bool_values_default;
  }

  // Member: byte_values_default
  {
    cdr >> ros_message.byte_values_default;
  }

  // Member: char_values_default
  {
    cdr >> ros_message.char_values_default;
  }

  // Member: float32_values_default
  {
    cdr >> ros_message.float32_values_default;
  }

  // Member: float64_values_default
  {
    cdr >> ros_message.float64_values_default;
  }

  // Member: int8_values_default
  {
    cdr >> ros_message.int8_values_default;
  }

  // Member: uint8_values_default
  {
    cdr >> ros_message.uint8_values_default;
  }

  // Member: int16_values_default
  {
    cdr >> ros_message.int16_values_default;
  }

  // Member: uint16_values_default
  {
    cdr >> ros_message.uint16_values_default;
  }

  // Member: int32_values_default
  {
    cdr >> ros_message.int32_values_default;
  }

  // Member: uint32_values_default
  {
    cdr >> ros_message.uint32_values_default;
  }

  // Member: int64_values_default
  {
    cdr >> ros_message.int64_values_default;
  }

  // Member: uint64_values_default
  {
    cdr >> ros_message.uint64_values_default;
  }

  // Member: string_values_default
  {
    cdr >> ros_message.string_values_default;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::srv::Arrays_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.bool_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.byte_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.char_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int8_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint8_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int16_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint16_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint32_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_values
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint64_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_values
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_values[index].size() + 1);
    }
  }
  // Member: basic_types_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.basic_types_values[index], current_alignment);
    }
  }
  // Member: constants_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.constants_values[index], current_alignment);
    }
  }
  // Member: defaults_values
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.defaults_values[index], current_alignment);
    }
  }
  // Member: bool_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.bool_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.byte_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.char_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int8_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint8_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int16_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint16_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint32_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.int64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_values_default
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.uint64_values_default[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_values_default
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_values_default[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_Arrays_Response(
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


  // Member: bool_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: string_values
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: basic_types_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: constants_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: defaults_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bool_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: string_values_default
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs::srv::Arrays_Response;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Arrays_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::srv::Arrays_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Arrays_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::srv::Arrays_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Arrays_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::srv::Arrays_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Arrays_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Arrays_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Arrays_Response__callbacks = {
  "test_msgs::srv",
  "Arrays_Response",
  _Arrays_Response__cdr_serialize,
  _Arrays_Response__cdr_deserialize,
  _Arrays_Response__get_serialized_size,
  _Arrays_Response__max_serialized_size
};

static rosidl_message_type_support_t _Arrays_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Arrays_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::srv::Arrays_Response>()
{
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, srv, Arrays_Response)() {
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace test_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Arrays__callbacks = {
  "test_msgs::srv",
  "Arrays",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, srv, Arrays_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, srv, Arrays_Response)(),
};

static rosidl_service_type_support_t _Arrays__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Arrays__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<test_msgs::srv::Arrays>()
{
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, srv, Arrays)() {
  return &test_msgs::srv::typesupport_fastrtps_cpp::_Arrays__handle;
}

#ifdef __cplusplus
}
#endif
