// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/srv/detail/set_camera_info__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/srv/detail/set_camera_info__struct.h"
#include "sensor_msgs/srv/detail/set_camera_info__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/camera_info__functions.h"  // camera_info

// forward declare type support functions
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CameraInfo)();


typedef sensor_msgs__srv__SetCameraInfo_Request _SetCameraInfo_Request__ros_msg_type;

static bool _SetCameraInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetCameraInfo_Request__ros_msg_type * ros_message = (_SetCameraInfo_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: camera_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CameraInfo
      )()->data))->cdr_serialize(&ros_message->camera_info, cdr);

  return rv;
}

static bool _SetCameraInfo_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetCameraInfo_Request__ros_msg_type * ros_message = (_SetCameraInfo_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: camera_info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, CameraInfo
      )()->data))->cdr_deserialize(cdr, &ros_message->camera_info);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__srv__SetCameraInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetCameraInfo_Request__ros_msg_type * ros_message = (const _SetCameraInfo_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: camera_info
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__CameraInfo(&ros_message->camera_info, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetCameraInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__srv__SetCameraInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__srv__SetCameraInfo_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: camera_info
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__CameraInfo(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _SetCameraInfo_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__srv__SetCameraInfo_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetCameraInfo_Request = {
  "sensor_msgs::srv",
  "SetCameraInfo_Request",
  _SetCameraInfo_Request__cdr_serialize,
  _SetCameraInfo_Request__cdr_deserialize,
  _SetCameraInfo_Request__get_serialized_size,
  get_serialized_size_sensor_msgs__srv__SetCameraInfo_Request,
  _SetCameraInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetCameraInfo_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetCameraInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Request)() {
  return &_SetCameraInfo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // status_message
#include "rosidl_runtime_c/string_functions.h"  // status_message

// forward declare type support functions


typedef sensor_msgs__srv__SetCameraInfo_Response _SetCameraInfo_Response__ros_msg_type;

static bool _SetCameraInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetCameraInfo_Response__ros_msg_type * ros_message = (_SetCameraInfo_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: status_message
 {
    uint32_t string_len = (ros_message->status_message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->status_message.data) + 1;
    ros_message->status_message.size = (ros_message->status_message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->status_message.data, string_len);
  }

  return rv;
}

static bool _SetCameraInfo_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetCameraInfo_Response__ros_msg_type * ros_message = (_SetCameraInfo_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: status_message
  {
    size_t capacity = ros_message->status_message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->status_message.data, capacity, &string_size);
    if (rv) {
      ros_message->status_message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->status_message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__srv__SetCameraInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetCameraInfo_Response__ros_msg_type * ros_message = (const _SetCameraInfo_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: status_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->status_message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _SetCameraInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__srv__SetCameraInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__srv__SetCameraInfo_Response(
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

static size_t _SetCameraInfo_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__srv__SetCameraInfo_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetCameraInfo_Response = {
  "sensor_msgs::srv",
  "SetCameraInfo_Response",
  _SetCameraInfo_Response__cdr_serialize,
  _SetCameraInfo_Response__cdr_deserialize,
  _SetCameraInfo_Response__get_serialized_size,
  get_serialized_size_sensor_msgs__srv__SetCameraInfo_Response,
  _SetCameraInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetCameraInfo_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetCameraInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Response)() {
  return &_SetCameraInfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/srv/set_camera_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetCameraInfo__callbacks = {
  "sensor_msgs::srv",
  "SetCameraInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Response),
};

static rosidl_service_type_support_t SetCameraInfo__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetCameraInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo)() {
  return &SetCameraInfo__handle;
}

#if defined(__cplusplus)
}
#endif
