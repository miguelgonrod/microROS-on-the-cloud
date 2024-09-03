# generated from rosidl_generator_py/resource/_idl.py.em
# with input from std_msgs:msg/MultiArrayLayout.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiArrayLayout(type):
    """Metaclass of message 'MultiArrayLayout'."""

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
            module = import_type_support('std_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'std_msgs.msg.MultiArrayLayout')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_array_layout
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_array_layout
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_array_layout
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_array_layout
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_array_layout

            from std_msgs.msg import MultiArrayDimension
            if MultiArrayDimension.__class__._TYPE_SUPPORT is None:
                MultiArrayDimension.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiArrayLayout(metaclass=Metaclass_MultiArrayLayout):
    """Message class 'MultiArrayLayout'."""

    __slots__ = [
        '_dim',
        '_data_offset',
    ]

    _fields_and_field_types = {
        'dim': 'sequence<std_msgs/MultiArrayDimension>',
        'data_offset': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'MultiArrayDimension')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dim = kwargs.get('dim', [])
        self.data_offset = kwargs.get('data_offset', int())

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
        if self.dim != other.dim:
            return False
        if self.data_offset != other.data_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dim(self):
        """Message field 'dim'."""
        return self._dim

    @dim.setter
    def dim(self, value):
        if __debug__:
            from std_msgs.msg import MultiArrayDimension
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
                 all(isinstance(v, MultiArrayDimension) for v in value) and
                 True), \
                "The 'dim' field must be a set or sequence and each value of type 'MultiArrayDimension'"
        self._dim = value

    @builtins.property
    def data_offset(self):
        """Message field 'data_offset'."""
        return self._data_offset

    @data_offset.setter
    def data_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'data_offset' field must be an unsigned integer in [0, 4294967295]"
        self._data_offset = value
