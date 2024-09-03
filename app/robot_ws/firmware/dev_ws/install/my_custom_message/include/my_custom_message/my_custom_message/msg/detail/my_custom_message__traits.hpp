// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_message/msg/detail/my_custom_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyCustomMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: my_integer
  {
    out << "my_integer: ";
    rosidl_generator_traits::value_to_yaml(msg.my_integer, out);
    out << ", ";
  }

  // member: my_float
  {
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: my_integer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_integer: ";
    rosidl_generator_traits::value_to_yaml(msg.my_integer, out);
    out << "\n";
  }

  // member: my_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCustomMessage & msg, bool use_flow_style = false)
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

}  // namespace my_custom_message

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_message::msg::MyCustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_message::msg::MyCustomMessage & msg)
{
  return my_custom_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_message::msg::MyCustomMessage>()
{
  return "my_custom_message::msg::MyCustomMessage";
}

template<>
inline const char * name<my_custom_message::msg::MyCustomMessage>()
{
  return "my_custom_message/msg/MyCustomMessage";
}

template<>
struct has_fixed_size<my_custom_message::msg::MyCustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_message::msg::MyCustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_message::msg::MyCustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_
