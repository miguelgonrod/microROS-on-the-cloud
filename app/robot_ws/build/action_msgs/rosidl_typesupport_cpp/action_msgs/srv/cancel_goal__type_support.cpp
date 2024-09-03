// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "action_msgs/srv/detail/cancel_goal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _CancelGoal_Request_type_support_ids_t;

static const _CancelGoal_Request_type_support_ids_t _CancelGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _CancelGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _CancelGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelGoal_Request_type_support_symbol_names_t _CancelGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_msgs, srv, CancelGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Request)),
  }
};

typedef struct _CancelGoal_Request_type_support_data_t
{
  void * data[3];
} _CancelGoal_Request_type_support_data_t;

static _CancelGoal_Request_type_support_data_t _CancelGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelGoal_Request_message_typesupport_map = {
  3,
  "action_msgs",
  &_CancelGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CancelGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CancelGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CancelGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Request>()
{
  return &::action_msgs::srv::rosidl_typesupport_cpp::CancelGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_msgs, srv, CancelGoal_Request)() {
  return get_message_type_support_handle<action_msgs::srv::CancelGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _CancelGoal_Response_type_support_ids_t;

static const _CancelGoal_Response_type_support_ids_t _CancelGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _CancelGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _CancelGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelGoal_Response_type_support_symbol_names_t _CancelGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_msgs, srv, CancelGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal_Response)),
  }
};

typedef struct _CancelGoal_Response_type_support_data_t
{
  void * data[3];
} _CancelGoal_Response_type_support_data_t;

static _CancelGoal_Response_type_support_data_t _CancelGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelGoal_Response_message_typesupport_map = {
  3,
  "action_msgs",
  &_CancelGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CancelGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CancelGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CancelGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Response>()
{
  return &::action_msgs::srv::rosidl_typesupport_cpp::CancelGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_msgs, srv, CancelGoal_Response)() {
  return get_message_type_support_handle<action_msgs::srv::CancelGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CancelGoal_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _CancelGoal_type_support_ids_t;

static const _CancelGoal_type_support_ids_t _CancelGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _CancelGoal_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _CancelGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CancelGoal_type_support_symbol_names_t _CancelGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_msgs, srv, CancelGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, action_msgs, srv, CancelGoal)),
  }
};

typedef struct _CancelGoal_type_support_data_t
{
  void * data[3];
} _CancelGoal_type_support_data_t;

static _CancelGoal_type_support_data_t _CancelGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CancelGoal_service_typesupport_map = {
  3,
  "action_msgs",
  &_CancelGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CancelGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CancelGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CancelGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CancelGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace action_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<action_msgs::srv::CancelGoal>()
{
  return &::action_msgs::srv::rosidl_typesupport_cpp::CancelGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
