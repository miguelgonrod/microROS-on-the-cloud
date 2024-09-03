# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/MultiNested.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiNested(type):
    """Metaclass of message 'MultiNested'."""

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
                'test_msgs.msg.MultiNested')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_nested
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_nested
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_nested
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_nested
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_nested

            from test_msgs.msg import Arrays
            if Arrays.__class__._TYPE_SUPPORT is None:
                Arrays.__class__.__import_type_support__()

            from test_msgs.msg import BoundedSequences
            if BoundedSequences.__class__._TYPE_SUPPORT is None:
                BoundedSequences.__class__.__import_type_support__()

            from test_msgs.msg import UnboundedSequences
            if UnboundedSequences.__class__._TYPE_SUPPORT is None:
                UnboundedSequences.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiNested(metaclass=Metaclass_MultiNested):
    """Message class 'MultiNested'."""

    __slots__ = [
        '_array_of_arrays',
        '_array_of_bounded_sequences',
        '_array_of_unbounded_sequences',
        '_bounded_sequence_of_arrays',
        '_bounded_sequence_of_bounded_sequences',
        '_bounded_sequence_of_unbounded_sequences',
        '_unbounded_sequence_of_arrays',
        '_unbounded_sequence_of_bounded_sequences',
        '_unbounded_sequence_of_unbounded_sequences',
    ]

    _fields_and_field_types = {
        'array_of_arrays': 'test_msgs/Arrays[3]',
        'array_of_bounded_sequences': 'test_msgs/BoundedSequences[3]',
        'array_of_unbounded_sequences': 'test_msgs/UnboundedSequences[3]',
        'bounded_sequence_of_arrays': 'sequence<test_msgs/Arrays, 3>',
        'bounded_sequence_of_bounded_sequences': 'sequence<test_msgs/BoundedSequences, 3>',
        'bounded_sequence_of_unbounded_sequences': 'sequence<test_msgs/UnboundedSequences, 3>',
        'unbounded_sequence_of_arrays': 'sequence<test_msgs/Arrays>',
        'unbounded_sequence_of_bounded_sequences': 'sequence<test_msgs/BoundedSequences>',
        'unbounded_sequence_of_unbounded_sequences': 'sequence<test_msgs/UnboundedSequences>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Arrays'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BoundedSequences'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'UnboundedSequences'), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Arrays'), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BoundedSequences'), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'UnboundedSequences'), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Arrays')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BoundedSequences')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'UnboundedSequences')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test_msgs.msg import Arrays
        self.array_of_arrays = kwargs.get(
            'array_of_arrays',
            [Arrays() for x in range(3)]
        )
        from test_msgs.msg import BoundedSequences
        self.array_of_bounded_sequences = kwargs.get(
            'array_of_bounded_sequences',
            [BoundedSequences() for x in range(3)]
        )
        from test_msgs.msg import UnboundedSequences
        self.array_of_unbounded_sequences = kwargs.get(
            'array_of_unbounded_sequences',
            [UnboundedSequences() for x in range(3)]
        )
        self.bounded_sequence_of_arrays = kwargs.get('bounded_sequence_of_arrays', [])
        self.bounded_sequence_of_bounded_sequences = kwargs.get('bounded_sequence_of_bounded_sequences', [])
        self.bounded_sequence_of_unbounded_sequences = kwargs.get('bounded_sequence_of_unbounded_sequences', [])
        self.unbounded_sequence_of_arrays = kwargs.get('unbounded_sequence_of_arrays', [])
        self.unbounded_sequence_of_bounded_sequences = kwargs.get('unbounded_sequence_of_bounded_sequences', [])
        self.unbounded_sequence_of_unbounded_sequences = kwargs.get('unbounded_sequence_of_unbounded_sequences', [])

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
        if self.array_of_arrays != other.array_of_arrays:
            return False
        if self.array_of_bounded_sequences != other.array_of_bounded_sequences:
            return False
        if self.array_of_unbounded_sequences != other.array_of_unbounded_sequences:
            return False
        if self.bounded_sequence_of_arrays != other.bounded_sequence_of_arrays:
            return False
        if self.bounded_sequence_of_bounded_sequences != other.bounded_sequence_of_bounded_sequences:
            return False
        if self.bounded_sequence_of_unbounded_sequences != other.bounded_sequence_of_unbounded_sequences:
            return False
        if self.unbounded_sequence_of_arrays != other.unbounded_sequence_of_arrays:
            return False
        if self.unbounded_sequence_of_bounded_sequences != other.unbounded_sequence_of_bounded_sequences:
            return False
        if self.unbounded_sequence_of_unbounded_sequences != other.unbounded_sequence_of_unbounded_sequences:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def array_of_arrays(self):
        """Message field 'array_of_arrays'."""
        return self._array_of_arrays

    @array_of_arrays.setter
    def array_of_arrays(self, value):
        if __debug__:
            from test_msgs.msg import Arrays
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
                 all(isinstance(v, Arrays) for v in value) and
                 True), \
                "The 'array_of_arrays' field must be a set or sequence with length 3 and each value of type 'Arrays'"
        self._array_of_arrays = value

    @builtins.property
    def array_of_bounded_sequences(self):
        """Message field 'array_of_bounded_sequences'."""
        return self._array_of_bounded_sequences

    @array_of_bounded_sequences.setter
    def array_of_bounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import BoundedSequences
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
                 all(isinstance(v, BoundedSequences) for v in value) and
                 True), \
                "The 'array_of_bounded_sequences' field must be a set or sequence with length 3 and each value of type 'BoundedSequences'"
        self._array_of_bounded_sequences = value

    @builtins.property
    def array_of_unbounded_sequences(self):
        """Message field 'array_of_unbounded_sequences'."""
        return self._array_of_unbounded_sequences

    @array_of_unbounded_sequences.setter
    def array_of_unbounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import UnboundedSequences
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
                 all(isinstance(v, UnboundedSequences) for v in value) and
                 True), \
                "The 'array_of_unbounded_sequences' field must be a set or sequence with length 3 and each value of type 'UnboundedSequences'"
        self._array_of_unbounded_sequences = value

    @builtins.property
    def bounded_sequence_of_arrays(self):
        """Message field 'bounded_sequence_of_arrays'."""
        return self._bounded_sequence_of_arrays

    @bounded_sequence_of_arrays.setter
    def bounded_sequence_of_arrays(self, value):
        if __debug__:
            from test_msgs.msg import Arrays
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
                 all(isinstance(v, Arrays) for v in value) and
                 True), \
                "The 'bounded_sequence_of_arrays' field must be a set or sequence with length <= 3 and each value of type 'Arrays'"
        self._bounded_sequence_of_arrays = value

    @builtins.property
    def bounded_sequence_of_bounded_sequences(self):
        """Message field 'bounded_sequence_of_bounded_sequences'."""
        return self._bounded_sequence_of_bounded_sequences

    @bounded_sequence_of_bounded_sequences.setter
    def bounded_sequence_of_bounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import BoundedSequences
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
                 all(isinstance(v, BoundedSequences) for v in value) and
                 True), \
                "The 'bounded_sequence_of_bounded_sequences' field must be a set or sequence with length <= 3 and each value of type 'BoundedSequences'"
        self._bounded_sequence_of_bounded_sequences = value

    @builtins.property
    def bounded_sequence_of_unbounded_sequences(self):
        """Message field 'bounded_sequence_of_unbounded_sequences'."""
        return self._bounded_sequence_of_unbounded_sequences

    @bounded_sequence_of_unbounded_sequences.setter
    def bounded_sequence_of_unbounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import UnboundedSequences
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
                 all(isinstance(v, UnboundedSequences) for v in value) and
                 True), \
                "The 'bounded_sequence_of_unbounded_sequences' field must be a set or sequence with length <= 3 and each value of type 'UnboundedSequences'"
        self._bounded_sequence_of_unbounded_sequences = value

    @builtins.property
    def unbounded_sequence_of_arrays(self):
        """Message field 'unbounded_sequence_of_arrays'."""
        return self._unbounded_sequence_of_arrays

    @unbounded_sequence_of_arrays.setter
    def unbounded_sequence_of_arrays(self, value):
        if __debug__:
            from test_msgs.msg import Arrays
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
                 all(isinstance(v, Arrays) for v in value) and
                 True), \
                "The 'unbounded_sequence_of_arrays' field must be a set or sequence and each value of type 'Arrays'"
        self._unbounded_sequence_of_arrays = value

    @builtins.property
    def unbounded_sequence_of_bounded_sequences(self):
        """Message field 'unbounded_sequence_of_bounded_sequences'."""
        return self._unbounded_sequence_of_bounded_sequences

    @unbounded_sequence_of_bounded_sequences.setter
    def unbounded_sequence_of_bounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import BoundedSequences
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
                 all(isinstance(v, BoundedSequences) for v in value) and
                 True), \
                "The 'unbounded_sequence_of_bounded_sequences' field must be a set or sequence and each value of type 'BoundedSequences'"
        self._unbounded_sequence_of_bounded_sequences = value

    @builtins.property
    def unbounded_sequence_of_unbounded_sequences(self):
        """Message field 'unbounded_sequence_of_unbounded_sequences'."""
        return self._unbounded_sequence_of_unbounded_sequences

    @unbounded_sequence_of_unbounded_sequences.setter
    def unbounded_sequence_of_unbounded_sequences(self, value):
        if __debug__:
            from test_msgs.msg import UnboundedSequences
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
                 all(isinstance(v, UnboundedSequences) for v in value) and
                 True), \
                "The 'unbounded_sequence_of_unbounded_sequences' field must be a set or sequence and each value of type 'UnboundedSequences'"
        self._unbounded_sequence_of_unbounded_sequences = value
