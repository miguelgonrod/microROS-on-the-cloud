// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice
#include "my_custom_message/msg/detail/my_custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_custom_message__msg__MyCustomMessage__init(my_custom_message__msg__MyCustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // bool_test
  // byte_test
  // char_test
  // float32_test
  // double_test
  // int8_test
  // uint8_test
  // int16_test
  // uint16_test
  // int32_test
  // uint32_test
  // int64_test
  // uint64_test
  return true;
}

void
my_custom_message__msg__MyCustomMessage__fini(my_custom_message__msg__MyCustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // bool_test
  // byte_test
  // char_test
  // float32_test
  // double_test
  // int8_test
  // uint8_test
  // int16_test
  // uint16_test
  // int32_test
  // uint32_test
  // int64_test
  // uint64_test
}

bool
my_custom_message__msg__MyCustomMessage__are_equal(const my_custom_message__msg__MyCustomMessage * lhs, const my_custom_message__msg__MyCustomMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bool_test
  if (lhs->bool_test != rhs->bool_test) {
    return false;
  }
  // byte_test
  if (lhs->byte_test != rhs->byte_test) {
    return false;
  }
  // char_test
  if (lhs->char_test != rhs->char_test) {
    return false;
  }
  // float32_test
  if (lhs->float32_test != rhs->float32_test) {
    return false;
  }
  // double_test
  if (lhs->double_test != rhs->double_test) {
    return false;
  }
  // int8_test
  if (lhs->int8_test != rhs->int8_test) {
    return false;
  }
  // uint8_test
  if (lhs->uint8_test != rhs->uint8_test) {
    return false;
  }
  // int16_test
  if (lhs->int16_test != rhs->int16_test) {
    return false;
  }
  // uint16_test
  if (lhs->uint16_test != rhs->uint16_test) {
    return false;
  }
  // int32_test
  if (lhs->int32_test != rhs->int32_test) {
    return false;
  }
  // uint32_test
  if (lhs->uint32_test != rhs->uint32_test) {
    return false;
  }
  // int64_test
  if (lhs->int64_test != rhs->int64_test) {
    return false;
  }
  // uint64_test
  if (lhs->uint64_test != rhs->uint64_test) {
    return false;
  }
  return true;
}

bool
my_custom_message__msg__MyCustomMessage__copy(
  const my_custom_message__msg__MyCustomMessage * input,
  my_custom_message__msg__MyCustomMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // bool_test
  output->bool_test = input->bool_test;
  // byte_test
  output->byte_test = input->byte_test;
  // char_test
  output->char_test = input->char_test;
  // float32_test
  output->float32_test = input->float32_test;
  // double_test
  output->double_test = input->double_test;
  // int8_test
  output->int8_test = input->int8_test;
  // uint8_test
  output->uint8_test = input->uint8_test;
  // int16_test
  output->int16_test = input->int16_test;
  // uint16_test
  output->uint16_test = input->uint16_test;
  // int32_test
  output->int32_test = input->int32_test;
  // uint32_test
  output->uint32_test = input->uint32_test;
  // int64_test
  output->int64_test = input->int64_test;
  // uint64_test
  output->uint64_test = input->uint64_test;
  return true;
}

my_custom_message__msg__MyCustomMessage *
my_custom_message__msg__MyCustomMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__MyCustomMessage * msg = (my_custom_message__msg__MyCustomMessage *)allocator.allocate(sizeof(my_custom_message__msg__MyCustomMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_message__msg__MyCustomMessage));
  bool success = my_custom_message__msg__MyCustomMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_message__msg__MyCustomMessage__destroy(my_custom_message__msg__MyCustomMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_message__msg__MyCustomMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_message__msg__MyCustomMessage__Sequence__init(my_custom_message__msg__MyCustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__MyCustomMessage * data = NULL;

  if (size) {
    data = (my_custom_message__msg__MyCustomMessage *)allocator.zero_allocate(size, sizeof(my_custom_message__msg__MyCustomMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_message__msg__MyCustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_message__msg__MyCustomMessage__fini(&data[i - 1]);
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
my_custom_message__msg__MyCustomMessage__Sequence__fini(my_custom_message__msg__MyCustomMessage__Sequence * array)
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
      my_custom_message__msg__MyCustomMessage__fini(&array->data[i]);
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

my_custom_message__msg__MyCustomMessage__Sequence *
my_custom_message__msg__MyCustomMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__MyCustomMessage__Sequence * array = (my_custom_message__msg__MyCustomMessage__Sequence *)allocator.allocate(sizeof(my_custom_message__msg__MyCustomMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_message__msg__MyCustomMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_message__msg__MyCustomMessage__Sequence__destroy(my_custom_message__msg__MyCustomMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_message__msg__MyCustomMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_message__msg__MyCustomMessage__Sequence__are_equal(const my_custom_message__msg__MyCustomMessage__Sequence * lhs, const my_custom_message__msg__MyCustomMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_message__msg__MyCustomMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_message__msg__MyCustomMessage__Sequence__copy(
  const my_custom_message__msg__MyCustomMessage__Sequence * input,
  my_custom_message__msg__MyCustomMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_message__msg__MyCustomMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_message__msg__MyCustomMessage * data =
      (my_custom_message__msg__MyCustomMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_message__msg__MyCustomMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_message__msg__MyCustomMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_message__msg__MyCustomMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
