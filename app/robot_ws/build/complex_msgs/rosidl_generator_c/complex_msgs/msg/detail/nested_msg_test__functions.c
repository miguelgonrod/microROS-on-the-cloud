// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data14`
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

bool
complex_msgs__msg__NestedMsgTest__init(complex_msgs__msg__NestedMsgTest * msg)
{
  if (!msg) {
    return false;
  }
  // data1
  // data2
  // data3
  // data4
  // data5
  // data6
  // data7
  // data8
  // data9
  // data10
  // data11
  // data12
  // data13
  // data14
  if (!complex_msgs__msg__MultiStringTest__init(&msg->data14)) {
    complex_msgs__msg__NestedMsgTest__fini(msg);
    return false;
  }
  return true;
}

void
complex_msgs__msg__NestedMsgTest__fini(complex_msgs__msg__NestedMsgTest * msg)
{
  if (!msg) {
    return;
  }
  // data1
  // data2
  // data3
  // data4
  // data5
  // data6
  // data7
  // data8
  // data9
  // data10
  // data11
  // data12
  // data13
  // data14
  complex_msgs__msg__MultiStringTest__fini(&msg->data14);
}

bool
complex_msgs__msg__NestedMsgTest__are_equal(const complex_msgs__msg__NestedMsgTest * lhs, const complex_msgs__msg__NestedMsgTest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data1
  if (lhs->data1 != rhs->data1) {
    return false;
  }
  // data2
  if (lhs->data2 != rhs->data2) {
    return false;
  }
  // data3
  if (lhs->data3 != rhs->data3) {
    return false;
  }
  // data4
  if (lhs->data4 != rhs->data4) {
    return false;
  }
  // data5
  if (lhs->data5 != rhs->data5) {
    return false;
  }
  // data6
  if (lhs->data6 != rhs->data6) {
    return false;
  }
  // data7
  if (lhs->data7 != rhs->data7) {
    return false;
  }
  // data8
  if (lhs->data8 != rhs->data8) {
    return false;
  }
  // data9
  if (lhs->data9 != rhs->data9) {
    return false;
  }
  // data10
  if (lhs->data10 != rhs->data10) {
    return false;
  }
  // data11
  if (lhs->data11 != rhs->data11) {
    return false;
  }
  // data12
  if (lhs->data12 != rhs->data12) {
    return false;
  }
  // data13
  if (lhs->data13 != rhs->data13) {
    return false;
  }
  // data14
  if (!complex_msgs__msg__MultiStringTest__are_equal(
      &(lhs->data14), &(rhs->data14)))
  {
    return false;
  }
  return true;
}

bool
complex_msgs__msg__NestedMsgTest__copy(
  const complex_msgs__msg__NestedMsgTest * input,
  complex_msgs__msg__NestedMsgTest * output)
{
  if (!input || !output) {
    return false;
  }
  // data1
  output->data1 = input->data1;
  // data2
  output->data2 = input->data2;
  // data3
  output->data3 = input->data3;
  // data4
  output->data4 = input->data4;
  // data5
  output->data5 = input->data5;
  // data6
  output->data6 = input->data6;
  // data7
  output->data7 = input->data7;
  // data8
  output->data8 = input->data8;
  // data9
  output->data9 = input->data9;
  // data10
  output->data10 = input->data10;
  // data11
  output->data11 = input->data11;
  // data12
  output->data12 = input->data12;
  // data13
  output->data13 = input->data13;
  // data14
  if (!complex_msgs__msg__MultiStringTest__copy(
      &(input->data14), &(output->data14)))
  {
    return false;
  }
  return true;
}

complex_msgs__msg__NestedMsgTest *
complex_msgs__msg__NestedMsgTest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__NestedMsgTest * msg = (complex_msgs__msg__NestedMsgTest *)allocator.allocate(sizeof(complex_msgs__msg__NestedMsgTest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(complex_msgs__msg__NestedMsgTest));
  bool success = complex_msgs__msg__NestedMsgTest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
complex_msgs__msg__NestedMsgTest__destroy(complex_msgs__msg__NestedMsgTest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    complex_msgs__msg__NestedMsgTest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
complex_msgs__msg__NestedMsgTest__Sequence__init(complex_msgs__msg__NestedMsgTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__NestedMsgTest * data = NULL;

  if (size) {
    data = (complex_msgs__msg__NestedMsgTest *)allocator.zero_allocate(size, sizeof(complex_msgs__msg__NestedMsgTest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = complex_msgs__msg__NestedMsgTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        complex_msgs__msg__NestedMsgTest__fini(&data[i - 1]);
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
complex_msgs__msg__NestedMsgTest__Sequence__fini(complex_msgs__msg__NestedMsgTest__Sequence * array)
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
      complex_msgs__msg__NestedMsgTest__fini(&array->data[i]);
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

complex_msgs__msg__NestedMsgTest__Sequence *
complex_msgs__msg__NestedMsgTest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  complex_msgs__msg__NestedMsgTest__Sequence * array = (complex_msgs__msg__NestedMsgTest__Sequence *)allocator.allocate(sizeof(complex_msgs__msg__NestedMsgTest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = complex_msgs__msg__NestedMsgTest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
complex_msgs__msg__NestedMsgTest__Sequence__destroy(complex_msgs__msg__NestedMsgTest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    complex_msgs__msg__NestedMsgTest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
complex_msgs__msg__NestedMsgTest__Sequence__are_equal(const complex_msgs__msg__NestedMsgTest__Sequence * lhs, const complex_msgs__msg__NestedMsgTest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!complex_msgs__msg__NestedMsgTest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
complex_msgs__msg__NestedMsgTest__Sequence__copy(
  const complex_msgs__msg__NestedMsgTest__Sequence * input,
  complex_msgs__msg__NestedMsgTest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(complex_msgs__msg__NestedMsgTest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    complex_msgs__msg__NestedMsgTest * data =
      (complex_msgs__msg__NestedMsgTest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!complex_msgs__msg__NestedMsgTest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          complex_msgs__msg__NestedMsgTest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!complex_msgs__msg__NestedMsgTest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
