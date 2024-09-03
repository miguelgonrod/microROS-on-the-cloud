// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"
#include "test_msgs/msg/detail/multi_nested__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "test_msgs/msg/detail/arrays__functions.h"
#include "test_msgs/msg/detail/bounded_sequences__functions.h"
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"
// end nested array functions include
bool test_msgs__msg__arrays__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__arrays__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__bounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__bounded_sequences__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__unbounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__unbounded_sequences__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__arrays__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__arrays__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__bounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__bounded_sequences__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__unbounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__unbounded_sequences__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__arrays__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__arrays__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__bounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__bounded_sequences__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__unbounded_sequences__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__unbounded_sequences__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test_msgs__msg__multi_nested__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("test_msgs.msg._multi_nested.MultiNested", full_classname_dest, 39) == 0);
  }
  test_msgs__msg__MultiNested * ros_message = _ros_message;
  {  // array_of_arrays
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_of_arrays");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'array_of_arrays'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__Arrays * dest = ros_message->array_of_arrays;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__arrays__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // array_of_bounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_of_bounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'array_of_bounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__BoundedSequences * dest = ros_message->array_of_bounded_sequences;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__bounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // array_of_unbounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_of_unbounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'array_of_unbounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__UnboundedSequences * dest = ros_message->array_of_unbounded_sequences;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__unbounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_sequence_of_arrays
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_sequence_of_arrays");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_sequence_of_arrays'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&(ros_message->bounded_sequence_of_arrays), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__Arrays__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__Arrays * dest = ros_message->bounded_sequence_of_arrays.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__arrays__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_sequence_of_bounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_sequence_of_bounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_sequence_of_bounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&(ros_message->bounded_sequence_of_bounded_sequences), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__BoundedSequences__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__BoundedSequences * dest = ros_message->bounded_sequence_of_bounded_sequences.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__bounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bounded_sequence_of_unbounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_sequence_of_unbounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_sequence_of_unbounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&(ros_message->bounded_sequence_of_unbounded_sequences), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__UnboundedSequences__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__UnboundedSequences * dest = ros_message->bounded_sequence_of_unbounded_sequences.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__unbounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // unbounded_sequence_of_arrays
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_sequence_of_arrays");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_sequence_of_arrays'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&(ros_message->unbounded_sequence_of_arrays), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__Arrays__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__Arrays * dest = ros_message->unbounded_sequence_of_arrays.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__arrays__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // unbounded_sequence_of_bounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_sequence_of_bounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_sequence_of_bounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&(ros_message->unbounded_sequence_of_bounded_sequences), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__BoundedSequences__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__BoundedSequences * dest = ros_message->unbounded_sequence_of_bounded_sequences.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__bounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // unbounded_sequence_of_unbounded_sequences
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_sequence_of_unbounded_sequences");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_sequence_of_unbounded_sequences'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&(ros_message->unbounded_sequence_of_unbounded_sequences), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create test_msgs__msg__UnboundedSequences__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    test_msgs__msg__UnboundedSequences * dest = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__unbounded_sequences__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_msgs__msg__multi_nested__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MultiNested */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_msgs.msg._multi_nested");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiNested");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_msgs__msg__MultiNested * ros_message = (test_msgs__msg__MultiNested *)raw_ros_message;
  {  // array_of_arrays
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__Arrays * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->array_of_arrays[i]);
      PyObject * pyitem = test_msgs__msg__arrays__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "array_of_arrays", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // array_of_bounded_sequences
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__BoundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->array_of_bounded_sequences[i]);
      PyObject * pyitem = test_msgs__msg__bounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "array_of_bounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // array_of_unbounded_sequences
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__UnboundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->array_of_unbounded_sequences[i]);
      PyObject * pyitem = test_msgs__msg__unbounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "array_of_unbounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_sequence_of_arrays
    PyObject * field = NULL;
    size_t size = ros_message->bounded_sequence_of_arrays.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__Arrays * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bounded_sequence_of_arrays.data[i]);
      PyObject * pyitem = test_msgs__msg__arrays__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_sequence_of_arrays", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_sequence_of_bounded_sequences
    PyObject * field = NULL;
    size_t size = ros_message->bounded_sequence_of_bounded_sequences.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__BoundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bounded_sequence_of_bounded_sequences.data[i]);
      PyObject * pyitem = test_msgs__msg__bounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_sequence_of_bounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_sequence_of_unbounded_sequences
    PyObject * field = NULL;
    size_t size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__UnboundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bounded_sequence_of_unbounded_sequences.data[i]);
      PyObject * pyitem = test_msgs__msg__unbounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_sequence_of_unbounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_sequence_of_arrays
    PyObject * field = NULL;
    size_t size = ros_message->unbounded_sequence_of_arrays.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__Arrays * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->unbounded_sequence_of_arrays.data[i]);
      PyObject * pyitem = test_msgs__msg__arrays__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unbounded_sequence_of_arrays", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_sequence_of_bounded_sequences
    PyObject * field = NULL;
    size_t size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__BoundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->unbounded_sequence_of_bounded_sequences.data[i]);
      PyObject * pyitem = test_msgs__msg__bounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unbounded_sequence_of_bounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_sequence_of_unbounded_sequences
    PyObject * field = NULL;
    size_t size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__UnboundedSequences * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->unbounded_sequence_of_unbounded_sequences.data[i]);
      PyObject * pyitem = test_msgs__msg__unbounded_sequences__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unbounded_sequence_of_unbounded_sequences", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
