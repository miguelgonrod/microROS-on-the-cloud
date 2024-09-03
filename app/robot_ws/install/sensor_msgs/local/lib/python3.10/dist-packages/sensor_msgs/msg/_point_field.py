# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/PointField.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PointField(type):
    """Metaclass of message 'PointField'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INT8': 1,
        'UINT8': 2,
        'INT16': 3,
        'UINT16': 4,
        'INT32': 5,
        'UINT32': 6,
        'FLOAT32': 7,
        'FLOAT64': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sensor_msgs.msg.PointField')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__point_field
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__point_field
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__point_field
            cls._TYPE_SUPPORT = module.type_support_msg__msg__point_field
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__point_field

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INT8': cls.__constants['INT8'],
            'UINT8': cls.__constants['UINT8'],
            'INT16': cls.__constants['INT16'],
            'UINT16': cls.__constants['UINT16'],
            'INT32': cls.__constants['INT32'],
            'UINT32': cls.__constants['UINT32'],
            'FLOAT32': cls.__constants['FLOAT32'],
            'FLOAT64': cls.__constants['FLOAT64'],
        }

    @property
    def INT8(self):
        """Message constant 'INT8'."""
        return Metaclass_PointField.__constants['INT8']

    @property
    def UINT8(self):
        """Message constant 'UINT8'."""
        return Metaclass_PointField.__constants['UINT8']

    @property
    def INT16(self):
        """Message constant 'INT16'."""
        return Metaclass_PointField.__constants['INT16']

    @property
    def UINT16(self):
        """Message constant 'UINT16'."""
        return Metaclass_PointField.__constants['UINT16']

    @property
    def INT32(self):
        """Message constant 'INT32'."""
        return Metaclass_PointField.__constants['INT32']

    @property
    def UINT32(self):
        """Message constant 'UINT32'."""
        return Metaclass_PointField.__constants['UINT32']

    @property
    def FLOAT32(self):
        """Message constant 'FLOAT32'."""
        return Metaclass_PointField.__constants['FLOAT32']

    @property
    def FLOAT64(self):
        """Message constant 'FLOAT64'."""
        return Metaclass_PointField.__constants['FLOAT64']


class PointField(metaclass=Metaclass_PointField):
    """
    Message class 'PointField'.

    Constants:
      INT8
      UINT8
      INT16
      UINT16
      INT32
      UINT32
      FLOAT32
      FLOAT64
    """

    __slots__ = [
        '_name',
        '_offset',
        '_datatype',
        '_count',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'offset': 'uint32',
        'datatype': 'uint8',
        'count': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.offset = kwargs.get('offset', int())
        self.datatype = kwargs.get('datatype', int())
        self.count = kwargs.get('count', int())

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
        if self.name != other.name:
            return False
        if self.offset != other.offset:
            return False
        if self.datatype != other.datatype:
            return False
        if self.count != other.count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset' field must be an unsigned integer in [0, 4294967295]"
        self._offset = value

    @builtins.property
    def datatype(self):
        """Message field 'datatype'."""
        return self._datatype

    @datatype.setter
    def datatype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'datatype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'datatype' field must be an unsigned integer in [0, 255]"
        self._datatype = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'count' field must be an unsigned integer in [0, 4294967295]"
        self._count = value
