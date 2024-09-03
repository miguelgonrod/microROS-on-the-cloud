# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lifecycle_msgs:msg/State.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_State(type):
    """Metaclass of message 'State'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PRIMARY_STATE_UNKNOWN': 0,
        'PRIMARY_STATE_UNCONFIGURED': 1,
        'PRIMARY_STATE_INACTIVE': 2,
        'PRIMARY_STATE_ACTIVE': 3,
        'PRIMARY_STATE_FINALIZED': 4,
        'TRANSITION_STATE_CONFIGURING': 10,
        'TRANSITION_STATE_CLEANINGUP': 11,
        'TRANSITION_STATE_SHUTTINGDOWN': 12,
        'TRANSITION_STATE_ACTIVATING': 13,
        'TRANSITION_STATE_DEACTIVATING': 14,
        'TRANSITION_STATE_ERRORPROCESSING': 15,
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
                'lifecycle_msgs.msg.State')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PRIMARY_STATE_UNKNOWN': cls.__constants['PRIMARY_STATE_UNKNOWN'],
            'PRIMARY_STATE_UNCONFIGURED': cls.__constants['PRIMARY_STATE_UNCONFIGURED'],
            'PRIMARY_STATE_INACTIVE': cls.__constants['PRIMARY_STATE_INACTIVE'],
            'PRIMARY_STATE_ACTIVE': cls.__constants['PRIMARY_STATE_ACTIVE'],
            'PRIMARY_STATE_FINALIZED': cls.__constants['PRIMARY_STATE_FINALIZED'],
            'TRANSITION_STATE_CONFIGURING': cls.__constants['TRANSITION_STATE_CONFIGURING'],
            'TRANSITION_STATE_CLEANINGUP': cls.__constants['TRANSITION_STATE_CLEANINGUP'],
            'TRANSITION_STATE_SHUTTINGDOWN': cls.__constants['TRANSITION_STATE_SHUTTINGDOWN'],
            'TRANSITION_STATE_ACTIVATING': cls.__constants['TRANSITION_STATE_ACTIVATING'],
            'TRANSITION_STATE_DEACTIVATING': cls.__constants['TRANSITION_STATE_DEACTIVATING'],
            'TRANSITION_STATE_ERRORPROCESSING': cls.__constants['TRANSITION_STATE_ERRORPROCESSING'],
        }

    @property
    def PRIMARY_STATE_UNKNOWN(self):
        """Message constant 'PRIMARY_STATE_UNKNOWN'."""
        return Metaclass_State.__constants['PRIMARY_STATE_UNKNOWN']

    @property
    def PRIMARY_STATE_UNCONFIGURED(self):
        """Message constant 'PRIMARY_STATE_UNCONFIGURED'."""
        return Metaclass_State.__constants['PRIMARY_STATE_UNCONFIGURED']

    @property
    def PRIMARY_STATE_INACTIVE(self):
        """Message constant 'PRIMARY_STATE_INACTIVE'."""
        return Metaclass_State.__constants['PRIMARY_STATE_INACTIVE']

    @property
    def PRIMARY_STATE_ACTIVE(self):
        """Message constant 'PRIMARY_STATE_ACTIVE'."""
        return Metaclass_State.__constants['PRIMARY_STATE_ACTIVE']

    @property
    def PRIMARY_STATE_FINALIZED(self):
        """Message constant 'PRIMARY_STATE_FINALIZED'."""
        return Metaclass_State.__constants['PRIMARY_STATE_FINALIZED']

    @property
    def TRANSITION_STATE_CONFIGURING(self):
        """Message constant 'TRANSITION_STATE_CONFIGURING'."""
        return Metaclass_State.__constants['TRANSITION_STATE_CONFIGURING']

    @property
    def TRANSITION_STATE_CLEANINGUP(self):
        """Message constant 'TRANSITION_STATE_CLEANINGUP'."""
        return Metaclass_State.__constants['TRANSITION_STATE_CLEANINGUP']

    @property
    def TRANSITION_STATE_SHUTTINGDOWN(self):
        """Message constant 'TRANSITION_STATE_SHUTTINGDOWN'."""
        return Metaclass_State.__constants['TRANSITION_STATE_SHUTTINGDOWN']

    @property
    def TRANSITION_STATE_ACTIVATING(self):
        """Message constant 'TRANSITION_STATE_ACTIVATING'."""
        return Metaclass_State.__constants['TRANSITION_STATE_ACTIVATING']

    @property
    def TRANSITION_STATE_DEACTIVATING(self):
        """Message constant 'TRANSITION_STATE_DEACTIVATING'."""
        return Metaclass_State.__constants['TRANSITION_STATE_DEACTIVATING']

    @property
    def TRANSITION_STATE_ERRORPROCESSING(self):
        """Message constant 'TRANSITION_STATE_ERRORPROCESSING'."""
        return Metaclass_State.__constants['TRANSITION_STATE_ERRORPROCESSING']


class State(metaclass=Metaclass_State):
    """
    Message class 'State'.

    Constants:
      PRIMARY_STATE_UNKNOWN
      PRIMARY_STATE_UNCONFIGURED
      PRIMARY_STATE_INACTIVE
      PRIMARY_STATE_ACTIVE
      PRIMARY_STATE_FINALIZED
      TRANSITION_STATE_CONFIGURING
      TRANSITION_STATE_CLEANINGUP
      TRANSITION_STATE_SHUTTINGDOWN
      TRANSITION_STATE_ACTIVATING
      TRANSITION_STATE_DEACTIVATING
      TRANSITION_STATE_ERRORPROCESSING
    """

    __slots__ = [
        '_id',
        '_label',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'label': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.label = kwargs.get('label', str())

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
        if self.id != other.id:
            return False
        if self.label != other.label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

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
