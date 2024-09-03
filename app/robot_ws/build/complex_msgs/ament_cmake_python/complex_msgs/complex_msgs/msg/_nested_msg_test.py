# generated from rosidl_generator_py/resource/_idl.py.em
# with input from complex_msgs:msg/NestedMsgTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NestedMsgTest(type):
    """Metaclass of message 'NestedMsgTest'."""

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
                'complex_msgs.msg.NestedMsgTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nested_msg_test
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nested_msg_test
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nested_msg_test
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nested_msg_test
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nested_msg_test

            from complex_msgs.msg import MultiStringTest
            if MultiStringTest.__class__._TYPE_SUPPORT is None:
                MultiStringTest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMsgTest(metaclass=Metaclass_NestedMsgTest):
    """Message class 'NestedMsgTest'."""

    __slots__ = [
        '_data1',
        '_data2',
        '_data3',
        '_data4',
        '_data5',
        '_data6',
        '_data7',
        '_data8',
        '_data9',
        '_data10',
        '_data11',
        '_data12',
        '_data13',
        '_data14',
    ]

    _fields_and_field_types = {
        'data1': 'boolean',
        'data2': 'octet',
        'data3': 'uint8',
        'data4': 'float',
        'data5': 'double',
        'data6': 'int8',
        'data7': 'uint8',
        'data8': 'int16',
        'data9': 'uint16',
        'data10': 'int32',
        'data11': 'uint32',
        'data12': 'int64',
        'data13': 'uint64',
        'data14': 'complex_msgs/MultiStringTest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['complex_msgs', 'msg'], 'MultiStringTest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data1 = kwargs.get('data1', bool())
        self.data2 = kwargs.get('data2', bytes([0]))
        self.data3 = kwargs.get('data3', int())
        self.data4 = kwargs.get('data4', float())
        self.data5 = kwargs.get('data5', float())
        self.data6 = kwargs.get('data6', int())
        self.data7 = kwargs.get('data7', int())
        self.data8 = kwargs.get('data8', int())
        self.data9 = kwargs.get('data9', int())
        self.data10 = kwargs.get('data10', int())
        self.data11 = kwargs.get('data11', int())
        self.data12 = kwargs.get('data12', int())
        self.data13 = kwargs.get('data13', int())
        from complex_msgs.msg import MultiStringTest
        self.data14 = kwargs.get('data14', MultiStringTest())

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
        if self.data5 != other.data5:
            return False
        if self.data6 != other.data6:
            return False
        if self.data7 != other.data7:
            return False
        if self.data8 != other.data8:
            return False
        if self.data9 != other.data9:
            return False
        if self.data10 != other.data10:
            return False
        if self.data11 != other.data11:
            return False
        if self.data12 != other.data12:
            return False
        if self.data13 != other.data13:
            return False
        if self.data14 != other.data14:
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
                isinstance(value, bool), \
                "The 'data1' field must be of type 'bool'"
        self._data1 = value

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'data2' field must be of type 'bytes' or 'ByteString' with length 1"
        self._data2 = value

    @builtins.property
    def data3(self):
        """Message field 'data3'."""
        return self._data3

    @data3.setter
    def data3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'data3' field must be an unsigned integer in [0, 255]"
        self._data3 = value

    @builtins.property
    def data4(self):
        """Message field 'data4'."""
        return self._data4

    @data4.setter
    def data4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'data4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'data4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._data4 = value

    @builtins.property
    def data5(self):
        """Message field 'data5'."""
        return self._data5

    @data5.setter
    def data5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'data5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'data5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._data5 = value

    @builtins.property
    def data6(self):
        """Message field 'data6'."""
        return self._data6

    @data6.setter
    def data6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data6' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'data6' field must be an integer in [-128, 127]"
        self._data6 = value

    @builtins.property
    def data7(self):
        """Message field 'data7'."""
        return self._data7

    @data7.setter
    def data7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data7' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'data7' field must be an unsigned integer in [0, 255]"
        self._data7 = value

    @builtins.property
    def data8(self):
        """Message field 'data8'."""
        return self._data8

    @data8.setter
    def data8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data8' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'data8' field must be an integer in [-32768, 32767]"
        self._data8 = value

    @builtins.property
    def data9(self):
        """Message field 'data9'."""
        return self._data9

    @data9.setter
    def data9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data9' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data9' field must be an unsigned integer in [0, 65535]"
        self._data9 = value

    @builtins.property
    def data10(self):
        """Message field 'data10'."""
        return self._data10

    @data10.setter
    def data10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data10' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data10' field must be an integer in [-2147483648, 2147483647]"
        self._data10 = value

    @builtins.property
    def data11(self):
        """Message field 'data11'."""
        return self._data11

    @data11.setter
    def data11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data11' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'data11' field must be an unsigned integer in [0, 4294967295]"
        self._data11 = value

    @builtins.property
    def data12(self):
        """Message field 'data12'."""
        return self._data12

    @data12.setter
    def data12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data12' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'data12' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._data12 = value

    @builtins.property
    def data13(self):
        """Message field 'data13'."""
        return self._data13

    @data13.setter
    def data13(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data13' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'data13' field must be an unsigned integer in [0, 18446744073709551615]"
        self._data13 = value

    @builtins.property
    def data14(self):
        """Message field 'data14'."""
        return self._data14

    @data14.setter
    def data14(self, value):
        if __debug__:
            from complex_msgs.msg import MultiStringTest
            assert \
                isinstance(value, MultiStringTest), \
                "The 'data14' field must be a sub message of type 'MultiStringTest'"
        self._data14 = value
