// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice
#include "stereo_msgs/msg/detail/disparity_image__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "stereo_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "stereo_msgs/msg/detail/disparity_image__struct.h"
#include "stereo_msgs/msg/detail/disparity_image__functions.h"

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

#include "sensor_msgs/msg/detail/image__functions.h"  // image
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // valid_window
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Image)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef stereo_msgs__msg__DisparityImage _DisparityImage__ros_msg_type;

static bool _DisparityImage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _DisparityImage__ros_msg_type * ros_message = (_DisparityImage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: image
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Image
      )()->data))->cdr_serialize(&ros_message->image, cdr);
  // Member: f
  rv = ucdr_serialize_float(cdr, ros_message->f);
  // Member: t
  rv = ucdr_serialize_float(cdr, ros_message->t);
  // Member: valid_window
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest
      )()->data))->cdr_serialize(&ros_message->valid_window, cdr);
  // Member: min_disparity
  rv = ucdr_serialize_float(cdr, ros_message->min_disparity);
  // Member: max_disparity
  rv = ucdr_serialize_float(cdr, ros_message->max_disparity);
  // Member: delta_d
  rv = ucdr_serialize_float(cdr, ros_message->delta_d);

  return rv;
}

static bool _DisparityImage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _DisparityImage__ros_msg_type * ros_message = (_DisparityImage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: image
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, Image
      )()->data))->cdr_deserialize(cdr, &ros_message->image);
  // Field name: f
  rv = ucdr_deserialize_float(cdr, &ros_message->f);
  // Field name: t
  rv = ucdr_deserialize_float(cdr, &ros_message->t);
  // Field name: valid_window
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, RegionOfInterest
      )()->data))->cdr_deserialize(cdr, &ros_message->valid_window);
  // Field name: min_disparity
  rv = ucdr_deserialize_float(cdr, &ros_message->min_disparity);
  // Field name: max_disparity
  rv = ucdr_deserialize_float(cdr, &ros_message->max_disparity);
  // Field name: delta_d
  rv = ucdr_deserialize_float(cdr, &ros_message->delta_d);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_stereo_msgs
size_t get_serialized_size_stereo_msgs__msg__DisparityImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _DisparityImage__ros_msg_type * ros_message = (const _DisparityImage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: image
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__Image(&ros_message->image, current_alignment);
  // Member: f
  {
    const size_t item_size = sizeof(ros_message->f);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: t
  {
    const size_t item_size = sizeof(ros_message->t);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: valid_window
  current_alignment +=
    get_serialized_size_sensor_msgs__msg__RegionOfInterest(&ros_message->valid_window, current_alignment);
  // Member: min_disparity
  {
    const size_t item_size = sizeof(ros_message->min_disparity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: max_disparity
  {
    const size_t item_size = sizeof(ros_message->max_disparity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: delta_d
  {
    const size_t item_size = sizeof(ros_message->delta_d);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DisparityImage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_stereo_msgs__msg__DisparityImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_stereo_msgs
size_t max_serialized_size_stereo_msgs__msg__DisparityImage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: image
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__Image(full_bounded, current_alignment);
  // Member: f
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: t
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: valid_window
  current_alignment +=
    max_serialized_size_sensor_msgs__msg__RegionOfInterest(full_bounded, current_alignment);
  // Member: min_disparity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: max_disparity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: delta_d
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _DisparityImage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_stereo_msgs__msg__DisparityImage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_DisparityImage = {
  "stereo_msgs::msg",
  "DisparityImage",
  _DisparityImage__cdr_serialize,
  _DisparityImage__cdr_deserialize,
  _DisparityImage__get_serialized_size,
  get_serialized_size_stereo_msgs__msg__DisparityImage,
  _DisparityImage__max_serialized_size
};

static rosidl_message_type_support_t _DisparityImage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_DisparityImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, stereo_msgs, msg, DisparityImage)() {
  return &_DisparityImage__type_support;
}

#if defined(__cplusplus)
}
#endif
