// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/Point2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/point2_d__functions.h"
#include "interfaces_pkg/msg/detail/point2_d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__Point2D__init(message_memory);
}

void interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_fini_function(void * message_memory)
{
  interfaces_pkg__msg__Point2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__Point2D, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__Point2D, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "Point2D",  // message name
  2,  // number of fields
  sizeof(interfaces_pkg__msg__Point2D),
  interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_member_array,  // message members
  interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_type_support_handle = {
  0,
  &interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, Point2D)() {
  if (!interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_type_support_handle.typesupport_identifier) {
    interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_pkg__msg__Point2D__rosidl_typesupport_introspection_c__Point2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
