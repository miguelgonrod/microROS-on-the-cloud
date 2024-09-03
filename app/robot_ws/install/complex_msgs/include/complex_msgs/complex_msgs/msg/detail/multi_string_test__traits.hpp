// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace complex_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiStringTest & msg,
  std::ostream & out)
{
  out << "{";
  // member: data1
  {
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << ", ";
  }

  // member: data2
  {
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << ", ";
  }

  // member: data3
  {
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << ", ";
  }

  // member: data4
  {
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiStringTest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << "\n";
  }

  // member: data2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << "\n";
  }

  // member: data3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << "\n";
  }

  // member: data4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiStringTest & msg, bool use_flow_style = false)
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

}  // namespace complex_msgs

namespace rosidl_generator_traits
{

[[deprecated("use complex_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const complex_msgs::msg::MultiStringTest & msg,
  std::ostream & out, size_t indentation = 0)
{
  complex_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use complex_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const complex_msgs::msg::MultiStringTest & msg)
{
  return complex_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<complex_msgs::msg::MultiStringTest>()
{
  return "complex_msgs::msg::MultiStringTest";
}

template<>
inline const char * name<complex_msgs::msg::MultiStringTest>()
{
  return "complex_msgs/msg/MultiStringTest";
}

template<>
struct has_fixed_size<complex_msgs::msg::MultiStringTest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<complex_msgs::msg::MultiStringTest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<complex_msgs::msg::MultiStringTest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_
