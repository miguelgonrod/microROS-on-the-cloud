// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_message__msg__MyCustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_message__msg__MyCustomMessage __declspec(deprecated)
#endif

namespace my_custom_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyCustomMessage_
{
  using Type = MyCustomMessage_<ContainerAllocator>;

  explicit MyCustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_integer = 0l;
      this->my_float = 0.0f;
    }
  }

  explicit MyCustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_integer = 0l;
      this->my_float = 0.0f;
    }
  }

  // field types and members
  using _my_integer_type =
    int32_t;
  _my_integer_type my_integer;
  using _my_float_type =
    float;
  _my_float_type my_float;

  // setters for named parameter idiom
  Type & set__my_integer(
    const int32_t & _arg)
  {
    this->my_integer = _arg;
    return *this;
  }
  Type & set__my_float(
    const float & _arg)
  {
    this->my_float = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_message::msg::MyCustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_message::msg::MyCustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_message__msg__MyCustomMessage
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_message__msg__MyCustomMessage
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyCustomMessage_ & other) const
  {
    if (this->my_integer != other.my_integer) {
      return false;
    }
    if (this->my_float != other.my_float) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyCustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyCustomMessage_

// alias to use template instance with default allocator
using MyCustomMessage =
  my_custom_message::msg::MyCustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_message

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_
