# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_custom_message:msg/MyCustomMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyCustomMessage(type):
    """Metaclass of message 'MyCustomMessage'."""

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
            module = import_type_support('my_custom_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_message.msg.MyCustomMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__my_custom_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__my_custom_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__my_custom_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__my_custom_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__my_custom_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyCustomMessage(metaclass=Metaclass_MyCustomMessage):
    """Message class 'MyCustomMessage'."""

    __slots__ = [
        '_bool_test',
        '_byte_test',
        '_char_test',
        '_float32_test',
        '_double_test',
        '_int8_test',
        '_uint8_test',
        '_int16_test',
        '_uint16_test',
        '_int32_test',
        '_uint32_test',
        '_int64_test',
        '_uint64_test',
    ]

    _fields_and_field_types = {
        'bool_test': 'boolean',
        'byte_test': 'octet',
        'char_test': 'uint8',
        'float32_test': 'float',
        'double_test': 'double',
        'int8_test': 'int8',
        'uint8_test': 'uint8',
        'int16_test': 'int16',
        'uint16_test': 'uint16',
        'int32_test': 'int32',
        'uint32_test': 'uint32',
        'int64_test': 'int64',
        'uint64_test': 'uint64',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bool_test = kwargs.get('bool_test', bool())
        self.byte_test = kwargs.get('byte_test', bytes([0]))
        self.char_test = kwargs.get('char_test', int())
        self.float32_test = kwargs.get('float32_test', float())
        self.double_test = kwargs.get('double_test', float())
        self.int8_test = kwargs.get('int8_test', int())
        self.uint8_test = kwargs.get('uint8_test', int())
        self.int16_test = kwargs.get('int16_test', int())
        self.uint16_test = kwargs.get('uint16_test', int())
        self.int32_test = kwargs.get('int32_test', int())
        self.uint32_test = kwargs.get('uint32_test', int())
        self.int64_test = kwargs.get('int64_test', int())
        self.uint64_test = kwargs.get('uint64_test', int())

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
        if self.bool_test != other.bool_test:
            return False
        if self.byte_test != other.byte_test:
            return False
        if self.char_test != other.char_test:
            return False
        if self.float32_test != other.float32_test:
            return False
        if self.double_test != other.double_test:
            return False
        if self.int8_test != other.int8_test:
            return False
        if self.uint8_test != other.uint8_test:
            return False
        if self.int16_test != other.int16_test:
            return False
        if self.uint16_test != other.uint16_test:
            return False
        if self.int32_test != other.int32_test:
            return False
        if self.uint32_test != other.uint32_test:
            return False
        if self.int64_test != other.int64_test:
            return False
        if self.uint64_test != other.uint64_test:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bool_test(self):
        """Message field 'bool_test'."""
        return self._bool_test

    @bool_test.setter
    def bool_test(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_test' field must be of type 'bool'"
        self._bool_test = value

    @builtins.property
    def byte_test(self):
        """Message field 'byte_test'."""
        return self._byte_test

    @byte_test.setter
    def byte_test(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'byte_test' field must be of type 'bytes' or 'ByteString' with length 1"
        self._byte_test = value

    @builtins.property
    def char_test(self):
        """Message field 'char_test'."""
        return self._char_test

    @char_test.setter
    def char_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'char_test' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'char_test' field must be an unsigned integer in [0, 255]"
        self._char_test = value

    @builtins.property
    def float32_test(self):
        """Message field 'float32_test'."""
        return self._float32_test

    @float32_test.setter
    def float32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float32_test' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'float32_test' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._float32_test = value

    @builtins.property
    def double_test(self):
        """Message field 'double_test'."""
        return self._double_test

    @double_test.setter
    def double_test(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'double_test' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'double_test' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._double_test = value

    @builtins.property
    def int8_test(self):
        """Message field 'int8_test'."""
        return self._int8_test

    @int8_test.setter
    def int8_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int8_test' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'int8_test' field must be an integer in [-128, 127]"
        self._int8_test = value

    @builtins.property
    def uint8_test(self):
        """Message field 'uint8_test'."""
        return self._uint8_test

    @uint8_test.setter
    def uint8_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint8_test' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint8_test' field must be an unsigned integer in [0, 255]"
        self._uint8_test = value

    @builtins.property
    def int16_test(self):
        """Message field 'int16_test'."""
        return self._int16_test

    @int16_test.setter
    def int16_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int16_test' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'int16_test' field must be an integer in [-32768, 32767]"
        self._int16_test = value

    @builtins.property
    def uint16_test(self):
        """Message field 'uint16_test'."""
        return self._uint16_test

    @uint16_test.setter
    def uint16_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint16_test' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'uint16_test' field must be an unsigned integer in [0, 65535]"
        self._uint16_test = value

    @builtins.property
    def int32_test(self):
        """Message field 'int32_test'."""
        return self._int32_test

    @int32_test.setter
    def int32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int32_test' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int32_test' field must be an integer in [-2147483648, 2147483647]"
        self._int32_test = value

    @builtins.property
    def uint32_test(self):
        """Message field 'uint32_test'."""
        return self._uint32_test

    @uint32_test.setter
    def uint32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint32_test' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uint32_test' field must be an unsigned integer in [0, 4294967295]"
        self._uint32_test = value

    @builtins.property
    def int64_test(self):
        """Message field 'int64_test'."""
        return self._int64_test

    @int64_test.setter
    def int64_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int64_test' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'int64_test' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_test = value

    @builtins.property
    def uint64_test(self):
        """Message field 'uint64_test'."""
        return self._uint64_test

    @uint64_test.setter
    def uint64_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint64_test' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uint64_test' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uint64_test = value
