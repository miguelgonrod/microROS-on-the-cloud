// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data14'
#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__complex_msgs__msg__NestedMsgTest __attribute__((deprecated))
#else
# define DEPRECATED__complex_msgs__msg__NestedMsgTest __declspec(deprecated)
#endif

namespace complex_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NestedMsgTest_
{
  using Type = NestedMsgTest_<ContainerAllocator>;

  explicit NestedMsgTest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data14(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = false;
      this->data2 = 0;
      this->data3 = 0;
      this->data4 = 0.0f;
      this->data5 = 0.0;
      this->data6 = 0;
      this->data7 = 0;
      this->data8 = 0;
      this->data9 = 0;
      this->data10 = 0l;
      this->data11 = 0ul;
      this->data12 = 0ll;
      this->data13 = 0ull;
    }
  }

  explicit NestedMsgTest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data14(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = false;
      this->data2 = 0;
      this->data3 = 0;
      this->data4 = 0.0f;
      this->data5 = 0.0;
      this->data6 = 0;
      this->data7 = 0;
      this->data8 = 0;
      this->data9 = 0;
      this->data10 = 0l;
      this->data11 = 0ul;
      this->data12 = 0ll;
      this->data13 = 0ull;
    }
  }

  // field types and members
  using _data1_type =
    bool;
  _data1_type data1;
  using _data2_type =
    unsigned char;
  _data2_type data2;
  using _data3_type =
    uint8_t;
  _data3_type data3;
  using _data4_type =
    float;
  _data4_type data4;
  using _data5_type =
    double;
  _data5_type data5;
  using _data6_type =
    int8_t;
  _data6_type data6;
  using _data7_type =
    uint8_t;
  _data7_type data7;
  using _data8_type =
    int16_t;
  _data8_type data8;
  using _data9_type =
    uint16_t;
  _data9_type data9;
  using _data10_type =
    int32_t;
  _data10_type data10;
  using _data11_type =
    uint32_t;
  _data11_type data11;
  using _data12_type =
    int64_t;
  _data12_type data12;
  using _data13_type =
    uint64_t;
  _data13_type data13;
  using _data14_type =
    complex_msgs::msg::MultiStringTest_<ContainerAllocator>;
  _data14_type data14;

  // setters for named parameter idiom
  Type & set__data1(
    const bool & _arg)
  {
    this->data1 = _arg;
    return *this;
  }
  Type & set__data2(
    const unsigned char & _arg)
  {
    this->data2 = _arg;
    return *this;
  }
  Type & set__data3(
    const uint8_t & _arg)
  {
    this->data3 = _arg;
    return *this;
  }
  Type & set__data4(
    const float & _arg)
  {
    this->data4 = _arg;
    return *this;
  }
  Type & set__data5(
    const double & _arg)
  {
    this->data5 = _arg;
    return *this;
  }
  Type & set__data6(
    const int8_t & _arg)
  {
    this->data6 = _arg;
    return *this;
  }
  Type & set__data7(
    const uint8_t & _arg)
  {
    this->data7 = _arg;
    return *this;
  }
  Type & set__data8(
    const int16_t & _arg)
  {
    this->data8 = _arg;
    return *this;
  }
  Type & set__data9(
    const uint16_t & _arg)
  {
    this->data9 = _arg;
    return *this;
  }
  Type & set__data10(
    const int32_t & _arg)
  {
    this->data10 = _arg;
    return *this;
  }
  Type & set__data11(
    const uint32_t & _arg)
  {
    this->data11 = _arg;
    return *this;
  }
  Type & set__data12(
    const int64_t & _arg)
  {
    this->data12 = _arg;
    return *this;
  }
  Type & set__data13(
    const uint64_t & _arg)
  {
    this->data13 = _arg;
    return *this;
  }
  Type & set__data14(
    const complex_msgs::msg::MultiStringTest_<ContainerAllocator> & _arg)
  {
    this->data14 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    complex_msgs::msg::NestedMsgTest_<ContainerAllocator> *;
  using ConstRawPtr =
    const complex_msgs::msg::NestedMsgTest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      complex_msgs::msg::NestedMsgTest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      complex_msgs::msg::NestedMsgTest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__complex_msgs__msg__NestedMsgTest
    std::shared_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__complex_msgs__msg__NestedMsgTest
    std::shared_ptr<complex_msgs::msg::NestedMsgTest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NestedMsgTest_ & other) const
  {
    if (this->data1 != other.data1) {
      return false;
    }
    if (this->data2 != other.data2) {
      return false;
    }
    if (this->data3 != other.data3) {
      return false;
    }
    if (this->data4 != other.data4) {
      return false;
    }
    if (this->data5 != other.data5) {
      return false;
    }
    if (this->data6 != other.data6) {
      return false;
    }
    if (this->data7 != other.data7) {
      return false;
    }
    if (this->data8 != other.data8) {
      return false;
    }
    if (this->data9 != other.data9) {
      return false;
    }
    if (this->data10 != other.data10) {
      return false;
    }
    if (this->data11 != other.data11) {
      return false;
    }
    if (this->data12 != other.data12) {
      return false;
    }
    if (this->data13 != other.data13) {
      return false;
    }
    if (this->data14 != other.data14) {
      return false;
    }
    return true;
  }
  bool operator!=(const NestedMsgTest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NestedMsgTest_

// alias to use template instance with default allocator
using NestedMsgTest =
  complex_msgs::msg::NestedMsgTest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace complex_msgs

#endif  // COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__STRUCT_HPP_
