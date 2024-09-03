// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_msgs:msg/WStrings.idl
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
#include "test_msgs/msg/detail/w_strings__struct.h"
#include "test_msgs/msg/detail/w_strings__functions.h"

#include "rosidl_runtime_c/u16string.h"
#include "rosidl_runtime_c/u16string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool test_msgs__msg__w_strings__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("test_msgs.msg._w_strings.WStrings", full_classname_dest, 33) == 0);
  }
  test_msgs__msg__WStrings * ros_message = _ros_message;
  {  // wstring_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_value, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // wstring_value_default1
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_value_default1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_value_default1, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // wstring_value_default2
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_value_default2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_value_default2, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // wstring_value_default3
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_value_default3");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_value_default3, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // array_of_wstrings
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_of_wstrings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'array_of_wstrings'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      rosidl_runtime_c__U16String * dest = ros_message->array_of_wstrings;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        // the returned string starts with a BOM mark and uses native byte order
        PyObject * encoded_item = PyUnicode_AsUTF16String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        char * buffer;
        Py_ssize_t length;
        int rc = PyBytes_AsStringAndSize(encoded_item, &buffer, &length);
        if (rc) {
          Py_DECREF(encoded_item);
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        // use offset of 2 to skip BOM mark
        bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&dest[i], buffer + 2, length - 2);
        Py_DECREF(encoded_item);
        if (!succeeded) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_sequence_of_wstrings
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_sequence_of_wstrings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_sequence_of_wstrings'");
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
      if (!rosidl_runtime_c__U16String__Sequence__init(&(ros_message->bounded_sequence_of_wstrings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create U16String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__U16String * dest = ros_message->bounded_sequence_of_wstrings.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        // the returned string starts with a BOM mark and uses native byte order
        PyObject * encoded_item = PyUnicode_AsUTF16String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        char * buffer;
        Py_ssize_t length;
        int rc = PyBytes_AsStringAndSize(encoded_item, &buffer, &length);
        if (rc) {
          Py_DECREF(encoded_item);
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        // use offset of 2 to skip BOM mark
        bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&dest[i], buffer + 2, length - 2);
        Py_DECREF(encoded_item);
        if (!succeeded) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // unbounded_sequence_of_wstrings
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_sequence_of_wstrings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_sequence_of_wstrings'");
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
      if (!rosidl_runtime_c__U16String__Sequence__init(&(ros_message->unbounded_sequence_of_wstrings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create U16String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__U16String * dest = ros_message->unbounded_sequence_of_wstrings.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        // the returned string starts with a BOM mark and uses native byte order
        PyObject * encoded_item = PyUnicode_AsUTF16String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        char * buffer;
        Py_ssize_t length;
        int rc = PyBytes_AsStringAndSize(encoded_item, &buffer, &length);
        if (rc) {
          Py_DECREF(encoded_item);
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        // use offset of 2 to skip BOM mark
        bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&dest[i], buffer + 2, length - 2);
        Py_DECREF(encoded_item);
        if (!succeeded) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_msgs__msg__w_strings__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WStrings */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_msgs.msg._w_strings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WStrings");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_msgs__msg__WStrings * ros_message = (test_msgs__msg__WStrings *)raw_ros_message;
  {  // wstring_value
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_value.data,
      ros_message->wstring_value.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wstring_value_default1
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_value_default1.data,
      ros_message->wstring_value_default1.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_value_default1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wstring_value_default2
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_value_default2.data,
      ros_message->wstring_value_default2.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_value_default2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wstring_value_default3
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_value_default3.data,
      ros_message->wstring_value_default3.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_value_default3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // array_of_wstrings
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_runtime_c__U16String * src = ros_message->array_of_wstrings;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int byteorder = 0;
      PyObject * decoded_item = PyUnicode_DecodeUTF16((const char *)src[i].data, src[i].size * sizeof(uint16_t), NULL, &byteorder);
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "array_of_wstrings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_sequence_of_wstrings
    PyObject * field = NULL;
    size_t size = ros_message->bounded_sequence_of_wstrings.size;
    rosidl_runtime_c__U16String * src = ros_message->bounded_sequence_of_wstrings.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int byteorder = 0;
      PyObject * decoded_item = PyUnicode_DecodeUTF16((const char *)src[i].data, src[i].size * sizeof(uint16_t), NULL, &byteorder);
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_sequence_of_wstrings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_sequence_of_wstrings
    PyObject * field = NULL;
    size_t size = ros_message->unbounded_sequence_of_wstrings.size;
    rosidl_runtime_c__U16String * src = ros_message->unbounded_sequence_of_wstrings.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int byteorder = 0;
      PyObject * decoded_item = PyUnicode_DecodeUTF16((const char *)src[i].data, src[i].size * sizeof(uint16_t), NULL, &byteorder);
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unbounded_sequence_of_wstrings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
