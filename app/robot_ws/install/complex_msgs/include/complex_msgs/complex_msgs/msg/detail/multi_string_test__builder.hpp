// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__BUILDER_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace complex_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiStringTest_data4
{
public:
  explicit Init_MultiStringTest_data4(::complex_msgs::msg::MultiStringTest & msg)
  : msg_(msg)
  {}
  ::complex_msgs::msg::MultiStringTest data4(::complex_msgs::msg::MultiStringTest::_data4_type arg)
  {
    msg_.data4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::complex_msgs::msg::MultiStringTest msg_;
};

class Init_MultiStringTest_data3
{
public:
  explicit Init_MultiStringTest_data3(::complex_msgs::msg::MultiStringTest & msg)
  : msg_(msg)
  {}
  Init_MultiStringTest_data4 data3(::complex_msgs::msg::MultiStringTest::_data3_type arg)
  {
    msg_.data3 = std::move(arg);
    return Init_MultiStringTest_data4(msg_);
  }

private:
  ::complex_msgs::msg::MultiStringTest msg_;
};

class Init_MultiStringTest_data2
{
public:
  explicit Init_MultiStringTest_data2(::complex_msgs::msg::MultiStringTest & msg)
  : msg_(msg)
  {}
  Init_MultiStringTest_data3 data2(::complex_msgs::msg::MultiStringTest::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_MultiStringTest_data3(msg_);
  }

private:
  ::complex_msgs::msg::MultiStringTest msg_;
};

class Init_MultiStringTest_data1
{
public:
  Init_MultiStringTest_data1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiStringTest_data2 data1(::complex_msgs::msg::MultiStringTest::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_MultiStringTest_data2(msg_);
  }

private:
  ::complex_msgs::msg::MultiStringTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::complex_msgs::msg::MultiStringTest>()
{
  return complex_msgs::msg::builder::Init_MultiStringTest_data1();
}

}  // namespace complex_msgs

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__BUILDER_HPP_
