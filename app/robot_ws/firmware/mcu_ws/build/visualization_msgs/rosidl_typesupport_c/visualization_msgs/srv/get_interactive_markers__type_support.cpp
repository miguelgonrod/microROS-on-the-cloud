// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "visualization_msgs/srv/detail/get_interactive_markers__struct.h"
#include "visualization_msgs/srv/detail/get_interactive_markers__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace visualization_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetInteractiveMarkers_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetInteractiveMarkers_Request_type_support_ids_t;

static const _GetInteractiveMarkers_Request_type_support_ids_t _GetInteractiveMarkers_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetInteractiveMarkers_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetInteractiveMarkers_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetInteractiveMarkers_Request_type_support_symbol_names_t _GetInteractiveMarkers_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Request)),
  }
};

typedef struct _GetInteractiveMarkers_Request_type_support_data_t
{
  void * data[2];
} _GetInteractiveMarkers_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Request)();
#ifdef __cplusplus
}
#endif

static _GetInteractiveMarkers_Request_type_support_data_t _GetInteractiveMarkers_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Request),
  }
};
#else
static _GetInteractiveMarkers_Request_type_support_data_t _GetInteractiveMarkers_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetInteractiveMarkers_Request_message_typesupport_map = {
  2,
  "visualization_msgs",
  &_GetInteractiveMarkers_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetInteractiveMarkers_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetInteractiveMarkers_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetInteractiveMarkers_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetInteractiveMarkers_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, visualization_msgs, srv, GetInteractiveMarkers_Request)() {
  if (!::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Request_message_type_support_handle.typesupport_identifier) {
    ::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__struct.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__type_support.h"
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

namespace visualization_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetInteractiveMarkers_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetInteractiveMarkers_Response_type_support_ids_t;

static const _GetInteractiveMarkers_Response_type_support_ids_t _GetInteractiveMarkers_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetInteractiveMarkers_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetInteractiveMarkers_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetInteractiveMarkers_Response_type_support_symbol_names_t _GetInteractiveMarkers_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Response)),
  }
};

typedef struct _GetInteractiveMarkers_Response_type_support_data_t
{
  void * data[2];
} _GetInteractiveMarkers_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Response)();
#ifdef __cplusplus
}
#endif

static _GetInteractiveMarkers_Response_type_support_data_t _GetInteractiveMarkers_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers_Response),
  }
};
#else
static _GetInteractiveMarkers_Response_type_support_data_t _GetInteractiveMarkers_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetInteractiveMarkers_Response_message_typesupport_map = {
  2,
  "visualization_msgs",
  &_GetInteractiveMarkers_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetInteractiveMarkers_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetInteractiveMarkers_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetInteractiveMarkers_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetInteractiveMarkers_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, visualization_msgs, srv, GetInteractiveMarkers_Response)() {
  if (!::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Response_message_type_support_handle.typesupport_identifier) {
    ::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace visualization_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetInteractiveMarkers_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetInteractiveMarkers_type_support_ids_t;

static const _GetInteractiveMarkers_type_support_ids_t _GetInteractiveMarkers_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetInteractiveMarkers_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetInteractiveMarkers_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetInteractiveMarkers_type_support_symbol_names_t _GetInteractiveMarkers_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers)),
  }
};

typedef struct _GetInteractiveMarkers_type_support_data_t
{
  void * data[2];
} _GetInteractiveMarkers_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers)();
#ifdef __cplusplus
}
#endif

static _GetInteractiveMarkers_type_support_data_t _GetInteractiveMarkers_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, srv, GetInteractiveMarkers),
  }
};
#else
static _GetInteractiveMarkers_type_support_data_t _GetInteractiveMarkers_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetInteractiveMarkers_service_typesupport_map = {
  2,
  "visualization_msgs",
  &_GetInteractiveMarkers_service_typesupport_ids.typesupport_identifier[0],
  &_GetInteractiveMarkers_service_typesupport_symbol_names.symbol_name[0],
  &_GetInteractiveMarkers_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t GetInteractiveMarkers_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetInteractiveMarkers_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, visualization_msgs, srv, GetInteractiveMarkers)() {
  if (!::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_service_type_support_handle.typesupport_identifier) {
    ::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::visualization_msgs::srv::rosidl_typesupport_c::GetInteractiveMarkers_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
