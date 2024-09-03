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

class Init_MyCustomMessage_my_float
{
public:
  explicit Init_MyCustomMessage_my_float(::my_custom_message::msg::MyCustomMessage & msg)
  : msg_(msg)
  {}
  ::my_custom_message::msg::MyCustomMessage my_float(::my_custom_message::msg::MyCustomMessage::_my_float_type arg)
  {
    msg_.my_float = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_message::msg::MyCustomMessage msg_;
};

class Init_MyCustomMessage_my_integer
{
public:
  Init_MyCustomMessage_my_integer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyCustomMessage_my_float my_integer(::my_custom_message::msg::MyCustomMessage::_my_integer_type arg)
  {
    msg_.my_integer = std::move(arg);
    return Init_MyCustomMessage_my_float(msg_);
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
  return my_custom_message::msg::builder::Init_MyCustomMessage_my_integer();
}

}  // namespace my_custom_message

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__BUILDER_HPP_
