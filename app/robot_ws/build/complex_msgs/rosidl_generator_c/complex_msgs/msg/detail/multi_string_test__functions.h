// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__FUNCTIONS_H_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "complex_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "complex_msgs/msg/detail/multi_string_test__struct.h"

/// Initialize msg/MultiStringTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * complex_msgs__msg__MultiStringTest
 * )) before or use
 * complex_msgs__msg__MultiStringTest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__init(complex_msgs__msg__MultiStringTest * msg);

/// Finalize msg/MultiStringTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__MultiStringTest__fini(complex_msgs__msg__MultiStringTest * msg);

/// Create msg/MultiStringTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * complex_msgs__msg__MultiStringTest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
complex_msgs__msg__MultiStringTest *
complex_msgs__msg__MultiStringTest__create();

/// Destroy msg/MultiStringTest message.
/**
 * It calls
 * complex_msgs__msg__MultiStringTest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__MultiStringTest__destroy(complex_msgs__msg__MultiStringTest * msg);

/// Check for msg/MultiStringTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__are_equal(const complex_msgs__msg__MultiStringTest * lhs, const complex_msgs__msg__MultiStringTest * rhs);

/// Copy a msg/MultiStringTest message.
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
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__copy(
  const complex_msgs__msg__MultiStringTest * input,
  complex_msgs__msg__MultiStringTest * output);

/// Initialize array of msg/MultiStringTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * complex_msgs__msg__MultiStringTest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__Sequence__init(complex_msgs__msg__MultiStringTest__Sequence * array, size_t size);

/// Finalize array of msg/MultiStringTest messages.
/**
 * It calls
 * complex_msgs__msg__MultiStringTest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__MultiStringTest__Sequence__fini(complex_msgs__msg__MultiStringTest__Sequence * array);

/// Create array of msg/MultiStringTest messages.
/**
 * It allocates the memory for the array and calls
 * complex_msgs__msg__MultiStringTest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
complex_msgs__msg__MultiStringTest__Sequence *
complex_msgs__msg__MultiStringTest__Sequence__create(size_t size);

/// Destroy array of msg/MultiStringTest messages.
/**
 * It calls
 * complex_msgs__msg__MultiStringTest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__MultiStringTest__Sequence__destroy(complex_msgs__msg__MultiStringTest__Sequence * array);

/// Check for msg/MultiStringTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__Sequence__are_equal(const complex_msgs__msg__MultiStringTest__Sequence * lhs, const complex_msgs__msg__MultiStringTest__Sequence * rhs);

/// Copy an array of msg/MultiStringTest messages.
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
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__MultiStringTest__Sequence__copy(
  const complex_msgs__msg__MultiStringTest__Sequence * input,
  complex_msgs__msg__MultiStringTest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__FUNCTIONS_H_
