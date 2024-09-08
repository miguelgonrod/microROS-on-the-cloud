// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_custom_message/msg/detail/my_custom_message__struct.h"
#include "my_custom_message/msg/detail/my_custom_message__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_custom_message
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MyCustomMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyCustomMessage_type_support_ids_t;

static const _MyCustomMessage_type_support_ids_t _MyCustomMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _MyCustomMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyCustomMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyCustomMessage_type_support_symbol_names_t _MyCustomMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_message, msg, MyCustomMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_custom_message, msg, MyCustomMessage)),
  }
};

typedef struct _MyCustomMessage_type_support_data_t
{
  void * data[2];
} _MyCustomMessage_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_message, msg, MyCustomMessage)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_custom_message, msg, MyCustomMessage)();
#ifdef __cplusplus
}
#endif

static _MyCustomMessage_type_support_data_t _MyCustomMessage_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_custom_message, msg, MyCustomMessage),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_custom_message, msg, MyCustomMessage),
  }
};
#else
static _MyCustomMessage_type_support_data_t _MyCustomMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _MyCustomMessage_message_typesupport_map = {
  2,
  "my_custom_message",
  &_MyCustomMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MyCustomMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MyCustomMessage_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t MyCustomMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyCustomMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace my_custom_message

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_custom_message, msg, MyCustomMessage)() {
  if (!::my_custom_message::msg::rosidl_typesupport_c::MyCustomMessage_message_type_support_handle.typesupport_identifier) {
    ::my_custom_message::msg::rosidl_typesupport_c::MyCustomMessage_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::my_custom_message::msg::rosidl_typesupport_c::MyCustomMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
