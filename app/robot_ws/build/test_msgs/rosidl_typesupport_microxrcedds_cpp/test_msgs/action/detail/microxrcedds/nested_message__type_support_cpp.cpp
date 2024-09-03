// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:action/NestedMessage.idl
// generated code does not contain a copyright notice
#include "test_msgs/action/detail/nested_message__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "test_msgs/action/detail/nested_message__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Builtins &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::Builtins &);

size_t get_serialized_size(
  const test_msgs::msg::Builtins &,
  size_t current_alignment);

size_t
max_serialized_size_Builtins(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::BasicTypes &);

size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);

size_t
max_serialized_size_BasicTypes(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_Goal & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field_no_pkg,
    cdr);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field,
    cdr);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_different_pkg,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_Goal & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field_no_pkg);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_different_pkg);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_Goal & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field_no_pkg,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_different_pkg,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_Goal(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Builtins(
    full_bounded,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_BasicTypes(
    full_bounded,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_Goal__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Goal *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_Goal__callbacks = {
  "test_msgs::action",
  "NestedMessage_Goal",
  _NestedMessage_Goal__cdr_serialize,
  _NestedMessage_Goal__cdr_deserialize,
  _NestedMessage_Goal__get_serialized_size,
  _NestedMessage_Goal__get_serialized_size_with_initial_alignment,
  _NestedMessage_Goal__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Goal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_Goal>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Goal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_Goal)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Builtins &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::Builtins &);

size_t get_serialized_size(
  const test_msgs::msg::Builtins &,
  size_t current_alignment);

size_t
max_serialized_size_Builtins(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::BasicTypes &);

size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);

size_t
max_serialized_size_BasicTypes(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_Result & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field_no_pkg,
    cdr);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field,
    cdr);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_different_pkg,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_Result & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field_no_pkg);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_different_pkg);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_Result & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field_no_pkg,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_different_pkg,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_Result(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Builtins(
    full_bounded,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_BasicTypes(
    full_bounded,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_Result__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Result *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_Result__callbacks = {
  "test_msgs::action",
  "NestedMessage_Result",
  _NestedMessage_Result__cdr_serialize,
  _NestedMessage_Result__cdr_deserialize,
  _NestedMessage_Result__get_serialized_size,
  _NestedMessage_Result__get_serialized_size_with_initial_alignment,
  _NestedMessage_Result__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Result__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_Result>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Result__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_Result)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::Builtins &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::Builtins &);

size_t get_serialized_size(
  const test_msgs::msg::Builtins &,
  size_t current_alignment);

size_t
max_serialized_size_Builtins(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::msg::BasicTypes &);

size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);

size_t
max_serialized_size_BasicTypes(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace test_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_Feedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field_no_pkg,
    cdr);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_field,
    cdr);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_different_pkg,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_Feedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: nested_field_no_pkg
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field_no_pkg);
  // Member: nested_field
  rv = test_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_field);
  // Member: nested_different_pkg
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_different_pkg);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_Feedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field_no_pkg,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_field,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_different_pkg,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_Feedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Builtins(
    full_bounded,
    current_alignment);
  // Member: nested_field
  current_alignment += test_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_BasicTypes(
    full_bounded,
    current_alignment);
  // Member: nested_different_pkg
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_Feedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_Feedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_Feedback__callbacks = {
  "test_msgs::action",
  "NestedMessage_Feedback",
  _NestedMessage_Feedback__cdr_serialize,
  _NestedMessage_Feedback__cdr_deserialize,
  _NestedMessage_Feedback__get_serialized_size,
  _NestedMessage_Feedback__get_serialized_size_with_initial_alignment,
  _NestedMessage_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Feedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_Feedback>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Feedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_Feedback)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace test_msgs
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::action::NestedMessage_Goal &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::action::NestedMessage_Goal &);

size_t get_serialized_size(
  const test_msgs::action::NestedMessage_Goal &,
  size_t current_alignment);

