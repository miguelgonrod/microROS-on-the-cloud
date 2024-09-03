# generated from rosidl_generator_py/resource/_idl.py.em
# with input from action_msgs:msg/GoalStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoalStatus(type):
    """Metaclass of message 'GoalStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_UNKNOWN': 0,
        'STATUS_ACCEPTED': 1,
        'STATUS_EXECUTING': 2,
        'STATUS_CANCELING': 3,
        'STATUS_SUCCEEDED': 4,
        'STATUS_CANCELED': 5,
        'STATUS_ABORTED': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_msgs.msg.GoalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__goal_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__goal_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__goal_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__goal_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__goal_status

            from action_msgs.msg import GoalInfo
            if GoalInfo.__class__._TYPE_SUPPORT is None:
                GoalInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_UNKNOWN': cls.__constants['STATUS_UNKNOWN'],
            'STATUS_ACCEPTED': cls.__constants['STATUS_ACCEPTED'],
            'STATUS_EXECUTING': cls.__constants['STATUS_EXECUTING'],
            'STATUS_CANCELING': cls.__constants['STATUS_CANCELING'],
            'STATUS_SUCCEEDED': cls.__constants['STATUS_SUCCEEDED'],
            'STATUS_CANCELED': cls.__constants['STATUS_CANCELED'],
            'STATUS_ABORTED': cls.__constants['STATUS_ABORTED'],
        }

    @property
    def STATUS_UNKNOWN(self):
        """Message constant 'STATUS_UNKNOWN'."""
        return Metaclass_GoalStatus.__constants['STATUS_UNKNOWN']

    @property
    def STATUS_ACCEPTED(self):
        """Message constant 'STATUS_ACCEPTED'."""
        return Metaclass_GoalStatus.__constants['STATUS_ACCEPTED']

    @property
    def STATUS_EXECUTING(self):
        """Message constant 'STATUS_EXECUTING'."""
        return Metaclass_GoalStatus.__constants['STATUS_EXECUTING']

    @property
    def STATUS_CANCELING(self):
        """Message constant 'STATUS_CANCELING'."""
        return Metaclass_GoalStatus.__constants['STATUS_CANCELING']

    @property
    def STATUS_SUCCEEDED(self):
        """Message constant 'STATUS_SUCCEEDED'."""
        return Metaclass_GoalStatus.__constants['STATUS_SUCCEEDED']

    @property
    def STATUS_CANCELED(self):
        """Message constant 'STATUS_CANCELED'."""
        return Metaclass_GoalStatus.__constants['STATUS_CANCELED']

    @property
    def STATUS_ABORTED(self):
        """Message constant 'STATUS_ABORTED'."""
        return Metaclass_GoalStatus.__constants['STATUS_ABORTED']


class GoalStatus(metaclass=Metaclass_GoalStatus):
    """
    Message class 'GoalStatus'.

    Constants:
      STATUS_UNKNOWN
      STATUS_ACCEPTED
      STATUS_EXECUTING
      STATUS_CANCELING
      STATUS_SUCCEEDED
      STATUS_CANCELED
      STATUS_ABORTED
    """

    __slots__ = [
        '_goal_info',
        '_status',
    ]

    _fields_and_field_types = {
        'goal_info': 'action_msgs/GoalInfo',
        'status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['action_msgs', 'msg'], 'GoalInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from action_msgs.msg import GoalInfo
        self.goal_info = kwargs.get('goal_info', GoalInfo())
        self.status = kwargs.get('status', int())

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
        if self.goal_info != other.goal_info:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_info(self):
        """Message field 'goal_info'."""
        return self._goal_info

    @goal_info.setter
    def goal_info(self, value):
        if __debug__:
            from action_msgs.msg import GoalInfo
            assert \
                isinstance(value, GoalInfo), \
                "The 'goal_info' field must be a sub message of type 'GoalInfo'"
        self._goal_info = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value
