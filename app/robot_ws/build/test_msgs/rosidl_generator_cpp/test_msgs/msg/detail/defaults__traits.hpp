// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__DEFAULTS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__DEFAULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/msg/detail/defaults__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Defaults & msg,
  std::ostream & out)
{
  out << "{";
  // member: bool_value
  {
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << ", ";
  }

  // member: byte_value
  {
    out << "byte_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.byte_value, out);
    out << ", ";
  }

  // member: char_value
  {
    out << "char_value: ";
    rosidl_generator_traits::value_to_yaml(msg.char_value, out);
    out << ", ";
  }

  // member: float32_value
  {
    out << "float32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float32_value, out);
    out << ", ";
  }

  // member: float64_value
  {
    out << "float64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float64_value, out);
    out << ", ";
  }

  // member: int8_value
  {
    out << "int8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_value, out);
    out << ", ";
  }

  // member: uint8_value
  {
    out << "uint8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_value, out);
    out << ", ";
  }

  // member: int16_value
  {
    out << "int16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_value, out);
    out << ", ";
  }

  // member: uint16_value
  {
    out << "uint16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_value, out);
    out << ", ";
  }

  // member: int32_value
  {
    out << "int32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_value, out);
    out << ", ";
  }

  // member: uint32_value
  {
    out << "uint32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_value, out);
    out << ", ";
  }

  // member: int64_value
  {
    out << "int64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_value, out);
    out << ", ";
  }

  // member: uint64_value
  {
    out << "uint64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Defaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << "\n";
  }

  // member: byte_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "byte_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.byte_value, out);
    out << "\n";
  }

  // member: char_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "char_value: ";
    rosidl_generator_traits::value_to_yaml(msg.char_value, out);
    out << "\n";
  }

  // member: float32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float32_value, out);
    out << "\n";
  }

  // member: float64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float64_value, out);
    out << "\n";
  }

  // member: int8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_value, out);
    out << "\n";
  }

  // member: uint8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_value, out);
    out << "\n";
  }

  // member: int16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_value, out);
    out << "\n";
  }

  // member: uint16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_value, out);
    out << "\n";
  }

  // member: int32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_value, out);
    out << "\n";
  }

  // member: uint32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_value, out);
    out << "\n";
  }

  // member: int64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_value, out);
    out << "\n";
  }

  // member: uint64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Defaults & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::msg::Defaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::msg::Defaults & msg)
{
  return test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::msg::Defaults>()
{
  return "test_msgs::msg::Defaults";
}

template<>
inline const char * name<test_msgs::msg::Defaults>()
{
  return "test_msgs/msg/Defaults";
}

template<>
struct has_fixed_size<test_msgs::msg::Defaults>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::msg::Defaults>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::msg::Defaults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__DEFAULTS__TRAITS_HPP_
