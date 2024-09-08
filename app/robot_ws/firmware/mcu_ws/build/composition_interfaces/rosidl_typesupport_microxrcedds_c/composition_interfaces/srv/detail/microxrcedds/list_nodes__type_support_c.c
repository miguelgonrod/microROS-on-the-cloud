// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/detail/list_nodes__struct.h"
#include "composition_interfaces/srv/detail/list_nodes__functions.h"

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


typedef composition_interfaces__srv__ListNodes_Request _ListNodes_Request__ros_msg_type;

static bool _ListNodes_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ListNodes_Request__ros_msg_type * ros_message = (_ListNodes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _ListNodes_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ListNodes_Request__ros_msg_type * ros_message = (_ListNodes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__ListNodes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ListNodes_Request__ros_msg_type * ros_message = (const _ListNodes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListNodes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__ListNodes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__ListNodes_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _ListNodes_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__ListNodes_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ListNodes_Request = {
  "composition_interfaces::srv",
  "ListNodes_Request",
  _ListNodes_Request__cdr_serialize,
  _ListNodes_Request__cdr_deserialize,
  _ListNodes_Request__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__ListNodes_Request,
  _ListNodes_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ListNodes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, ListNodes_Request)() {
  return &_ListNodes_Request__type_support;
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
// #include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // unique_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // unique_ids
#include "rosidl_runtime_c/string.h"  // full_node_names
#include "rosidl_runtime_c/string_functions.h"  // full_node_names

// forward declare type support functions


typedef composition_interfaces__srv__ListNodes_Response _ListNodes_Response__ros_msg_type;

static bool _ListNodes_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ListNodes_Response__ros_msg_type * ros_message = (_ListNodes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: full_node_names
  {
    const size_t size = ros_message->full_node_names.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->full_node_names.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->full_node_names.data[i].data) + 1;
      ros_message->full_node_names.data[i].size = (ros_message->full_node_names.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->full_node_names.data[i].data, string_len);
    }
  }
  // Member: unique_ids
  {
    const size_t size = ros_message->unique_ids.size;
    rv = ucdr_serialize_sequence_uint64_t(cdr, ros_message->unique_ids.data, size);
  }

  return rv;
}

static bool _ListNodes_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ListNodes_Response__ros_msg_type * ros_message = (_ListNodes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: full_node_names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->full_node_names.capacity){
      return 0;
    }
    ros_message->full_node_names.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->full_node_names.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->full_node_names.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->full_node_names.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->full_node_names.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: unique_ids
  {
    uint32_t size;
    const size_t capacity = ros_message->unique_ids.capacity;
    rv = ucdr_deserialize_sequence_uint64_t(cdr, ros_message->unique_ids.data, capacity, &size);
    if (rv) {
      ros_message->unique_ids.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->unique_ids.size = 0;
      ucdr_align_to(cdr, sizeof(uint64_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint64_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__ListNodes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ListNodes_Response__ros_msg_type * ros_message = (const _ListNodes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: full_node_names
  {
    const size_t sequence_size = ros_message->full_node_names.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->full_node_names.data[i].size + 1;
    }
  }
  // Member: unique_ids
  {
    size_t sequence_size = ros_message->unique_ids.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->unique_ids.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListNodes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__ListNodes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__ListNodes_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: full_node_names
  {
    *full_bounded = false;
  }
  // Member: unique_ids
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _ListNodes_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__ListNodes_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ListNodes_Response = {
  "composition_interfaces::srv",
  "ListNodes_Response",
  _ListNodes_Response__cdr_serialize,
  _ListNodes_Response__cdr_deserialize,
  _ListNodes_Response__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__ListNodes_Response,
  _ListNodes_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ListNodes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, ListNodes_Response)() {
  return &_ListNodes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/list_nodes.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListNodes__callbacks = {
  "composition_interfaces::srv",
  "ListNodes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, ListNodes_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, ListNodes_Response),
};

static rosidl_service_type_support_t ListNodes__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ListNodes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, ListNodes)() {
  return &ListNodes__handle;
}

#if defined(__cplusplus)
}
#endif
