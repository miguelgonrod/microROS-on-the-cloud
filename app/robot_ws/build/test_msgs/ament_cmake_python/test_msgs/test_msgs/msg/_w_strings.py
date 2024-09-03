# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/WStrings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WStrings(type):
    """Metaclass of message 'WStrings'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.msg.WStrings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__w_strings
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__w_strings
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__w_strings
            cls._TYPE_SUPPORT = module.type_support_msg__msg__w_strings
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__w_strings

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WSTRING_VALUE_DEFAULT1__DEFAULT': 'Hello world!',
            'WSTRING_VALUE_DEFAULT2__DEFAULT': 'Hellö wörld!',
            'WSTRING_VALUE_DEFAULT3__DEFAULT': 'ハローワールド',
        }

    @property
    def WSTRING_VALUE_DEFAULT1__DEFAULT(cls):
        """Return default value for message field 'wstring_value_default1'."""
        return 'Hello world!'

    @property
    def WSTRING_VALUE_DEFAULT2__DEFAULT(cls):
        """Return default value for message field 'wstring_value_default2'."""
        return 'Hellö wörld!'

    @property
    def WSTRING_VALUE_DEFAULT3__DEFAULT(cls):
        """Return default value for message field 'wstring_value_default3'."""
        return 'ハローワールド'


class WStrings(metaclass=Metaclass_WStrings):
    """Message class 'WStrings'."""

    __slots__ = [
        '_wstring_value',
        '_wstring_value_default1',
        '_wstring_value_default2',
        '_wstring_value_default3',
        '_array_of_wstrings',
        '_bounded_sequence_of_wstrings',
        '_unbounded_sequence_of_wstrings',
    ]

    _fields_and_field_types = {
        'wstring_value': 'wstring',
        'wstring_value_default1': 'wstring',
        'wstring_value_default2': 'wstring',
        'wstring_value_default3': 'wstring',
        'array_of_wstrings': 'wstring[3]',
        'bounded_sequence_of_wstrings': 'sequence<wstring, 3>',
        'unbounded_sequence_of_wstrings': 'sequence<wstring>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedWString(), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.UnboundedWString(), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedWString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wstring_value = kwargs.get('wstring_value', str())
        self.wstring_value_default1 = kwargs.get(
            'wstring_value_default1', WStrings.WSTRING_VALUE_DEFAULT1__DEFAULT)
        self.wstring_value_default2 = kwargs.get(
            'wstring_value_default2', WStrings.WSTRING_VALUE_DEFAULT2__DEFAULT)
        self.wstring_value_default3 = kwargs.get(
            'wstring_value_default3', WStrings.WSTRING_VALUE_DEFAULT3__DEFAULT)
        self.array_of_wstrings = kwargs.get(
            'array_of_wstrings',
            [str() for x in range(3)]
        )
        self.bounded_sequence_of_wstrings = kwargs.get('bounded_sequence_of_wstrings', [])
        self.unbounded_sequence_of_wstrings = kwargs.get('unbounded_sequence_of_wstrings', [])

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
        if self.wstring_value != other.wstring_value:
            return False
        if self.wstring_value_default1 != other.wstring_value_default1:
            return False
        if self.wstring_value_default2 != other.wstring_value_default2:
            return False
        if self.wstring_value_default3 != other.wstring_value_default3:
            return False
        if self.array_of_wstrings != other.array_of_wstrings:
            return False
        if self.bounded_sequence_of_wstrings != other.bounded_sequence_of_wstrings:
            return False
        if self.unbounded_sequence_of_wstrings != other.unbounded_sequence_of_wstrings:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wstring_value(self):
        """Message field 'wstring_value'."""
        return self._wstring_value

    @wstring_value.setter
    def wstring_value(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wstring_value' field must be of type 'str'"
        self._wstring_value = value

    @builtins.property
    def wstring_value_default1(self):
        """Message field 'wstring_value_default1'."""
        return self._wstring_value_default1

    @wstring_value_default1.setter
    def wstring_value_default1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wstring_value_default1' field must be of type 'str'"
        self._wstring_value_default1 = value

    @builtins.property
    def wstring_value_default2(self):
        """Message field 'wstring_value_default2'."""
        return self._wstring_value_default2

    @wstring_value_default2.setter
    def wstring_value_default2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wstring_value_default2' field must be of type 'str'"
        self._wstring_value_default2 = value

    @builtins.property
    def wstring_value_default3(self):
        """Message field 'wstring_value_default3'."""
        return self._wstring_value_default3

    @wstring_value_default3.setter
    def wstring_value_default3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wstring_value_default3' field must be of type 'str'"
        self._wstring_value_default3 = value

    @builtins.property
    def array_of_wstrings(self):
        """Message field 'array_of_wstrings'."""
        return self._array_of_wstrings

    @array_of_wstrings.setter
    def array_of_wstrings(self, value):
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
                 len(value) == 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'array_of_wstrings' field must be a set or sequence with length 3 and each value of type 'str'"
        self._array_of_wstrings = value

    @builtins.property
    def bounded_sequence_of_wstrings(self):
        """Message field 'bounded_sequence_of_wstrings'."""
        return self._bounded_sequence_of_wstrings

    @bounded_sequence_of_wstrings.setter
    def bounded_sequence_of_wstrings(self, value):
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
                 len(value) <= 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_sequence_of_wstrings' field must be a set or sequence with length <= 3 and each value of type 'str'"
        self._bounded_sequence_of_wstrings = value

    @builtins.property
    def unbounded_sequence_of_wstrings(self):
        """Message field 'unbounded_sequence_of_wstrings'."""
        return self._unbounded_sequence_of_wstrings

    @unbounded_sequence_of_wstrings.setter
    def unbounded_sequence_of_wstrings(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'unbounded_sequence_of_wstrings' field must be a set or sequence and each value of type 'str'"
        self._unbounded_sequence_of_wstrings = value
