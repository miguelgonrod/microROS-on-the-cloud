// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "complex_msgs/msg/detail/nested_msg_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data14'
#include "complex_msgs/msg/detail/multi_string_test__traits.hpp"

namespace complex_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NestedMsgTest & msg,
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
    rosidl_generator_traits::character_value_to_yaml(msg.data2, out);
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
    out << ", ";
  }

  // member: data5
  {
    out << "data5: ";
    rosidl_generator_traits::value_to_yaml(msg.data5, out);
    out << ", ";
  }

  // member: data6
  {
    out << "data6: ";
    rosidl_generator_traits::value_to_yaml(msg.data6, out);
    out << ", ";
  }

  // member: data7
  {
    out << "data7: ";
    rosidl_generator_traits::value_to_yaml(msg.data7, out);
    out << ", ";
  }

  // member: data8
  {
    out << "data8: ";
    rosidl_generator_traits::value_to_yaml(msg.data8, out);
    out << ", ";
  }

  // member: data9
  {
    out << "data9: ";
    rosidl_generator_traits::value_to_yaml(msg.data9, out);
    out << ", ";
  }

  // member: data10
  {
    out << "data10: ";
    rosidl_generator_traits::value_to_yaml(msg.data10, out);
    out << ", ";
  }

  // member: data11
  {
    out << "data11: ";
    rosidl_generator_traits::value_to_yaml(msg.data11, out);
    out << ", ";
  }

  // member: data12
  {
    out << "data12: ";
    rosidl_generator_traits::value_to_yaml(msg.data12, out);
    out << ", ";
  }

  // member: data13
  {
    out << "data13: ";
    rosidl_generator_traits::value_to_yaml(msg.data13, out);
    out << ", ";
  }

  // member: data14
  {
    out << "data14: ";
    to_flow_style_yaml(msg.data14, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NestedMsgTest & msg,
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
    rosidl_generator_traits::character_value_to_yaml(msg.data2, out);
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

  // member: data5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data5: ";
    rosidl_generator_traits::value_to_yaml(msg.data5, out);
    out << "\n";
  }

  // member: data6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data6: ";
    rosidl_generator_traits::value_to_yaml(msg.data6, out);
    out << "\n";
  }

  // member: data7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data7: ";
    rosidl_generator_traits::value_to_yaml(msg.data7, out);
    out << "\n";
  }

  // member: data8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data8: ";
    rosidl_generator_traits::value_to_yaml(msg.data8, out);
    out << "\n";
  }

  // member: data9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data9: ";
    rosidl_generator_traits::value_to_yaml(msg.data9, out);
    out << "\n";
  }

  // member: data10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data10: ";
    rosidl_generator_traits::value_to_yaml(msg.data10, out);
    out << "\n";
  }

  // member: data11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data11: ";
    rosidl_generator_traits::value_to_yaml(msg.data11, out);
    out << "\n";
  }

  // member: data12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data12: ";
    rosidl_generator_traits::value_to_yaml(msg.data12, out);
    out << "\n";
  }

  // member: data13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data13: ";
    rosidl_generator_traits::value_to_yaml(msg.data13, out);
    out << "\n";
  }

  // member: data14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data14:\n";
    to_block_style_yaml(msg.data14, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NestedMsgTest & msg, bool use_flow_style = false)
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
  const complex_msgs::msg::NestedMsgTest & msg,
  std::ostream & out, size_t indentation = 0)
{
  complex_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use complex_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const complex_msgs::msg::NestedMsgTest & msg)
{
  return complex_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<complex_msgs::msg::NestedMsgTest>()
{
  return "complex_msgs::msg::NestedMsgTest";
}

template<>
inline const char * name<complex_msgs::msg::NestedMsgTest>()
{
  return "complex_msgs/msg/NestedMsgTest";
}

template<>
struct has_fixed_size<complex_msgs::msg::NestedMsgTest>
  : std::integral_constant<bool, has_fixed_size<complex_msgs::msg::MultiStringTest>::value> {};

template<>
struct has_bounded_size<complex_msgs::msg::NestedMsgTest>
  : std::integral_constant<bool, has_bounded_size<complex_msgs::msg::MultiStringTest>::value> {};

template<>
struct is_message<complex_msgs::msg::NestedMsgTest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_
