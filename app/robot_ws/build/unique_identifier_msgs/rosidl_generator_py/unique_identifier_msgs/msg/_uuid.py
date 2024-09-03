# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unique_identifier_msgs:msg/UUID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'uuid'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UUID(type):
    """Metaclass of message 'UUID'."""

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
            module = import_type_support('unique_identifier_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unique_identifier_msgs.msg.UUID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uuid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uuid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uuid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uuid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uuid

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UUID(metaclass=Metaclass_UUID):
    """Message class 'UUID'."""

    __slots__ = [
        '_uuid',
    ]

    _fields_and_field_types = {
        'uuid': 'uint8[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'uuid' not in kwargs:
            self.uuid = numpy.zeros(16, dtype=numpy.uint8)
        else:
            self.uuid = numpy.array(kwargs.get('uuid'), dtype=numpy.uint8)
            assert self.uuid.shape == (16, )

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
        if all(self.uuid != other.uuid):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'uuid' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 16, \
                "The 'uuid' numpy.ndarray() must have a size of 16"
            self._uuid = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uuid' field must be a set or sequence with length 16 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uuid = numpy.array(value, dtype=numpy.uint8)
