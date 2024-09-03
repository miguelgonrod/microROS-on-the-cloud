# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lifecycle_msgs:msg/TransitionEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransitionEvent(type):
    """Metaclass of message 'TransitionEvent'."""

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
            module = import_type_support('lifecycle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lifecycle_msgs.msg.TransitionEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transition_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transition_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transition_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transition_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transition_event

            from lifecycle_msgs.msg import State
            if State.__class__._TYPE_SUPPORT is None:
                State.__class__.__import_type_support__()

            from lifecycle_msgs.msg import Transition
            if Transition.__class__._TYPE_SUPPORT is None:
                Transition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransitionEvent(metaclass=Metaclass_TransitionEvent):
    """Message class 'TransitionEvent'."""

    __slots__ = [
        '_timestamp',
        '_transition',
        '_start_state',
        '_goal_state',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'transition': 'lifecycle_msgs/Transition',
        'start_state': 'lifecycle_msgs/State',
        'goal_state': 'lifecycle_msgs/State',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'Transition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'State'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'State'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        from lifecycle_msgs.msg import Transition
        self.transition = kwargs.get('transition', Transition())
        from lifecycle_msgs.msg import State
        self.start_state = kwargs.get('start_state', State())
        from lifecycle_msgs.msg import State
        self.goal_state = kwargs.get('goal_state', State())

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
        if self.timestamp != other.timestamp:
            return False
        if self.transition != other.transition:
            return False
        if self.start_state != other.start_state:
            return False
        if self.goal_state != other.goal_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def transition(self):
        """Message field 'transition'."""
        return self._transition

    @transition.setter
    def transition(self, value):
        if __debug__:
            from lifecycle_msgs.msg import Transition
            assert \
                isinstance(value, Transition), \
                "The 'transition' field must be a sub message of type 'Transition'"
        self._transition = value

    @builtins.property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        if __debug__:
            from lifecycle_msgs.msg import State
            assert \
                isinstance(value, State), \
                "The 'start_state' field must be a sub message of type 'State'"
        self._start_state = value

    @builtins.property
    def goal_state(self):
        """Message field 'goal_state'."""
        return self._goal_state

    @goal_state.setter
    def goal_state(self, value):
        if __debug__:
            from lifecycle_msgs.msg import State
            assert \
                isinstance(value, State), \
                "The 'goal_state' field must be a sub message of type 'State'"
        self._goal_state = value
