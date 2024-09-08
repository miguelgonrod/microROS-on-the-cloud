// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from nav_msgs:srv/SetMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/set_map__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/detail/set_map__struct.h"
#include "nav_msgs/srv/detail/set_map__functions.h"

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

#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"  // initial_pose
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"  // map

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
size_t get_serialized_size_nav_msgs__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__msg__OccupancyGrid(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid)();


typedef nav_msgs__srv__SetMap_Request _SetMap_Request__ros_msg_type;

static bool _SetMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetMap_Request__ros_msg_type * ros_message = (_SetMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: map
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid
      )()->data))->cdr_serialize(&ros_message->map, cdr);
  // Member: initial_pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data))->cdr_serialize(&ros_message->initial_pose, cdr);

  return rv;
}

static bool _SetMap_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetMap_Request__ros_msg_type * ros_message = (_SetMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: map
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid
      )()->data))->cdr_deserialize(cdr, &ros_message->map);
  // Field name: initial_pose
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data))->cdr_deserialize(cdr, &ros_message->initial_pose);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__SetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetMap_Request__ros_msg_type * ros_message = (const _SetMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment +=
    get_serialized_size_nav_msgs__msg__OccupancyGrid(&ros_message->map, current_alignment);
  // Member: initial_pose
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(&ros_message->initial_pose, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__SetMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__SetMap_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment +=
    max_serialized_size_nav_msgs__msg__OccupancyGrid(full_bounded, current_alignment);
  // Member: initial_pose
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _SetMap_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__SetMap_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetMap_Request = {
  "nav_msgs::srv",
  "SetMap_Request",
  _SetMap_Request__cdr_serialize,
  _SetMap_Request__cdr_deserialize,
  _SetMap_Request__get_serialized_size,
  get_serialized_size_nav_msgs__srv__SetMap_Request,
  _SetMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMap_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Request)() {
  return &_SetMap_Request__type_support;
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
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__functions.h"

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


// forward declare type support functions


typedef nav_msgs__srv__SetMap_Response _SetMap_Response__ros_msg_type;

static bool _SetMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetMap_Response__ros_msg_type * ros_message = (_SetMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);

  return rv;
}

static bool _SetMap_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetMap_Response__ros_msg_type * ros_message = (_SetMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__SetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetMap_Response__ros_msg_type * ros_message = (const _SetMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__SetMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__SetMap_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _SetMap_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__SetMap_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetMap_Response = {
  "nav_msgs::srv",
  "SetMap_Response",
  _SetMap_Response__cdr_serialize,
  _SetMap_Response__cdr_deserialize,
  _SetMap_Response__get_serialized_size,
  get_serialized_size_nav_msgs__srv__SetMap_Response,
  _SetMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMap_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Response)() {
  return &_SetMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/set_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMap__callbacks = {
  "nav_msgs::srv",
  "SetMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Response),
};

static rosidl_service_type_support_t SetMap__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap)() {
  return &SetMap__handle;
}

#if defined(__cplusplus)
}
#endif
