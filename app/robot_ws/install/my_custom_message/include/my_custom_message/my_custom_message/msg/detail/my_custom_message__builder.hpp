// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__BUILDER_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_message/msg/detail/my_custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_message
{

namespace msg
{

namespace builder
{

class Init_MyCustomMessage_uint64_test
{
public:
  explicit Init_MyCustomMessage_uint64_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  ::my_custom_message::msg::MyCustomMessage uint64_test(::my_custom_message::msg::MyCustomMessage::_uint64_test_type arg)
  {
    msg_.uint64_test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_int64_test
{
public:
  explicit Init_MyCustomMessage_int64_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_uint64_test int64_test(::my_custom_message::msg::MyCustomMessage::_int64_test_type arg)
  {
    msg_.int64_test = std::move(arg);
    return Init_MyCustomMessage_uint64_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_uint32_test
{
public:
  explicit Init_MyCustomMessage_uint32_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_int64_test uint32_test(::my_custom_message::msg::MyCustomMessage::_uint32_test_type arg)
  {
    msg_.uint32_test = std::move(arg);
    return Init_MyCustomMessage_int64_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_int32_test
{
public:
  explicit Init_MyCustomMessage_int32_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_uint32_test int32_test(::my_custom_message::msg::MyCustomMessage::_int32_test_type arg)
  {
    msg_.int32_test = std::move(arg);
    return Init_MyCustomMessage_uint32_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_uint16_test
{
public:
  explicit Init_MyCustomMessage_uint16_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_int32_test uint16_test(::my_custom_message::msg::MyCustomMessage::_uint16_test_type arg)
  {
    msg_.uint16_test = std::move(arg);
    return Init_MyCustomMessage_int32_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_int16_test
{
public:
  explicit Init_MyCustomMessage_int16_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_uint16_test int16_test(::my_custom_message::msg::MyCustomMessage::_int16_test_type arg)
  {
    msg_.int16_test = std::move(arg);
    return Init_MyCustomMessage_uint16_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_uint8_test
{
public:
  explicit Init_MyCustomMessage_uint8_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_int16_test uint8_test(::my_custom_message::msg::MyCustomMessage::_uint8_test_type arg)
  {
    msg_.uint8_test = std::move(arg);
    return Init_MyCustomMessage_int16_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_int8_test
{
public:
  explicit Init_MyCustomMessage_int8_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_uint8_test int8_test(::my_custom_message::msg::MyCustomMessage::_int8_test_type arg)
  {
    msg_.int8_test = std::move(arg);
    return Init_MyCustomMessage_uint8_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_double_test
{
public:
  explicit Init_MyCustomMessage_double_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_int8_test double_test(::my_custom_message::msg::MyCustomMessage::_double_test_type arg)
  {
    msg_.double_test = std::move(arg);
    return Init_MyCustomMessage_int8_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_float32_test
{
public:
  explicit Init_MyCustomMessage_float32_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_double_test float32_test(::my_custom_message::msg::MyCustomMessage::_float32_test_type arg)
  {
    msg_.float32_test = std::move(arg);
    return Init_MyCustomMessage_double_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_char_test
{
public:
  explicit Init_MyCustomMessage_char_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_float32_test char_test(::my_custom_message::msg::MyCustomMessage::_char_test_type arg)
  {
    msg_.char_test = std::move(arg);
    return Init_MyCustomMessage_float32_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_byte_test
{
public:
  explicit Init_MyCustomMessage_byte_test(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  Init_MyCustomMessage_char_test byte_test(::my_custom_message::msg::MyCustomMessage::_byte_test_type arg)
  {
    msg_.byte_test = std::move(arg);
    return Init_MyCustomMessage_char_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_bool_test
{
public:
  Init_MyCustomMessage_bool_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyCustomMessage_byte_test bool_test(::my_custom_message::msg::MyCustomMessage::_bool_test_type arg)
  {
    msg_.bool_test = std::move(arg);
    return Init_MyCustomMessage_byte_test(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_message::msg::MyCustomMessage>()
{
  return my_custom_message::msg::builder::Init_MyCustomMessage_bool_test();
}

}  // namespace my_custom_message

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__BUILDER_HPP_
