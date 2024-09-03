// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/load_node__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/detail/load_node__struct.h"
#include "composition_interfaces/srv/detail/load_node__functions.h"

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

#include "rcl_interfaces/msg/detail/parameter__functions.h"  // extra_arguments, parameters
#include "rosidl_runtime_c/string.h"  // node_name, node_namespace, package_name, plugin_name, remap_rules
#include "rosidl_runtime_c/string_functions.h"  // node_name, node_namespace, package_name, plugin_name, remap_rules

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_composition_interfaces
size_t get_serialized_size_rcl_interfaces__msg__Parameter(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_composition_interfaces
size_t max_serialized_size_rcl_interfaces__msg__Parameter(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_composition_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter)();


typedef composition_interfaces__srv__LoadNode_Request _LoadNode_Request__ros_msg_type;

static bool _LoadNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LoadNode_Request__ros_msg_type * ros_message = (_LoadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: package_name
 {
    uint32_t string_len = (ros_message->package_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->package_name.data) + 1;
    ros_message->package_name.size = (ros_message->package_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->package_name.data, string_len);
  }
  // Member: plugin_name
 {
    uint32_t string_len = (ros_message->plugin_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->plugin_name.data) + 1;
    ros_message->plugin_name.size = (ros_message->plugin_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->plugin_name.data, string_len);
  }
  // Member: node_name
 {
    uint32_t string_len = (ros_message->node_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->node_name.data) + 1;
    ros_message->node_name.size = (ros_message->node_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->node_name.data, string_len);
  }
  // Member: node_namespace
 {
    uint32_t string_len = (ros_message->node_namespace.data == NULL) ? 0 : (uint32_t)strlen(ros_message->node_namespace.data) + 1;
    ros_message->node_namespace.size = (ros_message->node_namespace.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->node_namespace.data, string_len);
  }
  // Member: log_level
  rv = ucdr_serialize_uint8_t(cdr, ros_message->log_level);
  // Member: remap_rules
  {
    const size_t size = ros_message->remap_rules.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->remap_rules.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->remap_rules.data[i].data) + 1;
      ros_message->remap_rules.data[i].size = (ros_message->remap_rules.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->remap_rules.data[i].data, string_len);
    }
  }
  // Member: parameters
  {
    const size_t size = ros_message->parameters.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
          )()->data))->cdr_serialize(&ros_message->parameters.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: extra_arguments
  {
    const size_t size = ros_message->extra_arguments.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
          )()->data))->cdr_serialize(&ros_message->extra_arguments.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _LoadNode_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LoadNode_Request__ros_msg_type * ros_message = (_LoadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: package_name
  {
    size_t capacity = ros_message->package_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->package_name.data, capacity, &string_size);
    if (rv) {
      ros_message->package_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->package_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: plugin_name
  {
    size_t capacity = ros_message->plugin_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->plugin_name.data, capacity, &string_size);
    if (rv) {
      ros_message->plugin_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->plugin_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: node_name
  {
    size_t capacity = ros_message->node_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->node_name.data, capacity, &string_size);
    if (rv) {
      ros_message->node_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->node_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: node_namespace
  {
    size_t capacity = ros_message->node_namespace.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->node_namespace.data, capacity, &string_size);
    if (rv) {
      ros_message->node_namespace.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->node_namespace.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: log_level
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->log_level);
  // Field name: remap_rules
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->remap_rules.capacity){
      return 0;
    }
    ros_message->remap_rules.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->remap_rules.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->remap_rules.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->remap_rules.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->remap_rules.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->parameters.capacity){
      return 0;
    }

    ros_message->parameters.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->cdr_deserialize(cdr, &ros_message->parameters.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: extra_arguments
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->extra_arguments.capacity){
      return 0;
    }

    ros_message->extra_arguments.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->cdr_deserialize(cdr, &ros_message->extra_arguments.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__LoadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LoadNode_Request__ros_msg_type * ros_message = (const _LoadNode_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: package_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->package_name.size + 1;
  // Member: plugin_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->plugin_name.size + 1;
  // Member: node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->node_name.size + 1;
  // Member: node_namespace
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->node_namespace.size + 1;
  // Member: log_level
  {
    const size_t item_size = sizeof(ros_message->log_level);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: remap_rules
  {
    const size_t sequence_size = ros_message->remap_rules.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->remap_rules.data[i].size + 1;
    }
  }
  // Member: parameters
  {
    const size_t sequence_size = ros_message->parameters.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->parameters.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: extra_arguments
  {
    const size_t sequence_size = ros_message->extra_arguments.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, Parameter
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->extra_arguments.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadNode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__LoadNode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__LoadNode_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: package_name
  *full_bounded = false;
  // Member: plugin_name
  *full_bounded = false;
  // Member: node_name
  *full_bounded = false;
  // Member: node_namespace
  *full_bounded = false;
  // Member: log_level
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: remap_rules
  {
    *full_bounded = false;
  }
  // Member: parameters
  {
    *full_bounded = false;
  }
  // Member: extra_arguments
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _LoadNode_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__LoadNode_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LoadNode_Request = {
  "composition_interfaces::srv",
  "LoadNode_Request",
  _LoadNode_Request__cdr_serialize,
  _LoadNode_Request__cdr_deserialize,
  _LoadNode_Request__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__LoadNode_Request,
  _LoadNode_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LoadNode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, LoadNode_Request)() {
  return &_LoadNode_Request__type_support;
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
// #include "composition_interfaces/srv/detail/load_node__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__functions.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // error_message, full_node_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_message, full_node_name

// forward declare type support functions


typedef composition_interfaces__srv__LoadNode_Response _LoadNode_Response__ros_msg_type;

static bool _LoadNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LoadNode_Response__ros_msg_type * ros_message = (_LoadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: error_message
 {
    uint32_t string_len = (ros_message->error_message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->error_message.data) + 1;
    ros_message->error_message.size = (ros_message->error_message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->error_message.data, string_len);
  }
  // Member: full_node_name
 {
    uint32_t string_len = (ros_message->full_node_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->full_node_name.data) + 1;
    ros_message->full_node_name.size = (ros_message->full_node_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->full_node_name.data, string_len);
  }
  // Member: unique_id
  rv = ucdr_serialize_uint64_t(cdr, ros_message->unique_id);

  return rv;
}

static bool _LoadNode_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LoadNode_Response__ros_msg_type * ros_message = (_LoadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: error_message
  {
    size_t capacity = ros_message->error_message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->error_message.data, capacity, &string_size);
    if (rv) {
      ros_message->error_message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->error_message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: full_node_name
  {
    size_t capacity = ros_message->full_node_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->full_node_name.data, capacity, &string_size);
    if (rv) {
      ros_message->full_node_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->full_node_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: unique_id
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->unique_id);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__LoadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LoadNode_Response__ros_msg_type * ros_message = (const _LoadNode_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: error_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->error_message.size + 1;
  // Member: full_node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->full_node_name.size + 1;
  // Member: unique_id
  {
    const size_t item_size = sizeof(ros_message->unique_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadNode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_composition_interfaces__srv__LoadNode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__LoadNode_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: error_message
  *full_bounded = false;
  // Member: full_node_name
  *full_bounded = false;
  // Member: unique_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static size_t _LoadNode_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_composition_interfaces__srv__LoadNode_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LoadNode_Response = {
  "composition_interfaces::srv",
  "LoadNode_Response",
  _LoadNode_Response__cdr_serialize,
  _LoadNode_Response__cdr_deserialize,
  _LoadNode_Response__get_serialized_size,
  get_serialized_size_composition_interfaces__srv__LoadNode_Response,
  _LoadNode_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LoadNode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, LoadNode_Response)() {
  return &_LoadNode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "composition_interfaces/srv/load_node.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadNode__callbacks = {
  "composition_interfaces::srv",
  "LoadNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, LoadNode_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, LoadNode_Response),
};

static rosidl_service_type_support_t LoadNode__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &LoadNode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, composition_interfaces, srv, LoadNode)() {
  return &LoadNode__handle;
}

#if defined(__cplusplus)
}
#endif
