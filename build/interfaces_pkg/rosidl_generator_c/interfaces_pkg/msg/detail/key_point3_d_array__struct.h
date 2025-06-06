// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "interfaces_pkg/msg/detail/key_point3_d__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyPoint3DArray in the package interfaces_pkg.
/**
  * represents all the keypoints for human pose estimation in meters
 */
typedef struct interfaces_pkg__msg__KeyPoint3DArray
{
  interfaces_pkg__msg__KeyPoint3D__Sequence data;
  /// frame reference
  rosidl_runtime_c__String frame_id;
} interfaces_pkg__msg__KeyPoint3DArray;

// Struct for a sequence of interfaces_pkg__msg__KeyPoint3DArray.
typedef struct interfaces_pkg__msg__KeyPoint3DArray__Sequence
{
  interfaces_pkg__msg__KeyPoint3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__KeyPoint3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_
