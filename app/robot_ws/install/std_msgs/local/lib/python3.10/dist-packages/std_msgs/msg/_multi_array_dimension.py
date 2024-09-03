# generated from rosidl_generator_py/resource/_idl.py.em
# with input from std_msgs:msg/MultiArrayDimension.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiArrayDimension(type):
    """Metaclass of message 'MultiArrayDimension'."""

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
                'std_msgs.msg.MultiArrayDimension')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_array_dimension
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_array_dimension
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_array_dimension
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_array_dimension
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_array_dimension

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiArrayDimension(metaclass=Metaclass_MultiArrayDimension):
    """Message class 'MultiArrayDimension'."""

    __slots__ = [
        '_label',
        '_size',
        '_stride',
    ]

    _fields_and_field_types = {
        'label': 'string',
        'size': 'uint32',
        'stride': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.label = kwargs.get('label', str())
        self.size = kwargs.get('size', int())
        self.stride = kwargs.get('stride', int())

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
        if self.label != other.label:
            return False
        if self.size != other.size:
            return False
        if self.stride != other.stride:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'size' field must be an unsigned integer in [0, 4294967295]"
        self._size = value

    @builtins.property
    def stride(self):
        """Message field 'stride'."""
        return self._stride

    @stride.setter
    def stride(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stride' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stride' field must be an unsigned integer in [0, 4294967295]"
        self._stride = value
