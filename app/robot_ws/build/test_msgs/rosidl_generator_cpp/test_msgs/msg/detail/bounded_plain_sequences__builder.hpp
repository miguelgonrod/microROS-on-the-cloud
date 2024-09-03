// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_msgs:msg/BoundedPlainSequences.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__BUILDER_HPP_
#define TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_msgs/msg/detail/bounded_plain_sequences__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundedPlainSequences_alignment_check
{
public:
  explicit Init_BoundedPlainSequences_alignment_check(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  ::test_msgs::msg::BoundedPlainSequences alignment_check(::test_msgs::msg::BoundedPlainSequences::_alignment_check_type arg)
  {
    msg_.alignment_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint64_values_default
{
public:
  explicit Init_BoundedPlainSequences_uint64_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_alignment_check uint64_values_default(::test_msgs::msg::BoundedPlainSequences::_uint64_values_default_type arg)
  {
    msg_.uint64_values_default = std::move(arg);
    return Init_BoundedPlainSequences_alignment_check(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int64_values_default
{
public:
  explicit Init_BoundedPlainSequences_int64_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint64_values_default int64_values_default(::test_msgs::msg::BoundedPlainSequences::_int64_values_default_type arg)
  {
    msg_.int64_values_default = std::move(arg);
    return Init_BoundedPlainSequences_uint64_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint32_values_default
{
public:
  explicit Init_BoundedPlainSequences_uint32_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int64_values_default uint32_values_default(::test_msgs::msg::BoundedPlainSequences::_uint32_values_default_type arg)
  {
    msg_.uint32_values_default = std::move(arg);
    return Init_BoundedPlainSequences_int64_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int32_values_default
{
public:
  explicit Init_BoundedPlainSequences_int32_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint32_values_default int32_values_default(::test_msgs::msg::BoundedPlainSequences::_int32_values_default_type arg)
  {
    msg_.int32_values_default = std::move(arg);
    return Init_BoundedPlainSequences_uint32_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint16_values_default
{
public:
  explicit Init_BoundedPlainSequences_uint16_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int32_values_default uint16_values_default(::test_msgs::msg::BoundedPlainSequences::_uint16_values_default_type arg)
  {
    msg_.uint16_values_default = std::move(arg);
    return Init_BoundedPlainSequences_int32_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int16_values_default
{
public:
  explicit Init_BoundedPlainSequences_int16_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint16_values_default int16_values_default(::test_msgs::msg::BoundedPlainSequences::_int16_values_default_type arg)
  {
    msg_.int16_values_default = std::move(arg);
    return Init_BoundedPlainSequences_uint16_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint8_values_default
{
public:
  explicit Init_BoundedPlainSequences_uint8_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int16_values_default uint8_values_default(::test_msgs::msg::BoundedPlainSequences::_uint8_values_default_type arg)
  {
    msg_.uint8_values_default = std::move(arg);
    return Init_BoundedPlainSequences_int16_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int8_values_default
{
public:
  explicit Init_BoundedPlainSequences_int8_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint8_values_default int8_values_default(::test_msgs::msg::BoundedPlainSequences::_int8_values_default_type arg)
  {
    msg_.int8_values_default = std::move(arg);
    return Init_BoundedPlainSequences_uint8_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_float64_values_default
{
public:
  explicit Init_BoundedPlainSequences_float64_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int8_values_default float64_values_default(::test_msgs::msg::BoundedPlainSequences::_float64_values_default_type arg)
  {
    msg_.float64_values_default = std::move(arg);
    return Init_BoundedPlainSequences_int8_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_float32_values_default
{
public:
  explicit Init_BoundedPlainSequences_float32_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_float64_values_default float32_values_default(::test_msgs::msg::BoundedPlainSequences::_float32_values_default_type arg)
  {
    msg_.float32_values_default = std::move(arg);
    return Init_BoundedPlainSequences_float64_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_char_values_default
{
public:
  explicit Init_BoundedPlainSequences_char_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_float32_values_default char_values_default(::test_msgs::msg::BoundedPlainSequences::_char_values_default_type arg)
  {
    msg_.char_values_default = std::move(arg);
    return Init_BoundedPlainSequences_float32_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_byte_values_default
{
public:
  explicit Init_BoundedPlainSequences_byte_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_char_values_default byte_values_default(::test_msgs::msg::BoundedPlainSequences::_byte_values_default_type arg)
  {
    msg_.byte_values_default = std::move(arg);
    return Init_BoundedPlainSequences_char_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_bool_values_default
{
public:
  explicit Init_BoundedPlainSequences_bool_values_default(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_byte_values_default bool_values_default(::test_msgs::msg::BoundedPlainSequences::_bool_values_default_type arg)
  {
    msg_.bool_values_default = std::move(arg);
    return Init_BoundedPlainSequences_byte_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_defaults_values
{
public:
  explicit Init_BoundedPlainSequences_defaults_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_bool_values_default defaults_values(::test_msgs::msg::BoundedPlainSequences::_defaults_values_type arg)
  {
    msg_.defaults_values = std::move(arg);
    return Init_BoundedPlainSequences_bool_values_default(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_constants_values
{
public:
  explicit Init_BoundedPlainSequences_constants_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_defaults_values constants_values(::test_msgs::msg::BoundedPlainSequences::_constants_values_type arg)
  {
    msg_.constants_values = std::move(arg);
    return Init_BoundedPlainSequences_defaults_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_basic_types_values
{
public:
  explicit Init_BoundedPlainSequences_basic_types_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_constants_values basic_types_values(::test_msgs::msg::BoundedPlainSequences::_basic_types_values_type arg)
  {
    msg_.basic_types_values = std::move(arg);
    return Init_BoundedPlainSequences_constants_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint64_values
{
public:
  explicit Init_BoundedPlainSequences_uint64_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_basic_types_values uint64_values(::test_msgs::msg::BoundedPlainSequences::_uint64_values_type arg)
  {
    msg_.uint64_values = std::move(arg);
    return Init_BoundedPlainSequences_basic_types_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int64_values
{
public:
  explicit Init_BoundedPlainSequences_int64_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint64_values int64_values(::test_msgs::msg::BoundedPlainSequences::_int64_values_type arg)
  {
    msg_.int64_values = std::move(arg);
    return Init_BoundedPlainSequences_uint64_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint32_values
{
public:
  explicit Init_BoundedPlainSequences_uint32_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int64_values uint32_values(::test_msgs::msg::BoundedPlainSequences::_uint32_values_type arg)
  {
    msg_.uint32_values = std::move(arg);
    return Init_BoundedPlainSequences_int64_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int32_values
{
public:
  explicit Init_BoundedPlainSequences_int32_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint32_values int32_values(::test_msgs::msg::BoundedPlainSequences::_int32_values_type arg)
  {
    msg_.int32_values = std::move(arg);
    return Init_BoundedPlainSequences_uint32_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint16_values
{
public:
  explicit Init_BoundedPlainSequences_uint16_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int32_values uint16_values(::test_msgs::msg::BoundedPlainSequences::_uint16_values_type arg)
  {
    msg_.uint16_values = std::move(arg);
    return Init_BoundedPlainSequences_int32_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int16_values
{
public:
  explicit Init_BoundedPlainSequences_int16_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint16_values int16_values(::test_msgs::msg::BoundedPlainSequences::_int16_values_type arg)
  {
    msg_.int16_values = std::move(arg);
    return Init_BoundedPlainSequences_uint16_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_uint8_values
{
public:
  explicit Init_BoundedPlainSequences_uint8_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int16_values uint8_values(::test_msgs::msg::BoundedPlainSequences::_uint8_values_type arg)
  {
    msg_.uint8_values = std::move(arg);
    return Init_BoundedPlainSequences_int16_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_int8_values
{
public:
  explicit Init_BoundedPlainSequences_int8_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_uint8_values int8_values(::test_msgs::msg::BoundedPlainSequences::_int8_values_type arg)
  {
    msg_.int8_values = std::move(arg);
    return Init_BoundedPlainSequences_uint8_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_float64_values
{
public:
  explicit Init_BoundedPlainSequences_float64_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_int8_values float64_values(::test_msgs::msg::BoundedPlainSequences::_float64_values_type arg)
  {
    msg_.float64_values = std::move(arg);
    return Init_BoundedPlainSequences_int8_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_float32_values
{
public:
  explicit Init_BoundedPlainSequences_float32_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_float64_values float32_values(::test_msgs::msg::BoundedPlainSequences::_float32_values_type arg)
  {
    msg_.float32_values = std::move(arg);
    return Init_BoundedPlainSequences_float64_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_char_values
{
public:
  explicit Init_BoundedPlainSequences_char_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_float32_values char_values(::test_msgs::msg::BoundedPlainSequences::_char_values_type arg)
  {
    msg_.char_values = std::move(arg);
    return Init_BoundedPlainSequences_float32_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_byte_values
{
public:
  explicit Init_BoundedPlainSequences_byte_values(::test_msgs::msg::BoundedPlainSequences & msg)
  : msg_(msg)
  {}
  Init_BoundedPlainSequences_char_values byte_values(::test_msgs::msg::BoundedPlainSequences::_byte_values_type arg)
  {
    msg_.byte_values = std::move(arg);
    return Init_BoundedPlainSequences_char_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

class Init_BoundedPlainSequences_bool_values
{
public:
  Init_BoundedPlainSequences_bool_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundedPlainSequences_byte_values bool_values(::test_msgs::msg::BoundedPlainSequences::_bool_values_type arg)
  {
    msg_.bool_values = std::move(arg);
    return Init_BoundedPlainSequences_byte_values(msg_);
  }

private:
  ::test_msgs::msg::BoundedPlainSequences msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_msgs::msg::BoundedPlainSequences>()
{
  return test_msgs::msg::builder::Init_BoundedPlainSequences_bool_values();
}

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__DETAIL__BOUNDED_PLAIN_SEQUENCES__BUILDER_HPP_
