// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaces_pkg:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__FUNCTIONS_H_
#define INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces_pkg/msg/detail/key_point2_d_array__struct.h"

/// Initialize msg/KeyPoint2DArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces_pkg__msg__KeyPoint2DArray
 * )) before or use
 * interfaces_pkg__msg__KeyPoint2DArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__init(interfaces_pkg__msg__KeyPoint2DArray * msg);

/// Finalize msg/KeyPoint2DArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
void
interfaces_pkg__msg__KeyPoint2DArray__fini(interfaces_pkg__msg__KeyPoint2DArray * msg);

/// Create msg/KeyPoint2DArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces_pkg__msg__KeyPoint2DArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
interfaces_pkg__msg__KeyPoint2DArray *
interfaces_pkg__msg__KeyPoint2DArray__create();

/// Destroy msg/KeyPoint2DArray message.
/**
 * It calls
 * interfaces_pkg__msg__KeyPoint2DArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
void
interfaces_pkg__msg__KeyPoint2DArray__destroy(interfaces_pkg__msg__KeyPoint2DArray * msg);

/// Check for msg/KeyPoint2DArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__are_equal(const interfaces_pkg__msg__KeyPoint2DArray * lhs, const interfaces_pkg__msg__KeyPoint2DArray * rhs);

/// Copy a msg/KeyPoint2DArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__copy(
  const interfaces_pkg__msg__KeyPoint2DArray * input,
  interfaces_pkg__msg__KeyPoint2DArray * output);

/// Initialize array of msg/KeyPoint2DArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces_pkg__msg__KeyPoint2DArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__Sequence__init(interfaces_pkg__msg__KeyPoint2DArray__Sequence * array, size_t size);

/// Finalize array of msg/KeyPoint2DArray messages.
/**
 * It calls
 * interfaces_pkg__msg__KeyPoint2DArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
void
interfaces_pkg__msg__KeyPoint2DArray__Sequence__fini(interfaces_pkg__msg__KeyPoint2DArray__Sequence * array);

/// Create array of msg/KeyPoint2DArray messages.
/**
 * It allocates the memory for the array and calls
 * interfaces_pkg__msg__KeyPoint2DArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
interfaces_pkg__msg__KeyPoint2DArray__Sequence *
interfaces_pkg__msg__KeyPoint2DArray__Sequence__create(size_t size);

/// Destroy array of msg/KeyPoint2DArray messages.
/**
 * It calls
 * interfaces_pkg__msg__KeyPoint2DArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
void
interfaces_pkg__msg__KeyPoint2DArray__Sequence__destroy(interfaces_pkg__msg__KeyPoint2DArray__Sequence * array);

/// Check for msg/KeyPoint2DArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__Sequence__are_equal(const interfaces_pkg__msg__KeyPoint2DArray__Sequence * lhs, const interfaces_pkg__msg__KeyPoint2DArray__Sequence * rhs);

/// Copy an array of msg/KeyPoint2DArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_pkg
bool
interfaces_pkg__msg__KeyPoint2DArray__Sequence__copy(
  const interfaces_pkg__msg__KeyPoint2DArray__Sequence * input,
  interfaces_pkg__msg__KeyPoint2DArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__KEY_POINT2_D_ARRAY__FUNCTIONS_H_
