// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/MoveGroupSequence.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_Goal_type_support_ids_t;

static const _MoveGroupSequence_Goal_type_support_ids_t _MoveGroupSequence_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_Goal_type_support_symbol_names_t _MoveGroupSequence_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_Goal)),
  }
};

typedef struct _MoveGroupSequence_Goal_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_Goal_type_support_data_t;

static _MoveGroupSequence_Goal_type_support_data_t _MoveGroupSequence_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Goal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_Goal)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Goal>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_Result_type_support_ids_t;

static const _MoveGroupSequence_Result_type_support_ids_t _MoveGroupSequence_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_Result_type_support_symbol_names_t _MoveGroupSequence_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_Result)),
  }
};

typedef struct _MoveGroupSequence_Result_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_Result_type_support_data_t;

static _MoveGroupSequence_Result_type_support_data_t _MoveGroupSequence_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Result>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_Result)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Result>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_Feedback_type_support_ids_t;

static const _MoveGroupSequence_Feedback_type_support_ids_t _MoveGroupSequence_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_Feedback_type_support_symbol_names_t _MoveGroupSequence_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_Feedback)),
  }
};

typedef struct _MoveGroupSequence_Feedback_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_Feedback_type_support_data_t;

static _MoveGroupSequence_Feedback_type_support_data_t _MoveGroupSequence_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Feedback>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_Feedback)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_Feedback>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_SendGoal_Request_type_support_ids_t;

static const _MoveGroupSequence_SendGoal_Request_type_support_ids_t _MoveGroupSequence_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_SendGoal_Request_type_support_symbol_names_t _MoveGroupSequence_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)),
  }
};

typedef struct _MoveGroupSequence_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_SendGoal_Request_type_support_data_t;

static _MoveGroupSequence_SendGoal_Request_type_support_data_t _MoveGroupSequence_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal_Request>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_SendGoal_Response_type_support_ids_t;

static const _MoveGroupSequence_SendGoal_Response_type_support_ids_t _MoveGroupSequence_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_SendGoal_Response_type_support_symbol_names_t _MoveGroupSequence_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)),
  }
};

typedef struct _MoveGroupSequence_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_SendGoal_Response_type_support_data_t;

static _MoveGroupSequence_SendGoal_Response_type_support_data_t _MoveGroupSequence_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_SendGoal_type_support_ids_t;

static const _MoveGroupSequence_SendGoal_type_support_ids_t _MoveGroupSequence_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_SendGoal_type_support_symbol_names_t _MoveGroupSequence_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal)),
  }
};

typedef struct _MoveGroupSequence_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_SendGoal_type_support_data_t;

static _MoveGroupSequence_SendGoal_type_support_data_t _MoveGroupSequence_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveGroupSequence_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<moveit_msgs::action::MoveGroupSequence_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_GetResult_Request_type_support_ids_t;

static const _MoveGroupSequence_GetResult_Request_type_support_ids_t _MoveGroupSequence_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_GetResult_Request_type_support_symbol_names_t _MoveGroupSequence_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Request)),
  }
};

typedef struct _MoveGroupSequence_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_GetResult_Request_type_support_data_t;

static _MoveGroupSequence_GetResult_Request_type_support_data_t _MoveGroupSequence_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult_Request>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_GetResult_Response_type_support_ids_t;

static const _MoveGroupSequence_GetResult_Response_type_support_ids_t _MoveGroupSequence_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_GetResult_Response_type_support_symbol_names_t _MoveGroupSequence_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Response)),
  }
};

typedef struct _MoveGroupSequence_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_GetResult_Response_type_support_data_t;

static _MoveGroupSequence_GetResult_Response_type_support_data_t _MoveGroupSequence_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_GetResult_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult_Response>();
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
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_GetResult_type_support_ids_t;

static const _MoveGroupSequence_GetResult_type_support_ids_t _MoveGroupSequence_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_GetResult_type_support_symbol_names_t _MoveGroupSequence_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_GetResult)),
  }
};

typedef struct _MoveGroupSequence_GetResult_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_GetResult_type_support_data_t;

static _MoveGroupSequence_GetResult_type_support_data_t _MoveGroupSequence_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveGroupSequence_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<moveit_msgs::action::MoveGroupSequence_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGroupSequence_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGroupSequence_FeedbackMessage_type_support_ids_t;

static const _MoveGroupSequence_FeedbackMessage_type_support_ids_t _MoveGroupSequence_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGroupSequence_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGroupSequence_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGroupSequence_FeedbackMessage_type_support_symbol_names_t _MoveGroupSequence_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, MoveGroupSequence_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, MoveGroupSequence_FeedbackMessage)),
  }
};

typedef struct _MoveGroupSequence_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveGroupSequence_FeedbackMessage_type_support_data_t;

static _MoveGroupSequence_FeedbackMessage_type_support_data_t _MoveGroupSequence_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGroupSequence_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_MoveGroupSequence_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGroupSequence_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGroupSequence_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGroupSequence_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGroupSequence_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_FeedbackMessage>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence_FeedbackMessage)() {
  return get_message_type_support_handle<moveit_msgs::action::MoveGroupSequence_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MoveGroupSequence_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<moveit_msgs::action::MoveGroupSequence>()
{
  using ::moveit_msgs::action::rosidl_typesupport_cpp::MoveGroupSequence_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveGroupSequence_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::moveit_msgs::action::MoveGroupSequence::Impl::SendGoalService>();
  MoveGroupSequence_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::moveit_msgs::action::MoveGroupSequence::Impl::GetResultService>();
  MoveGroupSequence_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::moveit_msgs::action::MoveGroupSequence::Impl::CancelGoalService>();
  MoveGroupSequence_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::moveit_msgs::action::MoveGroupSequence::Impl::FeedbackMessage>();
  MoveGroupSequence_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::moveit_msgs::action::MoveGroupSequence::Impl::GoalStatusMessage>();
  return &MoveGroupSequence_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, MoveGroupSequence)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<moveit_msgs::action::MoveGroupSequence>();
}

#ifdef __cplusplus
}
#endif
