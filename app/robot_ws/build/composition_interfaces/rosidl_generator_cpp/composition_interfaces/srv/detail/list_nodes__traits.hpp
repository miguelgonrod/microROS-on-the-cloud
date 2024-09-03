// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "composition_interfaces/srv/detail/list_nodes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace composition_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListNodes_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListNodes_Request & msg, bool use_flow_style = false)
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

}  // namespace composition_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use composition_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const composition_interfaces::srv::ListNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  composition_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use composition_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const composition_interfaces::srv::ListNodes_Request & msg)
{
  return composition_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Request>()
{
  return "composition_interfaces::srv::ListNodes_Request";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes_Request>()
{
  return "composition_interfaces/srv/ListNodes_Request";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<composition_interfaces::srv::ListNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace composition_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListNodes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_node_names
  {
    if (msg.full_node_names.size() == 0) {
      out << "full_node_names: []";
    } else {
      out << "full_node_names: [";
      size_t pending_items = msg.full_node_names.size();
      for (auto item : msg.full_node_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unique_ids
  {
    if (msg.unique_ids.size() == 0) {
      out << "unique_ids: []";
    } else {
      out << "unique_ids: [";
      size_t pending_items = msg.unique_ids.size();
      for (auto item : msg.unique_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_node_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.full_node_names.size() == 0) {
      out << "full_node_names: []\n";
    } else {
      out << "full_node_names:\n";
      for (auto item : msg.full_node_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unique_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unique_ids.size() == 0) {
      out << "unique_ids: []\n";
    } else {
      out << "unique_ids:\n";
      for (auto item : msg.unique_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListNodes_Response & msg, bool use_flow_style = false)
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

}  // namespace composition_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use composition_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const composition_interfaces::srv::ListNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  composition_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use composition_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const composition_interfaces::srv::ListNodes_Response & msg)
{
  return composition_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Response>()
{
  return "composition_interfaces::srv::ListNodes_Response";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes_Response>()
{
  return "composition_interfaces/srv/ListNodes_Response";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<composition_interfaces::srv::ListNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes>()
{
  return "composition_interfaces::srv::ListNodes";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes>()
{
  return "composition_interfaces/srv/ListNodes";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_fixed_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_bounded_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

template<>
struct is_service<composition_interfaces::srv::ListNodes>
  : std::true_type
{
};

template<>
struct is_service_request<composition_interfaces::srv::ListNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<composition_interfaces::srv::ListNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_
