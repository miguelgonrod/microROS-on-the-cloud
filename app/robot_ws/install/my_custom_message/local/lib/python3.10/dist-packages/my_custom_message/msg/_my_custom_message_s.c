// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_custom_message:msg/MyCustomMessage.idl
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
#include "my_custom_message/msg/detail/my_custom_message__struct.h"
#include "my_custom_message/msg/detail/my_custom_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_custom_message__msg__my_custom_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("my_custom_message.msg._my_custom_message.MyCustomMessage", full_classname_dest, 56) == 0);
  }
  my_custom_message__msg__MyCustomMessage * ros_message = _ros_message;
  {  // bool_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_test");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_test = (Py_True == field);
    Py_DECREF(field);
  }
  {  // byte_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_test");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->byte_test = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // char_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->char_test = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // float32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_test");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float32_test = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // double_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "double_test");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->double_test = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int8_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int8_test = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint8_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint8_test = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int16_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int16_test = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint16_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint16_test = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int32_test = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint32_test = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int64_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int64_test = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // uint64_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint64_test = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_custom_message__msg__my_custom_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MyCustomMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_custom_message.msg._my_custom_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MyCustomMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_custom_message__msg__MyCustomMessage * ros_message = (my_custom_message__msg__MyCustomMessage *)raw_ros_message;
  {  // bool_test
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_test ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_test
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->byte_test, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->char_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "char_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float32_test
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // double_test
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->double_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "double_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int8_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int8_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int8_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint8_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint8_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint8_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int16_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int16_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int16_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint16_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint16_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint16_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int32_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint32_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int64_test
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->int64_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int64_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint64_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->uint64_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint64_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
