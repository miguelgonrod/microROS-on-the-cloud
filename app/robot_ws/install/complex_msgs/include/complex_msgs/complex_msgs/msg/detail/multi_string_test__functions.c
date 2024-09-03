// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data1`
// Member `data2`
// Member `data3`
// Member `data4`
#include "rosidl_runtime_c/string_functions.h"

bool
complex_msgs__msg__MultiStringTest__init(complex_msgs__msg__MultiStringTest * msg)
{
  if (!msg) {
    return false;
  }
  // data1
  if (!rosidl_runtime_c__String__init(&msg->data1)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__init(&msg->data2)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__init(&msg->data3)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__init(&msg->data4)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  return true;
}

void
complex_msgs__msg__MultiStringTest__fini(complex_msgs__msg__MultiStringTest * msg)
{
  if (!msg) {
    return;
  }
  // data1
  rosidl_runtime_c__String__fini(&msg->data1);
  // data2
  rosidl_runtime_c__String__fini(&msg->data2);
  // data3
  rosidl_runtime_c__String__fini(&msg->data3);
  // data4
  rosidl_runtime_c__String__fini(&msg->data4);
}

bool
complex_msgs__msg__MultiStringTest__are_equal(const complex_msgs__msg__MultiStringTest * lhs, const complex_msgs__msg__MultiStringTest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data1), &(rhs->data1)))
  {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data2), &(rhs->data2)))
  {
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data3), &(rhs->data3)))
  {
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data4), &(rhs->data4)))
  {
    return false;
  }
  return true;
}

bool
complex_msgs__msg__MultiStringTest__copy(
  const complex_msgs__msg__MultiStringTest * input,
  complex_msgs__msg__MultiStringTest * output)
{
  if (!input || !output) {
    return false;
  }
  // data1
  if (!rosidl_runtime_c__String__copy(
      &(input->data1), &(output->data1)))
  {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__copy(
      &(input->data2), &(output->data2)))
  {
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__copy(
      &(input->data3), &(output->data3)))
  {
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__copy(
      &(input->data4), &(output->data4)))
  {
    return false;
  }
  return true;
}

complex_msgs__msg__MultiStringTest *
complex_msgs__msg__MultiStringTest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__MultiStringTest * msg = (complex_msgs__msg__MultiStringTest *)allocator.allocate(sizeof(complex_msgs__msg__MultiStringTest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(complex_msgs__msg__MultiStringTest));
  bool success = complex_msgs__msg__MultiStringTest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
complex_msgs__msg__MultiStringTest__destroy(complex_msgs__msg__MultiStringTest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    complex_msgs__msg__MultiStringTest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
complex_msgs__msg__MultiStringTest__Sequence__init(complex_msgs__msg__MultiStringTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__MultiStringTest * data = NULL;

  if (size) {
    data = (complex_msgs__msg__MultiStringTest *)allocator.zero_allocate(size, sizeof(complex_msgs__msg__MultiStringTest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = complex_msgs__msg__MultiStringTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        complex_msgs__msg__MultiStringTest__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
complex_msgs__msg__MultiStringTest__Sequence__fini(complex_msgs__msg__MultiStringTest__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      complex_msgs__msg__MultiStringTest__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

complex_msgs__msg__MultiStringTest__Sequence *
complex_msgs__msg__MultiStringTest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__MultiStringTest__Sequence * array = (complex_msgs__msg__MultiStringTest__Sequence *)allocator.allocate(sizeof(complex_msgs__msg__MultiStringTest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = complex_msgs__msg__MultiStringTest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
complex_msgs__msg__MultiStringTest__Sequence__destroy(complex_msgs__msg__MultiStringTest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    complex_msgs__msg__MultiStringTest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
complex_msgs__msg__MultiStringTest__Sequence__are_equal(const complex_msgs__msg__MultiStringTest__Sequence * lhs, const complex_msgs__msg__MultiStringTest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!complex_msgs__msg__MultiStringTest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
complex_msgs__msg__MultiStringTest__Sequence__copy(
  const complex_msgs__msg__MultiStringTest__Sequence * input,
  complex_msgs__msg__MultiStringTest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(complex_msgs__msg__MultiStringTest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    complex_msgs__msg__MultiStringTest * data =
      (complex_msgs__msg__MultiStringTest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!complex_msgs__msg__MultiStringTest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          complex_msgs__msg__MultiStringTest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!complex_msgs__msg__MultiStringTest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
