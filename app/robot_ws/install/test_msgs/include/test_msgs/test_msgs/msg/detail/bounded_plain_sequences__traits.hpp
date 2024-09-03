// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg/BoundedPlainSequences.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/msg/detail/bounded_plain_sequences__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'basic_types_values'
#include "test_msgs/msg/detail/basic_types__traits.hpp"
// Member 'constants_values'
#include "test_msgs/msg/detail/constants__traits.hpp"
// Member 'defaults_values'
#include "test_msgs/msg/detail/defaults__traits.hpp"

namespace test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundedPlainSequences & msg,
  std::ostream & out)
{
  out << "{";
  // member: bool_values
  {
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []";
    } else {
      out << "bool_values: [";
      size_t pending_items = msg.bool_values.size();
      for (auto item : msg.bool_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: byte_values
  {
    if (msg.byte_values.size() == 0) {
      out << "byte_values: []";
    } else {
      out << "byte_values: [";
      size_t pending_items = msg.byte_values.size();
      for (auto item : msg.byte_values) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: char_values
  {
    if (msg.char_values.size() == 0) {
      out << "char_values: []";
    } else {
      out << "char_values: [";
      size_t pending_items = msg.char_values.size();
      for (auto item : msg.char_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float32_values
  {
    if (msg.float32_values.size() == 0) {
      out << "float32_values: []";
    } else {
      out << "float32_values: [";
      size_t pending_items = msg.float32_values.size();
      for (auto item : msg.float32_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float64_values
  {
    if (msg.float64_values.size() == 0) {
      out << "float64_values: []";
    } else {
      out << "float64_values: [";
      size_t pending_items = msg.float64_values.size();
      for (auto item : msg.float64_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int8_values
  {
    if (msg.int8_values.size() == 0) {
      out << "int8_values: []";
    } else {
      out << "int8_values: [";
      size_t pending_items = msg.int8_values.size();
      for (auto item : msg.int8_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint8_values
  {
    if (msg.uint8_values.size() == 0) {
      out << "uint8_values: []";
    } else {
      out << "uint8_values: [";
      size_t pending_items = msg.uint8_values.size();
      for (auto item : msg.uint8_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int16_values
  {
    if (msg.int16_values.size() == 0) {
      out << "int16_values: []";
    } else {
      out << "int16_values: [";
      size_t pending_items = msg.int16_values.size();
      for (auto item : msg.int16_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint16_values
  {
    if (msg.uint16_values.size() == 0) {
      out << "uint16_values: []";
    } else {
      out << "uint16_values: [";
      size_t pending_items = msg.uint16_values.size();
      for (auto item : msg.uint16_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int32_values
  {
    if (msg.int32_values.size() == 0) {
      out << "int32_values: []";
    } else {
      out << "int32_values: [";
      size_t pending_items = msg.int32_values.size();
      for (auto item : msg.int32_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint32_values
  {
    if (msg.uint32_values.size() == 0) {
      out << "uint32_values: []";
    } else {
      out << "uint32_values: [";
      size_t pending_items = msg.uint32_values.size();
      for (auto item : msg.uint32_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int64_values
  {
    if (msg.int64_values.size() == 0) {
      out << "int64_values: []";
    } else {
      out << "int64_values: [";
      size_t pending_items = msg.int64_values.size();
      for (auto item : msg.int64_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint64_values
  {
    if (msg.uint64_values.size() == 0) {
      out << "uint64_values: []";
    } else {
      out << "uint64_values: [";
      size_t pending_items = msg.uint64_values.size();
      for (auto item : msg.uint64_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: basic_types_values
  {
    if (msg.basic_types_values.size() == 0) {
      out << "basic_types_values: []";
    } else {
      out << "basic_types_values: [";
      size_t pending_items = msg.basic_types_values.size();
      for (auto item : msg.basic_types_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constants_values
  {
    if (msg.constants_values.size() == 0) {
      out << "constants_values: []";
    } else {
      out << "constants_values: [";
      size_t pending_items = msg.constants_values.size();
      for (auto item : msg.constants_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: defaults_values
  {
    if (msg.defaults_values.size() == 0) {
      out << "defaults_values: []";
    } else {
      out << "defaults_values: [";
      size_t pending_items = msg.defaults_values.size();
      for (auto item : msg.defaults_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bool_values_default
  {
    if (msg.bool_values_default.size() == 0) {
      out << "bool_values_default: []";
    } else {
      out << "bool_values_default: [";
      size_t pending_items = msg.bool_values_default.size();
      for (auto item : msg.bool_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: byte_values_default
  {
    if (msg.byte_values_default.size() == 0) {
      out << "byte_values_default: []";
    } else {
      out << "byte_values_default: [";
      size_t pending_items = msg.byte_values_default.size();
      for (auto item : msg.byte_values_default) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: char_values_default
  {
    if (msg.char_values_default.size() == 0) {
      out << "char_values_default: []";
    } else {
      out << "char_values_default: [";
      size_t pending_items = msg.char_values_default.size();
      for (auto item : msg.char_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float32_values_default
  {
    if (msg.float32_values_default.size() == 0) {
      out << "float32_values_default: []";
    } else {
      out << "float32_values_default: [";
      size_t pending_items = msg.float32_values_default.size();
      for (auto item : msg.float32_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float64_values_default
  {
    if (msg.float64_values_default.size() == 0) {
      out << "float64_values_default: []";
    } else {
      out << "float64_values_default: [";
      size_t pending_items = msg.float64_values_default.size();
      for (auto item : msg.float64_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int8_values_default
  {
    if (msg.int8_values_default.size() == 0) {
      out << "int8_values_default: []";
    } else {
      out << "int8_values_default: [";
      size_t pending_items = msg.int8_values_default.size();
      for (auto item : msg.int8_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint8_values_default
  {
    if (msg.uint8_values_default.size() == 0) {
      out << "uint8_values_default: []";
    } else {
      out << "uint8_values_default: [";
      size_t pending_items = msg.uint8_values_default.size();
      for (auto item : msg.uint8_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int16_values_default
  {
    if (msg.int16_values_default.size() == 0) {
      out << "int16_values_default: []";
    } else {
      out << "int16_values_default: [";
      size_t pending_items = msg.int16_values_default.size();
      for (auto item : msg.int16_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint16_values_default
  {
    if (msg.uint16_values_default.size() == 0) {
      out << "uint16_values_default: []";
    } else {
      out << "uint16_values_default: [";
      size_t pending_items = msg.uint16_values_default.size();
      for (auto item : msg.uint16_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int32_values_default
  {
    if (msg.int32_values_default.size() == 0) {
      out << "int32_values_default: []";
    } else {
      out << "int32_values_default: [";
      size_t pending_items = msg.int32_values_default.size();
      for (auto item : msg.int32_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint32_values_default
  {
    if (msg.uint32_values_default.size() == 0) {
      out << "uint32_values_default: []";
    } else {
      out << "uint32_values_default: [";
      size_t pending_items = msg.uint32_values_default.size();
      for (auto item : msg.uint32_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int64_values_default
  {
    if (msg.int64_values_default.size() == 0) {
      out << "int64_values_default: []";
    } else {
      out << "int64_values_default: [";
      size_t pending_items = msg.int64_values_default.size();
      for (auto item : msg.int64_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint64_values_default
  {
    if (msg.uint64_values_default.size() == 0) {
      out << "uint64_values_default: []";
    } else {
      out << "uint64_values_default: [";
      size_t pending_items = msg.uint64_values_default.size();
      for (auto item : msg.uint64_values_default) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alignment_check
  {
    out << "alignment_check: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_check, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundedPlainSequences & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []\n";
    } else {
      out << "bool_values:\n";
      for (auto item : msg.bool_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values.size() == 0) {
      out << "byte_values: []\n";
    } else {
      out << "byte_values:\n";
      for (auto item : msg.byte_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values.size() == 0) {
      out << "char_values: []\n";
    } else {
      out << "char_values:\n";
      for (auto item : msg.char_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values.size() == 0) {
      out << "float32_values: []\n";
    } else {
      out << "float32_values:\n";
      for (auto item : msg.float32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values.size() == 0) {
      out << "float64_values: []\n";
    } else {
      out << "float64_values:\n";
      for (auto item : msg.float64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values.size() == 0) {
      out << "int8_values: []\n";
    } else {
      out << "int8_values:\n";
      for (auto item : msg.int8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values.size() == 0) {
      out << "uint8_values: []\n";
    } else {
      out << "uint8_values:\n";
      for (auto item : msg.uint8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values.size() == 0) {
      out << "int16_values: []\n";
    } else {
      out << "int16_values:\n";
      for (auto item : msg.int16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values.size() == 0) {
      out << "uint16_values: []\n";
    } else {
      out << "uint16_values:\n";
      for (auto item : msg.uint16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values.size() == 0) {
      out << "int32_values: []\n";
    } else {
      out << "int32_values:\n";
      for (auto item : msg.int32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values.size() == 0) {
      out << "uint32_values: []\n";
    } else {
      out << "uint32_values:\n";
      for (auto item : msg.uint32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values.size() == 0) {
      out << "int64_values: []\n";
    } else {
      out << "int64_values:\n";
      for (auto item : msg.int64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values.size() == 0) {
      out << "uint64_values: []\n";
    } else {
      out << "uint64_values:\n";
      for (auto item : msg.uint64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: basic_types_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.basic_types_values.size() == 0) {
      out << "basic_types_values: []\n";
    } else {
      out << "basic_types_values:\n";
      for (auto item : msg.basic_types_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: constants_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constants_values.size() == 0) {
      out << "constants_values: []\n";
    } else {
      out << "constants_values:\n";
      for (auto item : msg.constants_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: defaults_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.defaults_values.size() == 0) {
      out << "defaults_values: []\n";
    } else {
      out << "defaults_values:\n";
      for (auto item : msg.defaults_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bool_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values_default.size() == 0) {
      out << "bool_values_default: []\n";
    } else {
      out << "bool_values_default:\n";
      for (auto item : msg.bool_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values_default.size() == 0) {
      out << "byte_values_default: []\n";
    } else {
      out << "byte_values_default:\n";
      for (auto item : msg.byte_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values_default.size() == 0) {
      out << "char_values_default: []\n";
    } else {
      out << "char_values_default:\n";
      for (auto item : msg.char_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values_default.size() == 0) {
      out << "float32_values_default: []\n";
    } else {
      out << "float32_values_default:\n";
      for (auto item : msg.float32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values_default.size() == 0) {
      out << "float64_values_default: []\n";
    } else {
      out << "float64_values_default:\n";
      for (auto item : msg.float64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values_default.size() == 0) {
      out << "int8_values_default: []\n";
    } else {
      out << "int8_values_default:\n";
      for (auto item : msg.int8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values_default.size() == 0) {
      out << "uint8_values_default: []\n";
    } else {
      out << "uint8_values_default:\n";
      for (auto item : msg.uint8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values_default.size() == 0) {
      out << "int16_values_default: []\n";
    } else {
      out << "int16_values_default:\n";
      for (auto item : msg.int16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values_default.size() == 0) {
      out << "uint16_values_default: []\n";
    } else {
      out << "uint16_values_default:\n";
      for (auto item : msg.uint16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values_default.size() == 0) {
      out << "int32_values_default: []\n";
    } else {
      out << "int32_values_default:\n";
      for (auto item : msg.int32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values_default.size() == 0) {
      out << "uint32_values_default: []\n";
    } else {
      out << "uint32_values_default:\n";
      for (auto item : msg.uint32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values_default.size() == 0) {
      out << "int64_values_default: []\n";
    } else {
      out << "int64_values_default:\n";
      for (auto item : msg.int64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values_default.size() == 0) {
      out << "uint64_values_default: []\n";
    } else {
      out << "uint64_values_default:\n";
      for (auto item : msg.uint64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: alignment_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment_check: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_check, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundedPlainSequences & msg, bool use_flow_style = false)
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
  const test_msgs::msg::BoundedPlainSequences & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::msg::BoundedPlainSequences & msg)
{
  return test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::msg::BoundedPlainSequences>()
{
  return "test_msgs::msg::BoundedPlainSequences";
}

template<>
inline const char * name<test_msgs::msg::BoundedPlainSequences>()
{
  return "test_msgs/msg/BoundedPlainSequences";
}

template<>
struct has_fixed_size<test_msgs::msg::BoundedPlainSequences>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::BoundedPlainSequences>
  : std::integral_constant<bool, has_bounded_size<test_msgs::msg::BasicTypes>::value && has_bounded_size<test_msgs::msg::Constants>::value && has_bounded_size<test_msgs::msg::Defaults>::value> {};

template<>
struct is_message<test_msgs::msg::BoundedPlainSequences>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__TRAITS_HPP_
