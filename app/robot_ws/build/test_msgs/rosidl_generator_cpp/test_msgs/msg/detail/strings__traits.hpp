// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__STRINGS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__STRINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/msg/detail/strings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Strings & msg,
  std::ostream & out)
{
  out << "{";
  // member: string_value
  {
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << ", ";
  }

  // member: string_value_default1
  {
    out << "string_value_default1: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default1, out);
    out << ", ";
  }

  // member: string_value_default2
  {
    out << "string_value_default2: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default2, out);
    out << ", ";
  }

  // member: string_value_default3
  {
    out << "string_value_default3: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default3, out);
    out << ", ";
  }

  // member: string_value_default4
  {
    out << "string_value_default4: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default4, out);
    out << ", ";
  }

  // member: string_value_default5
  {
    out << "string_value_default5: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default5, out);
    out << ", ";
  }

  // member: bounded_string_value
  {
    out << "bounded_string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value, out);
    out << ", ";
  }

  // member: bounded_string_value_default1
  {
    out << "bounded_string_value_default1: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default1, out);
    out << ", ";
  }

  // member: bounded_string_value_default2
  {
    out << "bounded_string_value_default2: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default2, out);
    out << ", ";
  }

  // member: bounded_string_value_default3
  {
    out << "bounded_string_value_default3: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default3, out);
    out << ", ";
  }

  // member: bounded_string_value_default4
  {
    out << "bounded_string_value_default4: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default4, out);
    out << ", ";
  }

  // member: bounded_string_value_default5
  {
    out << "bounded_string_value_default5: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Strings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << "\n";
  }

  // member: string_value_default1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value_default1: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default1, out);
    out << "\n";
  }

  // member: string_value_default2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value_default2: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default2, out);
    out << "\n";
  }

  // member: string_value_default3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value_default3: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default3, out);
    out << "\n";
  }

  // member: string_value_default4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value_default4: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default4, out);
    out << "\n";
  }

  // member: string_value_default5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value_default5: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value_default5, out);
    out << "\n";
  }

  // member: bounded_string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value, out);
    out << "\n";
  }

  // member: bounded_string_value_default1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value_default1: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default1, out);
    out << "\n";
  }

  // member: bounded_string_value_default2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value_default2: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default2, out);
    out << "\n";
  }

  // member: bounded_string_value_default3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value_default3: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default3, out);
    out << "\n";
  }

  // member: bounded_string_value_default4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value_default4: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default4, out);
    out << "\n";
  }

  // member: bounded_string_value_default5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value_default5: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value_default5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Strings & msg, bool use_flow_style = false)
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
  const test_msgs::msg::Strings & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::msg::Strings & msg)
{
  return test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::msg::Strings>()
{
  return "test_msgs::msg::Strings";
}

template<>
inline const char * name<test_msgs::msg::Strings>()
{
  return "test_msgs/msg/Strings";
}

template<>
struct has_fixed_size<test_msgs::msg::Strings>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::Strings>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::msg::Strings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__STRINGS__TRAITS_HPP_
