// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice
#include "action_msgs/srv/detail/cancel_goal__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "action_msgs/srv/detail/cancel_goal__struct.hpp"

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
namespace action_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const action_msgs::msg::GoalInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  action_msgs::msg::GoalInfo &);

size_t get_serialized_size(
  const action_msgs::msg::GoalInfo &,
  size_t current_alignment);

size_t
max_serialized_size_GoalInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace action_msgs


namespace action_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_serialize(
  const action_msgs::srv::CancelGoal_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_info
  rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_info,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  action_msgs::srv::CancelGoal_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_info
  rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_info);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::srv::CancelGoal_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment += action_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_info,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
max_serialized_size_CancelGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_info
  current_alignment += action_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_GoalInfo(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _CancelGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CancelGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_msgs::srv::CancelGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CancelGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CancelGoal_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _CancelGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_CancelGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _CancelGoal_Request__callbacks = {
  "action_msgs::srv",
  "CancelGoal_Request",
  _CancelGoal_Request__cdr_serialize,
  _CancelGoal_Request__cdr_deserialize,
  _CancelGoal_Request__get_serialized_size,
  _CancelGoal_Request__get_serialized_size_with_initial_alignment,
  _CancelGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CancelGoal_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_CancelGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_action_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Request>()
{
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Request)() {
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal_Request__handle;
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
namespace action_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const action_msgs::msg::GoalInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  action_msgs::msg::GoalInfo &);

size_t get_serialized_size(
  const action_msgs::msg::GoalInfo &,
  size_t current_alignment);

size_t
max_serialized_size_GoalInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace action_msgs


namespace action_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_serialize(
  const action_msgs::srv::CancelGoal_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: return_code
  rv = ucdr_serialize_int8_t(cdr, ros_message.return_code);
  // Member: goals_canceling
  {
    size_t size = ros_message.goals_canceling.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.goals_canceling[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  action_msgs::srv::CancelGoal_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: return_code
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.return_code);
  // Member: goals_canceling
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.goals_canceling.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = action_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.goals_canceling[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
get_serialized_size(
  const action_msgs::srv::CancelGoal_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: return_code
  {
    const size_t item_size = sizeof(ros_message.return_code);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: goals_canceling
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.goals_canceling.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = action_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.goals_canceling[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_action_msgs
max_serialized_size_CancelGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: return_code
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: goals_canceling
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _CancelGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CancelGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_msgs::srv::CancelGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CancelGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CancelGoal_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const action_msgs::srv::CancelGoal_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _CancelGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_CancelGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _CancelGoal_Response__callbacks = {
  "action_msgs::srv",
  "CancelGoal_Response",
  _CancelGoal_Response__cdr_serialize,
  _CancelGoal_Response__cdr_deserialize,
  _CancelGoal_Response__get_serialized_size,
  _CancelGoal_Response__get_serialized_size_with_initial_alignment,
  _CancelGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CancelGoal_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_CancelGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_action_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Response>()
{
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Response)() {
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace action_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _CancelGoal__callbacks = {
  "action_msgs::srv",
  "CancelGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Response),
};

static rosidl_service_type_support_t _CancelGoal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_CancelGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_action_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<action_msgs::srv::CancelGoal>()
{
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal)() {
  return &action_msgs::srv::typesupport_microxrcedds_cpp::_CancelGoal__handle;
}

#ifdef __cplusplus
}
#endif
