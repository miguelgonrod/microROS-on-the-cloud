# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/Constants.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Constants(type):
    """Metaclass of message 'Constants'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOOL_CONST': True,
        'BYTE_CONST': b'2',
        'CHAR_CONST': 100,
        'FLOAT32_CONST': 1.125,
        'FLOAT64_CONST': 1.125,
        'INT8_CONST': -50,
        'UINT8_CONST': 200,
        'INT16_CONST': -1000,
        'UINT16_CONST': 2000,
        'INT32_CONST': -30000,
        'UINT32_CONST': 60000,
        'INT64_CONST': -40000000,
        'UINT64_CONST': 50000000,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.msg.Constants')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__constants
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__constants
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__constants
            cls._TYPE_SUPPORT = module.type_support_msg__msg__constants
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__constants

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOOL_CONST': cls.__constants['BOOL_CONST'],
            'BYTE_CONST': cls.__constants['BYTE_CONST'],
            'CHAR_CONST': cls.__constants['CHAR_CONST'],
            'FLOAT32_CONST': cls.__constants['FLOAT32_CONST'],
            'FLOAT64_CONST': cls.__constants['FLOAT64_CONST'],
            'INT8_CONST': cls.__constants['INT8_CONST'],
            'UINT8_CONST': cls.__constants['UINT8_CONST'],
            'INT16_CONST': cls.__constants['INT16_CONST'],
            'UINT16_CONST': cls.__constants['UINT16_CONST'],
            'INT32_CONST': cls.__constants['INT32_CONST'],
            'UINT32_CONST': cls.__constants['UINT32_CONST'],
            'INT64_CONST': cls.__constants['INT64_CONST'],
            'UINT64_CONST': cls.__constants['UINT64_CONST'],
        }

    @property
    def BOOL_CONST(self):
        """Message constant 'BOOL_CONST'."""
        return Metaclass_Constants.__constants['BOOL_CONST']

    @property
    def BYTE_CONST(self):
        """Message constant 'BYTE_CONST'."""
        return Metaclass_Constants.__constants['BYTE_CONST']

    @property
    def CHAR_CONST(self):
        """Message constant 'CHAR_CONST'."""
        return Metaclass_Constants.__constants['CHAR_CONST']

    @property
    def FLOAT32_CONST(self):
        """Message constant 'FLOAT32_CONST'."""
        return Metaclass_Constants.__constants['FLOAT32_CONST']

    @property
    def FLOAT64_CONST(self):
        """Message constant 'FLOAT64_CONST'."""
        return Metaclass_Constants.__constants['FLOAT64_CONST']

    @property
    def INT8_CONST(self):
        """Message constant 'INT8_CONST'."""
        return Metaclass_Constants.__constants['INT8_CONST']

    @property
    def UINT8_CONST(self):
        """Message constant 'UINT8_CONST'."""
        return Metaclass_Constants.__constants['UINT8_CONST']

    @property
    def INT16_CONST(self):
        """Message constant 'INT16_CONST'."""
        return Metaclass_Constants.__constants['INT16_CONST']

    @property
    def UINT16_CONST(self):
        """Message constant 'UINT16_CONST'."""
        return Metaclass_Constants.__constants['UINT16_CONST']

    @property
    def INT32_CONST(self):
        """Message constant 'INT32_CONST'."""
        return Metaclass_Constants.__constants['INT32_CONST']

    @property
    def UINT32_CONST(self):
        """Message constant 'UINT32_CONST'."""
        return Metaclass_Constants.__constants['UINT32_CONST']

    @property
    def INT64_CONST(self):
        """Message constant 'INT64_CONST'."""
        return Metaclass_Constants.__constants['INT64_CONST']

    @property
    def UINT64_CONST(self):
        """Message constant 'UINT64_CONST'."""
        return Metaclass_Constants.__constants['UINT64_CONST']


class Constants(metaclass=Metaclass_Constants):
    """
    Message class 'Constants'.

    Constants:
      BOOL_CONST
      BYTE_CONST
      CHAR_CONST
      FLOAT32_CONST
      FLOAT64_CONST
      INT8_CONST
      UINT8_CONST
      INT16_CONST
      UINT16_CONST
      INT32_CONST
      UINT32_CONST
      INT64_CONST
      UINT64_CONST
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
