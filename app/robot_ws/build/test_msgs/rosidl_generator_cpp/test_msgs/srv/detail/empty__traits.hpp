// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
#define TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/srv/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Empty_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::srv::Empty_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::srv::Empty_Request & msg)
{
  return test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::srv::Empty_Request>()
{
  return "test_msgs::srv::Empty_Request";
}

template<>
inline const char * name<test_msgs::srv::Empty_Request>()
{
  return "test_msgs/srv/Empty_Request";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::srv::Empty_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Empty_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::srv::Empty_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::srv::Empty_Response & msg)
{
  return test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::srv::Empty_Response>()
{
  return "test_msgs::srv::Empty_Response";
}

template<>
inline const char * name<test_msgs::srv::Empty_Response>()
{
  return "test_msgs/srv/Empty_Response";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::srv::Empty_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::srv::Empty>()
{
  return "test_msgs::srv::Empty";
}

template<>
inline const char * name<test_msgs::srv::Empty>()
{
  return "test_msgs/srv/Empty";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::srv::Empty_Request>::value &&
    has_fixed_size<test_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::srv::Empty_Request>::value &&
    has_bounded_size<test_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct is_service<test_msgs::srv::Empty>
  : std::true_type
{
};

template<>
struct is_service_request<test_msgs::srv::Empty_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_msgs::srv::Empty_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
