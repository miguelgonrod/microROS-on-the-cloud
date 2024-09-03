// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_msgs:msg/Arrays.idl
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
#include "test_msgs/msg/detail/arrays__struct.h"
#include "test_msgs/msg/detail/arrays__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "test_msgs/msg/detail/basic_types__functions.h"
#include "test_msgs/msg/detail/constants__functions.h"
#include "test_msgs/msg/detail/defaults__functions.h"
// end nested array functions include
bool test_msgs__msg__basic_types__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__basic_types__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__constants__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__constants__convert_to_py(void * raw_ros_message);
bool test_msgs__msg__defaults__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__defaults__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test_msgs__msg__arrays__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("test_msgs.msg._arrays.Arrays", full_classname_dest, 28) == 0);
  }
  test_msgs__msg__Arrays * ros_message = _ros_message;
  {  // bool_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_values");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bool_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      bool * dest = ros_message->bool_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // byte_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_values");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'byte_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->byte_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBytes_Check(item));
        uint8_t tmp = PyBytes_AS_STRING(item)[0];
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // char_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->char_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float32_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->float32_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float64_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "float64_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->float64_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int8_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 3;
      int8_t * dest = ros_message->int8_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint8_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->uint8_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int16_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT16);
      Py_ssize_t size = 3;
      int16_t * dest = ros_message->int16_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint16_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 3;
      uint16_t * dest = ros_message->uint16_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int32_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT32);
      Py_ssize_t size = 3;
      int32_t * dest = ros_message->int32_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint32_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 3;
      uint32_t * dest = ros_message->uint32_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int64_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT64);
      Py_ssize_t size = 3;
      int64_t * dest = ros_message->int64_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int64_t tmp = *(npy_int64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint64_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT64);
      Py_ssize_t size = 3;
      uint64_t * dest = ros_message->uint64_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint64_t tmp = *(npy_uint64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // string_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_values");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      rosidl_runtime_c__String * dest = ros_message->string_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // basic_types_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "basic_types_values");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'basic_types_values'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__BasicTypes * dest = ros_message->basic_types_values;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__basic_types__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // constants_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "constants_values");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'constants_values'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__Constants * dest = ros_message->constants_values;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__constants__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // defaults_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "defaults_values");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'defaults_values'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    test_msgs__msg__Defaults * dest = ros_message->defaults_values;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!test_msgs__msg__defaults__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bool_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_values_default");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bool_values_default'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      bool * dest = ros_message->bool_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // byte_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_values_default");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'byte_values_default'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->byte_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBytes_Check(item));
        uint8_t tmp = PyBytes_AS_STRING(item)[0];
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // char_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->char_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float32_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->float32_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float64_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "float64_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->float64_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int8_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 3;
      int8_t * dest = ros_message->int8_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint8_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->uint8_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int16_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT16);
      Py_ssize_t size = 3;
      int16_t * dest = ros_message->int16_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint16_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 3;
      uint16_t * dest = ros_message->uint16_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int32_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT32);
      Py_ssize_t size = 3;
      int32_t * dest = ros_message->int32_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint32_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 3;
      uint32_t * dest = ros_message->uint32_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int64_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT64);
      Py_ssize_t size = 3;
      int64_t * dest = ros_message->int64_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int64_t tmp = *(npy_int64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // uint64_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_values_default");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT64);
      Py_ssize_t size = 3;
      uint64_t * dest = ros_message->uint64_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint64_t tmp = *(npy_uint64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // string_values_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_values_default");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_values_default'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      rosidl_runtime_c__String * dest = ros_message->string_values_default;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // alignment_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "alignment_check");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alignment_check = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_msgs__msg__arrays__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Arrays */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_msgs.msg._arrays");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Arrays");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_msgs__msg__Arrays * ros_message = (test_msgs__msg__Arrays *)raw_ros_message;
  {  // bool_values
    PyObject * field = NULL;
    size_t size = 3;
    bool * src = ros_message->bool_values;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_values
    PyObject * field = NULL;
    size_t size = 3;
    uint8_t * src = ros_message->byte_values;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBytes_FromStringAndSize((const char *)&src[i], 1));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "char_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->char_values[0]);
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // float32_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float32_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->float32_values[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // float64_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float64_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->float64_values[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // int8_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int8_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->int8_values[0]);
    memcpy(dst, src, 3 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // uint8_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint8_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->uint8_values[0]);
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // int16_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int16_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->int16_values[0]);
    memcpy(dst, src, 3 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // uint16_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint16_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->uint16_values[0]);
    memcpy(dst, src, 3 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // int32_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int32_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->int32_values[0]);
    memcpy(dst, src, 3 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // uint32_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint32_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->uint32_values[0]);
    memcpy(dst, src, 3 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // int64_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int64_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT64);
    assert(sizeof(npy_int64) == sizeof(int64_t));
    npy_int64 * dst = (npy_int64 *)PyArray_GETPTR1(seq_field, 0);
    int64_t * src = &(ros_message->int64_values[0]);
    memcpy(dst, src, 3 * sizeof(int64_t));
    Py_DECREF(field);
  }
  {  // uint64_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint64_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT64);
    assert(sizeof(npy_uint64) == sizeof(uint64_t));
    npy_uint64 * dst = (npy_uint64 *)PyArray_GETPTR1(seq_field, 0);
    uint64_t * src = &(ros_message->uint64_values[0]);
    memcpy(dst, src, 3 * sizeof(uint64_t));
    Py_DECREF(field);
  }
  {  // string_values
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_runtime_c__String * src = ros_message->string_values;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // basic_types_values
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__BasicTypes * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->basic_types_values[i]);
      PyObject * pyitem = test_msgs__msg__basic_types__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "basic_types_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constants_values
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__Constants * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->constants_values[i]);
      PyObject * pyitem = test_msgs__msg__constants__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "constants_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defaults_values
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    test_msgs__msg__Defaults * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->defaults_values[i]);
      PyObject * pyitem = test_msgs__msg__defaults__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "defaults_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bool_values_default
    PyObject * field = NULL;
    size_t size = 3;
    bool * src = ros_message->bool_values_default;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_values_default", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_values_default
    PyObject * field = NULL;
    size_t size = 3;
    uint8_t * src = ros_message->byte_values_default;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBytes_FromStringAndSize((const char *)&src[i], 1));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_values_default", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "char_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->char_values_default[0]);
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // float32_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float32_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->float32_values_default[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // float64_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float64_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->float64_values_default[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // int8_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int8_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->int8_values_default[0]);
    memcpy(dst, src, 3 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // uint8_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint8_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->uint8_values_default[0]);
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // int16_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int16_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->int16_values_default[0]);
    memcpy(dst, src, 3 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // uint16_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint16_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->uint16_values_default[0]);
    memcpy(dst, src, 3 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // int32_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int32_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->int32_values_default[0]);
    memcpy(dst, src, 3 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // uint32_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint32_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->uint32_values_default[0]);
    memcpy(dst, src, 3 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // int64_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int64_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT64);
    assert(sizeof(npy_int64) == sizeof(int64_t));
    npy_int64 * dst = (npy_int64 *)PyArray_GETPTR1(seq_field, 0);
    int64_t * src = &(ros_message->int64_values_default[0]);
    memcpy(dst, src, 3 * sizeof(int64_t));
    Py_DECREF(field);
  }
  {  // uint64_values_default
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint64_values_default");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT64);
    assert(sizeof(npy_uint64) == sizeof(uint64_t));
    npy_uint64 * dst = (npy_uint64 *)PyArray_GETPTR1(seq_field, 0);
    uint64_t * src = &(ros_message->uint64_values_default[0]);
    memcpy(dst, src, 3 * sizeof(uint64_t));
    Py_DECREF(field);
  }
  {  // string_values_default
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_runtime_c__String * src = ros_message->string_values_default;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_values_default", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alignment_check
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->alignment_check);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alignment_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
