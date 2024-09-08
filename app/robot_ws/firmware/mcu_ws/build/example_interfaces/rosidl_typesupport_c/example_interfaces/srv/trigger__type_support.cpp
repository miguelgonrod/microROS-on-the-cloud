// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from example_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_interfaces/srv/detail/trigger__struct.h"
#include "example_interfaces/srv/detail/trigger__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_Request_type_support_ids_t;

static const _Trigger_Request_type_support_ids_t _Trigger_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Request_type_support_symbol_names_t _Trigger_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Request)),
  }
};

typedef struct _Trigger_Request_type_support_data_t
{
  void * data[2];
} _Trigger_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Request)();
#ifdef __cplusplus
}
#endif

static _Trigger_Request_type_support_data_t _Trigger_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Request),
  }
};
#else
static _Trigger_Request_type_support_data_t _Trigger_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_Request_message_typesupport_map = {
  2,
  "example_interfaces",
  &_Trigger_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Trigger_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, Trigger_Request)() {
  if (!::example_interfaces::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle.typesupport_identifier) {
    ::example_interfaces::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::example_interfaces::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/srv/detail/trigger__struct.h"
// already included above
// #include "example_interfaces/srv/detail/trigger__type_support.h"
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

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_Response_type_support_ids_t;

static const _Trigger_Response_type_support_ids_t _Trigger_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Response_type_support_symbol_names_t _Trigger_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Response)),
  }
};

typedef struct _Trigger_Response_type_support_data_t
{
  void * data[2];
} _Trigger_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Response)();
#ifdef __cplusplus
}
#endif

static _Trigger_Response_type_support_data_t _Trigger_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger_Response),
  }
};
#else
static _Trigger_Response_type_support_data_t _Trigger_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_Response_message_typesupport_map = {
  2,
  "example_interfaces",
  &_Trigger_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Trigger_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, Trigger_Response)() {
  if (!::example_interfaces::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle.typesupport_identifier) {
    ::example_interfaces::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::example_interfaces::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/srv/detail/trigger__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_type_support_ids_t;

static const _Trigger_type_support_ids_t _Trigger_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_type_support_symbol_names_t _Trigger_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger)),
  }
};

typedef struct _Trigger_type_support_data_t
{
  void * data[2];
} _Trigger_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger)();
#ifdef __cplusplus
}
#endif

static _Trigger_type_support_data_t _Trigger_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, Trigger),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, Trigger),
  }
};
#else
static _Trigger_type_support_data_t _Trigger_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_service_typesupport_map = {
  2,
  "example_interfaces",
  &_Trigger_service_typesupport_ids.typesupport_identifier[0],
  &_Trigger_service_typesupport_symbol_names.symbol_name[0],
  &_Trigger_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t Trigger_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, srv, Trigger)() {
  if (!::example_interfaces::srv::rosidl_typesupport_c::Trigger_service_type_support_handle.typesupport_identifier) {
    ::example_interfaces::srv::rosidl_typesupport_c::Trigger_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::example_interfaces::srv::rosidl_typesupport_c::Trigger_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
