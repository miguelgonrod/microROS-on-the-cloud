// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lifecycle_msgs/srv/detail/change_state__struct.h"
#include "lifecycle_msgs/srv/detail/change_state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeState_Request_type_support_ids_t;

static const _ChangeState_Request_type_support_ids_t _ChangeState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ChangeState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_Request_type_support_symbol_names_t _ChangeState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Request)),
  }
};

typedef struct _ChangeState_Request_type_support_data_t
{
  void * data[2];
} _ChangeState_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Request)();
#ifdef __cplusplus
}
#endif

static _ChangeState_Request_type_support_data_t _ChangeState_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Request),
  }
};
#else
static _ChangeState_Request_type_support_data_t _ChangeState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _ChangeState_Request_message_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_ChangeState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t ChangeState_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, ChangeState_Request)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Request_message_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeState_Response_type_support_ids_t;

static const _ChangeState_Response_type_support_ids_t _ChangeState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ChangeState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_Response_type_support_symbol_names_t _ChangeState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Response)),
  }
};

typedef struct _ChangeState_Response_type_support_data_t
{
  void * data[2];
} _ChangeState_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Response)();
#ifdef __cplusplus
}
#endif

static _ChangeState_Response_type_support_data_t _ChangeState_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState_Response),
  }
};
#else
static _ChangeState_Response_type_support_data_t _ChangeState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _ChangeState_Response_message_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_ChangeState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t ChangeState_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, ChangeState_Response)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Response_message_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeState_type_support_ids_t;

static const _ChangeState_type_support_ids_t _ChangeState_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ChangeState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_type_support_symbol_names_t _ChangeState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState)),
  }
};

typedef struct _ChangeState_type_support_data_t
{
  void * data[2];
} _ChangeState_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState)();
#ifdef __cplusplus
}
#endif

static _ChangeState_type_support_data_t _ChangeState_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, ChangeState),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, ChangeState),
  }
};
#else
static _ChangeState_type_support_data_t _ChangeState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _ChangeState_service_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_ChangeState_service_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_service_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t ChangeState_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, ChangeState)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_service_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::ChangeState_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
