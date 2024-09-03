// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_msgs:msg/Defaults.idl
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
#include "test_msgs/msg/detail/defaults__struct.h"
#include "test_msgs/msg/detail/defaults__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool test_msgs__msg__defaults__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("test_msgs.msg._defaults.Defaults", full_classname_dest, 32) == 0);
  }
  test_msgs__msg__Defaults * ros_message = _ros_message;
  {  // bool_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // byte_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_value");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->byte_value = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // char_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->char_value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // float32_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float32_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // float64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float64_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float64_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int8_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int8_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint8_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint8_value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int16_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int16_value = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint16_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint16_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int32_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int32_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint32_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint32_value = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int64_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // uint64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint64_value = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_msgs__msg__defaults__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Defaults */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_msgs.msg._defaults");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Defaults");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_msgs__msg__Defaults * ros_message = (test_msgs__msg__Defaults *)raw_ros_message;
  {  // bool_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_value
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->byte_value, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->char_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "char_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float32_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float32_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float32_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float64_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int8_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int8_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int8_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint8_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint8_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint8_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int16_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int16_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int16_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint16_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint16_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint16_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int32_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int32_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int32_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint32_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint32_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint32_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int64_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->int64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint64_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->uint64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
