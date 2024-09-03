// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
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
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "visualization_msgs/msg/detail/interactive_marker_control__functions.h"
#include "visualization_msgs/msg/detail/menu_entry__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool visualization_msgs__msg__menu_entry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * visualization_msgs__msg__menu_entry__convert_to_py(void * raw_ros_message);
bool visualization_msgs__msg__interactive_marker_control__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * visualization_msgs__msg__interactive_marker_control__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool visualization_msgs__msg__interactive_marker__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("visualization_msgs.msg._interactive_marker.InteractiveMarker", full_classname_dest, 60) == 0);
  }
  visualization_msgs__msg__InteractiveMarker * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // description
    PyObject * field = PyObject_GetAttrString(_pymsg, "description");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->description, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // scale
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // menu_entries
    PyObject * field = PyObject_GetAttrString(_pymsg, "menu_entries");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'menu_entries'");
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
    if (!visualization_msgs__msg__MenuEntry__Sequence__init(&(ros_message->menu_entries), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create visualization_msgs__msg__MenuEntry__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    visualization_msgs__msg__MenuEntry * dest = ros_message->menu_entries.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!visualization_msgs__msg__menu_entry__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // controls
    PyObject * field = PyObject_GetAttrString(_pymsg, "controls");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'controls'");
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
    if (!visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(&(ros_message->controls), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create visualization_msgs__msg__InteractiveMarkerControl__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    visualization_msgs__msg__InteractiveMarkerControl * dest = ros_message->controls.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!visualization_msgs__msg__interactive_marker_control__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * visualization_msgs__msg__interactive_marker__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InteractiveMarker */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("visualization_msgs.msg._interactive_marker");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InteractiveMarker");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  visualization_msgs__msg__InteractiveMarker * ros_message = (visualization_msgs__msg__InteractiveMarker *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // description
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->description.data,
      strlen(ros_message->description.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // menu_entries
    PyObject * field = NULL;
    size_t size = ros_message->menu_entries.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    visualization_msgs__msg__MenuEntry * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->menu_entries.data[i]);
      PyObject * pyitem = visualization_msgs__msg__menu_entry__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "menu_entries", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controls
    PyObject * field = NULL;
    size_t size = ros_message->controls.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    visualization_msgs__msg__InteractiveMarkerControl * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->controls.data[i]);
      PyObject * pyitem = visualization_msgs__msg__interactive_marker_control__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "controls", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