size_t
max_serialized_size_NestedMessage_Goal(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace test_msgs


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_SendGoal_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_SendGoal_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: goal
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: goal
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: goal
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::max_serialized_size_NestedMessage_Goal(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_SendGoal_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_SendGoal_Request__callbacks = {
  "test_msgs::action",
  "NestedMessage_SendGoal_Request",
  _NestedMessage_SendGoal_Request__cdr_serialize,
  _NestedMessage_SendGoal_Request__cdr_deserialize,
  _NestedMessage_SendGoal_Request__get_serialized_size,
  _NestedMessage_SendGoal_Request__get_serialized_size_with_initial_alignment,
  _NestedMessage_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_SendGoal_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_SendGoal_Request>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_SendGoal_Request)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_SendGoal_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_SendGoal_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message.accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_SendGoal_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_SendGoal_Response__callbacks = {
  "test_msgs::action",
  "NestedMessage_SendGoal_Response",
  _NestedMessage_SendGoal_Response__cdr_serialize,
  _NestedMessage_SendGoal_Response__cdr_deserialize,
  _NestedMessage_SendGoal_Response__get_serialized_size,
  _NestedMessage_SendGoal_Response__get_serialized_size_with_initial_alignment,
  _NestedMessage_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_SendGoal_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_SendGoal_Response>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_SendGoal_Response)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _NestedMessage_SendGoal__callbacks = {
  "test_msgs::action",
  "NestedMessage_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_SendGoal_Response),
};

static rosidl_service_type_support_t _NestedMessage_SendGoal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<test_msgs::action::NestedMessage_SendGoal>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_SendGoal)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_GetResult_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_GetResult_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_GetResult_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_GetResult_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_GetResult_Request__callbacks = {
  "test_msgs::action",
  "NestedMessage_GetResult_Request",
  _NestedMessage_GetResult_Request__cdr_serialize,
  _NestedMessage_GetResult_Request__cdr_deserialize,
  _NestedMessage_GetResult_Request__get_serialized_size,
  _NestedMessage_GetResult_Request__get_serialized_size_with_initial_alignment,
  _NestedMessage_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_GetResult_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_GetResult_Request>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_GetResult_Request)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace test_msgs
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::action::NestedMessage_Result &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::action::NestedMessage_Result &);

size_t get_serialized_size(
  const test_msgs::action::NestedMessage_Result &,
  size_t current_alignment);

size_t
max_serialized_size_NestedMessage_Result(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace test_msgs


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_GetResult_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);
  // Member: result
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.result,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_GetResult_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);
  // Member: result
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_GetResult_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.result,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::max_serialized_size_NestedMessage_Result(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_GetResult_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_GetResult_Response__callbacks = {
  "test_msgs::action",
  "NestedMessage_GetResult_Response",
  _NestedMessage_GetResult_Response__cdr_serialize,
  _NestedMessage_GetResult_Response__cdr_deserialize,
  _NestedMessage_GetResult_Response__get_serialized_size,
  _NestedMessage_GetResult_Response__get_serialized_size_with_initial_alignment,
  _NestedMessage_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_GetResult_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_GetResult_Response>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_GetResult_Response)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _NestedMessage_GetResult__callbacks = {
  "test_msgs::action",
  "NestedMessage_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_GetResult_Response),
};

static rosidl_service_type_support_t _NestedMessage_GetResult__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<test_msgs::action::NestedMessage_GetResult>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_GetResult)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace test_msgs
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const test_msgs::action::NestedMessage_Feedback &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  test_msgs::action::NestedMessage_Feedback &);

size_t get_serialized_size(
  const test_msgs::action::NestedMessage_Feedback &,
  size_t current_alignment);

size_t
max_serialized_size_NestedMessage_Feedback(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace test_msgs


namespace test_msgs
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::action::NestedMessage_FeedbackMessage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  test_msgs::action::NestedMessage_FeedbackMessage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: feedback
  rv = test_msgs::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.feedback);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::action::NestedMessage_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: feedback
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.feedback,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_test_msgs
max_serialized_size_NestedMessage_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: feedback
  current_alignment += test_msgs::action::typesupport_microxrcedds_cpp::max_serialized_size_NestedMessage_Feedback(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _NestedMessage_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMessage_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::action::NestedMessage_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMessage_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMessage_FeedbackMessage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const test_msgs::action::NestedMessage_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NestedMessage_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NestedMessage_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t _NestedMessage_FeedbackMessage__callbacks = {
  "test_msgs::action",
  "NestedMessage_FeedbackMessage",
  _NestedMessage_FeedbackMessage__cdr_serialize,
  _NestedMessage_FeedbackMessage__cdr_deserialize,
  _NestedMessage_FeedbackMessage__get_serialized_size,
  _NestedMessage_FeedbackMessage__get_serialized_size_with_initial_alignment,
  _NestedMessage_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_FeedbackMessage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NestedMessage_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace test_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::action::NestedMessage_FeedbackMessage>()
{
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, test_msgs, action, NestedMessage_FeedbackMessage)() {
  return &test_msgs::action::typesupport_microxrcedds_cpp::_NestedMessage_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
