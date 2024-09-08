// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
#include "unique_identifier_msgs/msg/detail/uuid__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace unique_identifier_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _UUID_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UUID_type_support_ids_t;

static const _UUID_type_support_ids_t _UUID_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _UUID_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UUID_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UUID_type_support_symbol_names_t _UUID_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)),
  }
};

typedef struct _UUID_type_support_data_t
{
  void * data[2];
} _UUID_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();
#ifdef __cplusplus
}
#endif

static _UUID_type_support_data_t _UUID_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID),
  }
};
#else
static _UUID_type_support_data_t _UUID_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _UUID_message_typesupport_map = {
  2,
  "unique_identifier_msgs",
  &_UUID_message_typesupport_ids.typesupport_identifier[0],
  &_UUID_message_typesupport_symbol_names.symbol_name[0],
  &_UUID_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t UUID_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UUID_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace unique_identifier_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, unique_identifier_msgs, msg, UUID)() {
  if (!::unique_identifier_msgs::msg::rosidl_typesupport_c::UUID_message_type_support_handle.typesupport_identifier) {
    ::unique_identifier_msgs::msg::rosidl_typesupport_c::UUID_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::unique_identifier_msgs::msg::rosidl_typesupport_c::UUID_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
