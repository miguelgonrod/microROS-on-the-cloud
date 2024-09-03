# generated from rosidl_generator_py/resource/_idl.py.em
# with input from diagnostic_msgs:msg/DiagnosticStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticStatus(type):
    """Metaclass of message 'DiagnosticStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': b'\x00',
        'WARN': b'\x01',
        'ERROR': b'\x02',
        'STALE': b'\x03',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'diagnostic_msgs.msg.DiagnosticStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_status

            from diagnostic_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
            'STALE': cls.__constants['STALE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_DiagnosticStatus.__constants['OK']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_DiagnosticStatus.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_DiagnosticStatus.__constants['ERROR']

    @property
    def STALE(self):
        """Message constant 'STALE'."""
        return Metaclass_DiagnosticStatus.__constants['STALE']


class DiagnosticStatus(metaclass=Metaclass_DiagnosticStatus):
    """
    Message class 'DiagnosticStatus'.

    Constants:
      OK
      WARN
      ERROR
      STALE
    """

    __slots__ = [
        '_level',
        '_name',
        '_message',
        '_hardware_id',
        '_values',
    ]

    _fields_and_field_types = {
        'level': 'octet',
        'name': 'string',
        'message': 'string',
        'hardware_id': 'string',
        'values': 'sequence<diagnostic_msgs/KeyValue>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'KeyValue')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.level = kwargs.get('level', bytes([0]))
        self.name = kwargs.get('name', str())
        self.message = kwargs.get('message', str())
        self.hardware_id = kwargs.get('hardware_id', str())
        self.values = kwargs.get('values', [])

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
        if self.level != other.level:
            return False
        if self.name != other.name:
            return False
        if self.message != other.message:
            return False
        if self.hardware_id != other.hardware_id:
            return False
        if self.values != other.values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'level' field must be of type 'bytes' or 'ByteString' with length 1"
        self._level = value

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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def hardware_id(self):
        """Message field 'hardware_id'."""
        return self._hardware_id

    @hardware_id.setter
    def hardware_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_id' field must be of type 'str'"
        self._hardware_id = value

    @builtins.property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
        if __debug__:
            from diagnostic_msgs.msg import KeyValue
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
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'values' field must be a set or sequence and each value of type 'KeyValue'"
        self._values = value
