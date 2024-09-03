// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__complex_msgs__msg__MultiStringTest __attribute__((deprecated))
#else
# define DEPRECATED__complex_msgs__msg__MultiStringTest __declspec(deprecated)
#endif

namespace complex_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiStringTest_
{
  using Type = MultiStringTest_<ContainerAllocator>;

  explicit MultiStringTest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = "";
      this->data2 = "";
      this->data3 = "";
      this->data4 = "";
    }
  }

  explicit MultiStringTest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data1(_alloc),
    data2(_alloc),
    data3(_alloc),
    data4(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = "";
      this->data2 = "";
      this->data3 = "";
      this->data4 = "";
    }
  }

  // field types and members
  using _data1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data1_type data1;
  using _data2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data2_type data2;
  using _data3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data3_type data3;
  using _data4_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data4_type data4;

  // setters for named parameter idiom
  Type & set__data1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data1 = _arg;
    return *this;
  }
  Type & set__data2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data2 = _arg;
    return *this;
  }
  Type & set__data3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data3 = _arg;
    return *this;
  }
  Type & set__data4(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    complex_msgs::msg::MultiStringTest_<ContainerAllocator> *;
  using ConstRawPtr =
    const complex_msgs::msg::MultiStringTest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      complex_msgs::msg::MultiStringTest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      complex_msgs::msg::MultiStringTest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__complex_msgs__msg__MultiStringTest
    std::shared_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__complex_msgs__msg__MultiStringTest
    std::shared_ptr<complex_msgs::msg::MultiStringTest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiStringTest_ & other) const
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
    return true;
  }
  bool operator!=(const MultiStringTest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiStringTest_

// alias to use template instance with default allocator
using MultiStringTest =
  complex_msgs::msg::MultiStringTest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace complex_msgs

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__STRUCT_HPP_
