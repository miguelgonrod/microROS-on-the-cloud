// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/srv/detail/set_camera_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"

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
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::CameraInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  sensor_msgs::msg::CameraInfo &);

size_t get_serialized_size(
  const sensor_msgs::msg::CameraInfo &,
  size_t current_alignment);

size_t
max_serialized_size_CameraInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace sensor_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::srv::SetCameraInfo_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: camera_info
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.camera_info,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::srv::SetCameraInfo_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: camera_info
  rv = sensor_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.camera_info);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::srv::SetCameraInfo_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: camera_info
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.camera_info,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_SetCameraInfo_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: camera_info
  current_alignment += sensor_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_CameraInfo(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _SetCameraInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetCameraInfo_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::srv::SetCameraInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetCameraInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetCameraInfo_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetCameraInfo_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetCameraInfo_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetCameraInfo_Request__callbacks = {
  "sensor_msgs::srv",
  "SetCameraInfo_Request",
  _SetCameraInfo_Request__cdr_serialize,
  _SetCameraInfo_Request__cdr_deserialize,
  _SetCameraInfo_Request__get_serialized_size,
  _SetCameraInfo_Request__get_serialized_size_with_initial_alignment,
  _SetCameraInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetCameraInfo_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetCameraInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::srv::SetCameraInfo_Request>()
{
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, srv, SetCameraInfo_Request)() {
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo_Request__handle;
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

namespace sensor_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::srv::SetCameraInfo_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);
  // Member: status_message
  rv = ucdr_serialize_string(cdr, ros_message.status_message.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::srv::SetCameraInfo_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);
  // Member: status_message
  ros_message.status_message.resize(ros_message.status_message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.status_message[0], ros_message.status_message.capacity());
  if (rv) {
    ros_message.status_message.resize(std::strlen(&ros_message.status_message[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::srv::SetCameraInfo_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message.success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: status_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.status_message.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_SetCameraInfo_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: status_message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _SetCameraInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetCameraInfo_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::srv::SetCameraInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetCameraInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetCameraInfo_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::srv::SetCameraInfo_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetCameraInfo_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetCameraInfo_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetCameraInfo_Response__callbacks = {
  "sensor_msgs::srv",
  "SetCameraInfo_Response",
  _SetCameraInfo_Response__cdr_serialize,
  _SetCameraInfo_Response__cdr_deserialize,
  _SetCameraInfo_Response__get_serialized_size,
  _SetCameraInfo_Response__get_serialized_size_with_initial_alignment,
  _SetCameraInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetCameraInfo_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetCameraInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::srv::SetCameraInfo_Response>()
{
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, srv, SetCameraInfo_Response)() {
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace sensor_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _SetCameraInfo__callbacks = {
  "sensor_msgs::srv",
  "SetCameraInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, srv, SetCameraInfo_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, srv, SetCameraInfo_Response),
};

static rosidl_service_type_support_t _SetCameraInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetCameraInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<sensor_msgs::srv::SetCameraInfo>()
{
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, srv, SetCameraInfo)() {
  return &sensor_msgs::srv::typesupport_microxrcedds_cpp::_SetCameraInfo__handle;
}

#ifdef __cplusplus
}
#endif
