// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_interfaces/action/detail/fibonacci__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Goal_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_Goal_type_support_ids_t;

static const _Fibonacci_Goal_type_support_ids_t _Fibonacci_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Goal_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Goal_type_support_symbol_names_t _Fibonacci_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Goal)),
  }
};

typedef struct _Fibonacci_Goal_type_support_data_t
{
  void * data[3];
} _Fibonacci_Goal_type_support_data_t;

static _Fibonacci_Goal_type_support_data_t _Fibonacci_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Goal_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Goal>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_Goal)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_Goal>();
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
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Result_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_Result_type_support_ids_t;

static const _Fibonacci_Result_type_support_ids_t _Fibonacci_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Result_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Result_type_support_symbol_names_t _Fibonacci_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Result)),
  }
};

typedef struct _Fibonacci_Result_type_support_data_t
{
  void * data[3];
} _Fibonacci_Result_type_support_data_t;

static _Fibonacci_Result_type_support_data_t _Fibonacci_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Result_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Result>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_Result)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_Result>();
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
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_Feedback_type_support_ids_t;

static const _Fibonacci_Feedback_type_support_ids_t _Fibonacci_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Feedback_type_support_symbol_names_t _Fibonacci_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Feedback)),
  }
};

typedef struct _Fibonacci_Feedback_type_support_data_t
{
  void * data[3];
} _Fibonacci_Feedback_type_support_data_t;

static _Fibonacci_Feedback_type_support_data_t _Fibonacci_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Feedback_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Feedback>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_Feedback)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_Feedback>();
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
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_SendGoal_Request_type_support_ids_t;

static const _Fibonacci_SendGoal_Request_type_support_ids_t _Fibonacci_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Request_type_support_symbol_names_t _Fibonacci_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Request)),
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_data_t
{
  void * data[3];
} _Fibonacci_SendGoal_Request_type_support_data_t;

static _Fibonacci_SendGoal_Request_type_support_data_t _Fibonacci_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Request_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_SendGoal_Request)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Request>();
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
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_SendGoal_Response_type_support_ids_t;

static const _Fibonacci_SendGoal_Response_type_support_ids_t _Fibonacci_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Response_type_support_symbol_names_t _Fibonacci_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Response)),
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_data_t
{
  void * data[3];
} _Fibonacci_SendGoal_Response_type_support_data_t;

static _Fibonacci_SendGoal_Response_type_support_data_t _Fibonacci_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Response_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_SendGoal_Response)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_SendGoal_type_support_ids_t;

static const _Fibonacci_SendGoal_type_support_ids_t _Fibonacci_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_type_support_symbol_names_t _Fibonacci_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal)),
  }
};

typedef struct _Fibonacci_SendGoal_type_support_data_t
{
  void * data[3];
} _Fibonacci_SendGoal_type_support_data_t;

static _Fibonacci_SendGoal_type_support_data_t _Fibonacci_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_service_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::action::Fibonacci_SendGoal>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_GetResult_Request_type_support_ids_t;

static const _Fibonacci_GetResult_Request_type_support_ids_t _Fibonacci_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Request_type_support_symbol_names_t _Fibonacci_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Request)),
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_data_t
{
  void * data[3];
} _Fibonacci_GetResult_Request_type_support_data_t;

static _Fibonacci_GetResult_Request_type_support_data_t _Fibonacci_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Request_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Request>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_GetResult_Request)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Request>();
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
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_GetResult_Response_type_support_ids_t;

static const _Fibonacci_GetResult_Response_type_support_ids_t _Fibonacci_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Response_type_support_symbol_names_t _Fibonacci_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Response)),
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_data_t
{
  void * data[3];
} _Fibonacci_GetResult_Response_type_support_data_t;

static _Fibonacci_GetResult_Response_type_support_data_t _Fibonacci_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Response_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Response>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_GetResult_Response)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_GetResult_type_support_ids_t;

static const _Fibonacci_GetResult_type_support_ids_t _Fibonacci_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_type_support_symbol_names_t _Fibonacci_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult)),
  }
};

typedef struct _Fibonacci_GetResult_type_support_data_t
{
  void * data[3];
} _Fibonacci_GetResult_type_support_data_t;

static _Fibonacci_GetResult_type_support_data_t _Fibonacci_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_service_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::action::Fibonacci_GetResult>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
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

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fibonacci_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Fibonacci_FeedbackMessage_type_support_ids_t;

static const _Fibonacci_FeedbackMessage_type_support_ids_t _Fibonacci_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Fibonacci_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_FeedbackMessage_type_support_symbol_names_t _Fibonacci_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, action, Fibonacci_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, action, Fibonacci_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_FeedbackMessage)),
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_data_t
{
  void * data[3];
} _Fibonacci_FeedbackMessage_type_support_data_t;

static _Fibonacci_FeedbackMessage_type_support_data_t _Fibonacci_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_FeedbackMessage_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Fibonacci_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return &::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, action, Fibonacci_FeedbackMessage)() {
  return get_message_type_support_handle<example_interfaces::action::Fibonacci_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Fibonacci_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<example_interfaces::action::Fibonacci>()
{
  using ::example_interfaces::action::rosidl_typesupport_cpp::Fibonacci_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Fibonacci_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::example_interfaces::action::Fibonacci::Impl::SendGoalService>();
  Fibonacci_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::example_interfaces::action::Fibonacci::Impl::GetResultService>();
  Fibonacci_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::example_interfaces::action::Fibonacci::Impl::CancelGoalService>();
  Fibonacci_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::example_interfaces::action::Fibonacci::Impl::FeedbackMessage>();
  Fibonacci_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::example_interfaces::action::Fibonacci::Impl::GoalStatusMessage>();
  return &Fibonacci_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
