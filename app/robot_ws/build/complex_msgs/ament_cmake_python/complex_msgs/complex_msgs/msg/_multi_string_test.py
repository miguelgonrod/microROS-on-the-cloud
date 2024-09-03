# generated from rosidl_generator_py/resource/_idl.py.em
# with input from complex_msgs:msg/MultiStringTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiStringTest(type):
    """Metaclass of message 'MultiStringTest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('complex_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'complex_msgs.msg.MultiStringTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_string_test
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_string_test
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_string_test
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_string_test
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_string_test

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiStringTest(metaclass=Metaclass_MultiStringTest):
    """Message class 'MultiStringTest'."""

    __slots__ = [
        '_data1',
        '_data2',
        '_data3',
        '_data4',
    ]

    _fields_and_field_types = {
        'data1': 'string',
        'data2': 'string',
        'data3': 'string',
        'data4': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data1 = kwargs.get('data1', str())
        self.data2 = kwargs.get('data2', str())
        self.data3 = kwargs.get('data3', str())
        self.data4 = kwargs.get('data4', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.data1 != other.data1:
            return False
        if self.data2 != other.data2:
            return False
        if self.data3 != other.data3:
            return False
        if self.data4 != other.data4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data1(self):
        """Message field 'data1'."""
        return self._data1

    @data1.setter
    def data1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data1' field must be of type 'str'"
        self._data1 = value

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data2' field must be of type 'str'"
        self._data2 = value

    @builtins.property
    def data3(self):
        """Message field 'data3'."""
        return self._data3

    @data3.setter
    def data3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data3' field must be of type 'str'"
        self._data3 = value

    @builtins.property
    def data4(self):
        """Message field 'data4'."""
        return self._data4

    @data4.setter
    def data4(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data4' field must be of type 'str'"
        self._data4 = value
