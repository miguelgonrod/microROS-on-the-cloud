// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/get_plan__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "nav_msgs/srv/detail/get_plan__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::PoseStamped &);

size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);

size_t
max_serialized_size_PoseStamped(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::PoseStamped &);

size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);

size_t
max_serialized_size_PoseStamped(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::srv::GetPlan_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: start
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.start,
    cdr);
  // Member: goal
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  // Member: tolerance
  rv = ucdr_serialize_float(cdr, ros_message.tolerance);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::srv::GetPlan_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: start
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.start);
  // Member: goal
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal);
  // Member: tolerance
  rv = ucdr_deserialize_float(cdr, &ros_message.tolerance);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::srv::GetPlan_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: start
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.start,
    current_alignment);
  // Member: goal
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal,
    current_alignment);
  // Member: tolerance
  {
    const size_t item_size = sizeof(ros_message.tolerance);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_GetPlan_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: start
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_PoseStamped(
    full_bounded,
    current_alignment);
  // Member: goal
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_PoseStamped(
    full_bounded,
    current_alignment);
  // Member: tolerance
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _GetPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetPlan_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::srv::GetPlan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetPlan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetPlan_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetPlan_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetPlan_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetPlan_Request__callbacks = {
  "nav_msgs::srv",
  "GetPlan_Request",
  _GetPlan_Request__cdr_serialize,
  _GetPlan_Request__cdr_deserialize,
  _GetPlan_Request__get_serialized_size,
  _GetPlan_Request__get_serialized_size_with_initial_alignment,
  _GetPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPlan_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetPlan_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::srv::GetPlan_Request>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, GetPlan_Request)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan_Request__handle;
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
namespace nav_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const nav_msgs::msg::Path &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  nav_msgs::msg::Path &);

size_t get_serialized_size(
  const nav_msgs::msg::Path &,
  size_t current_alignment);

size_t
max_serialized_size_Path(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace nav_msgs


namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::srv::GetPlan_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: plan
  rv = nav_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.plan,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::srv::GetPlan_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: plan
  rv = nav_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.plan);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::srv::GetPlan_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: plan
  current_alignment += nav_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.plan,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_GetPlan_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: plan
  current_alignment += nav_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Path(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _GetPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetPlan_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::srv::GetPlan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetPlan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetPlan_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::srv::GetPlan_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetPlan_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetPlan_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetPlan_Response__callbacks = {
  "nav_msgs::srv",
  "GetPlan_Response",
  _GetPlan_Response__cdr_serialize,
  _GetPlan_Response__cdr_deserialize,
  _GetPlan_Response__get_serialized_size,
  _GetPlan_Response__get_serialized_size_with_initial_alignment,
  _GetPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPlan_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetPlan_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::srv::GetPlan_Response>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, GetPlan_Response)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace nav_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _GetPlan__callbacks = {
  "nav_msgs::srv",
  "GetPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, GetPlan_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, GetPlan_Response),
};

static rosidl_service_type_support_t _GetPlan__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetPlan__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nav_msgs::srv::GetPlan>()
{
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, srv, GetPlan)() {
  return &nav_msgs::srv::typesupport_microxrcedds_cpp::_GetPlan__handle;
}

#ifdef __cplusplus
}
#endif
