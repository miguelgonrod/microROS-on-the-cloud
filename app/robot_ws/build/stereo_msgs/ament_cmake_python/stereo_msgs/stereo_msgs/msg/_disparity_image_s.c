// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stereo_msgs:msg/DisparityImage.idl
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
#include "stereo_msgs/msg/detail/disparity_image__struct.h"
#include "stereo_msgs/msg/detail/disparity_image__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__region_of_interest__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__region_of_interest__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool stereo_msgs__msg__disparity_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("stereo_msgs.msg._disparity_image.DisparityImage", full_classname_dest, 47) == 0);
  }
  stereo_msgs__msg__DisparityImage * ros_message = _ros_message;
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
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // f
    PyObject * field = PyObject_GetAttrString(_pymsg, "f");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t
    PyObject * field = PyObject_GetAttrString(_pymsg, "t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // valid_window
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_window");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__region_of_interest__convert_from_py(field, &ros_message->valid_window)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // min_disparity
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_disparity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_disparity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_disparity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_disparity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_disparity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_d = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stereo_msgs__msg__disparity_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DisparityImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stereo_msgs.msg._disparity_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DisparityImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stereo_msgs__msg__DisparityImage * ros_message = (stereo_msgs__msg__DisparityImage *)raw_ros_message;
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
  {  // image
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_window
    PyObject * field = NULL;
    field = sensor_msgs__msg__region_of_interest__convert_to_py(&ros_message->valid_window);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_window", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_disparity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_disparity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_disparity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_disparity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_disparity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_disparity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
