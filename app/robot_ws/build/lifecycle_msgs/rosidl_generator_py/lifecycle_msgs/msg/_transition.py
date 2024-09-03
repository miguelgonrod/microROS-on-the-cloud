# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lifecycle_msgs:msg/Transition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Transition(type):
    """Metaclass of message 'Transition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TRANSITION_CREATE': 0,
        'TRANSITION_CONFIGURE': 1,
        'TRANSITION_CLEANUP': 2,
        'TRANSITION_ACTIVATE': 3,
        'TRANSITION_DEACTIVATE': 4,
        'TRANSITION_UNCONFIGURED_SHUTDOWN': 5,
        'TRANSITION_INACTIVE_SHUTDOWN': 6,
        'TRANSITION_ACTIVE_SHUTDOWN': 7,
        'TRANSITION_DESTROY': 8,
        'TRANSITION_ON_CONFIGURE_SUCCESS': 10,
        'TRANSITION_ON_CONFIGURE_FAILURE': 11,
        'TRANSITION_ON_CONFIGURE_ERROR': 12,
        'TRANSITION_ON_CLEANUP_SUCCESS': 20,
        'TRANSITION_ON_CLEANUP_FAILURE': 21,
        'TRANSITION_ON_CLEANUP_ERROR': 22,
        'TRANSITION_ON_ACTIVATE_SUCCESS': 30,
        'TRANSITION_ON_ACTIVATE_FAILURE': 31,
        'TRANSITION_ON_ACTIVATE_ERROR': 32,
        'TRANSITION_ON_DEACTIVATE_SUCCESS': 40,
        'TRANSITION_ON_DEACTIVATE_FAILURE': 41,
        'TRANSITION_ON_DEACTIVATE_ERROR': 42,
        'TRANSITION_ON_SHUTDOWN_SUCCESS': 50,
        'TRANSITION_ON_SHUTDOWN_FAILURE': 51,
        'TRANSITION_ON_SHUTDOWN_ERROR': 52,
        'TRANSITION_ON_ERROR_SUCCESS': 60,
        'TRANSITION_ON_ERROR_FAILURE': 61,
        'TRANSITION_ON_ERROR_ERROR': 62,
        'TRANSITION_CALLBACK_SUCCESS': 97,
        'TRANSITION_CALLBACK_FAILURE': 98,
        'TRANSITION_CALLBACK_ERROR': 99,
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
                'lifecycle_msgs.msg.Transition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transition
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transition
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transition
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transition

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRANSITION_CREATE': cls.__constants['TRANSITION_CREATE'],
            'TRANSITION_CONFIGURE': cls.__constants['TRANSITION_CONFIGURE'],
            'TRANSITION_CLEANUP': cls.__constants['TRANSITION_CLEANUP'],
            'TRANSITION_ACTIVATE': cls.__constants['TRANSITION_ACTIVATE'],
            'TRANSITION_DEACTIVATE': cls.__constants['TRANSITION_DEACTIVATE'],
            'TRANSITION_UNCONFIGURED_SHUTDOWN': cls.__constants['TRANSITION_UNCONFIGURED_SHUTDOWN'],
            'TRANSITION_INACTIVE_SHUTDOWN': cls.__constants['TRANSITION_INACTIVE_SHUTDOWN'],
            'TRANSITION_ACTIVE_SHUTDOWN': cls.__constants['TRANSITION_ACTIVE_SHUTDOWN'],
            'TRANSITION_DESTROY': cls.__constants['TRANSITION_DESTROY'],
            'TRANSITION_ON_CONFIGURE_SUCCESS': cls.__constants['TRANSITION_ON_CONFIGURE_SUCCESS'],
            'TRANSITION_ON_CONFIGURE_FAILURE': cls.__constants['TRANSITION_ON_CONFIGURE_FAILURE'],
            'TRANSITION_ON_CONFIGURE_ERROR': cls.__constants['TRANSITION_ON_CONFIGURE_ERROR'],
            'TRANSITION_ON_CLEANUP_SUCCESS': cls.__constants['TRANSITION_ON_CLEANUP_SUCCESS'],
            'TRANSITION_ON_CLEANUP_FAILURE': cls.__constants['TRANSITION_ON_CLEANUP_FAILURE'],
            'TRANSITION_ON_CLEANUP_ERROR': cls.__constants['TRANSITION_ON_CLEANUP_ERROR'],
            'TRANSITION_ON_ACTIVATE_SUCCESS': cls.__constants['TRANSITION_ON_ACTIVATE_SUCCESS'],
            'TRANSITION_ON_ACTIVATE_FAILURE': cls.__constants['TRANSITION_ON_ACTIVATE_FAILURE'],
            'TRANSITION_ON_ACTIVATE_ERROR': cls.__constants['TRANSITION_ON_ACTIVATE_ERROR'],
            'TRANSITION_ON_DEACTIVATE_SUCCESS': cls.__constants['TRANSITION_ON_DEACTIVATE_SUCCESS'],
            'TRANSITION_ON_DEACTIVATE_FAILURE': cls.__constants['TRANSITION_ON_DEACTIVATE_FAILURE'],
            'TRANSITION_ON_DEACTIVATE_ERROR': cls.__constants['TRANSITION_ON_DEACTIVATE_ERROR'],
            'TRANSITION_ON_SHUTDOWN_SUCCESS': cls.__constants['TRANSITION_ON_SHUTDOWN_SUCCESS'],
            'TRANSITION_ON_SHUTDOWN_FAILURE': cls.__constants['TRANSITION_ON_SHUTDOWN_FAILURE'],
            'TRANSITION_ON_SHUTDOWN_ERROR': cls.__constants['TRANSITION_ON_SHUTDOWN_ERROR'],
            'TRANSITION_ON_ERROR_SUCCESS': cls.__constants['TRANSITION_ON_ERROR_SUCCESS'],
            'TRANSITION_ON_ERROR_FAILURE': cls.__constants['TRANSITION_ON_ERROR_FAILURE'],
            'TRANSITION_ON_ERROR_ERROR': cls.__constants['TRANSITION_ON_ERROR_ERROR'],
            'TRANSITION_CALLBACK_SUCCESS': cls.__constants['TRANSITION_CALLBACK_SUCCESS'],
            'TRANSITION_CALLBACK_FAILURE': cls.__constants['TRANSITION_CALLBACK_FAILURE'],
            'TRANSITION_CALLBACK_ERROR': cls.__constants['TRANSITION_CALLBACK_ERROR'],
        }

    @property
    def TRANSITION_CREATE(self):
        """Message constant 'TRANSITION_CREATE'."""
        return Metaclass_Transition.__constants['TRANSITION_CREATE']

    @property
    def TRANSITION_CONFIGURE(self):
        """Message constant 'TRANSITION_CONFIGURE'."""
        return Metaclass_Transition.__constants['TRANSITION_CONFIGURE']

    @property
    def TRANSITION_CLEANUP(self):
        """Message constant 'TRANSITION_CLEANUP'."""
        return Metaclass_Transition.__constants['TRANSITION_CLEANUP']

    @property
    def TRANSITION_ACTIVATE(self):
        """Message constant 'TRANSITION_ACTIVATE'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE']

    @property
    def TRANSITION_DEACTIVATE(self):
        """Message constant 'TRANSITION_DEACTIVATE'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE']

    @property
    def TRANSITION_UNCONFIGURED_SHUTDOWN(self):
        """Message constant 'TRANSITION_UNCONFIGURED_SHUTDOWN'."""
        return Metaclass_Transition.__constants['TRANSITION_UNCONFIGURED_SHUTDOWN']

    @property
    def TRANSITION_INACTIVE_SHUTDOWN(self):
        """Message constant 'TRANSITION_INACTIVE_SHUTDOWN'."""
        return Metaclass_Transition.__constants['TRANSITION_INACTIVE_SHUTDOWN']

    @property
    def TRANSITION_ACTIVE_SHUTDOWN(self):
        """Message constant 'TRANSITION_ACTIVE_SHUTDOWN'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVE_SHUTDOWN']

    @property
    def TRANSITION_DESTROY(self):
        """Message constant 'TRANSITION_DESTROY'."""
        return Metaclass_Transition.__constants['TRANSITION_DESTROY']

    @property
    def TRANSITION_ON_CONFIGURE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CONFIGURE_SUCCESS']

    @property
    def TRANSITION_ON_CONFIGURE_FAILURE(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CONFIGURE_FAILURE']

    @property
    def TRANSITION_ON_CONFIGURE_ERROR(self):
        """Message constant 'TRANSITION_ON_CONFIGURE_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CONFIGURE_ERROR']

    @property
    def TRANSITION_ON_CLEANUP_SUCCESS(self):
        """Message constant 'TRANSITION_ON_CLEANUP_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CLEANUP_SUCCESS']

    @property
    def TRANSITION_ON_CLEANUP_FAILURE(self):
        """Message constant 'TRANSITION_ON_CLEANUP_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CLEANUP_FAILURE']

    @property
    def TRANSITION_ON_CLEANUP_ERROR(self):
        """Message constant 'TRANSITION_ON_CLEANUP_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_CLEANUP_ERROR']

    @property
    def TRANSITION_ON_ACTIVATE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ACTIVATE_SUCCESS']

    @property
    def TRANSITION_ON_ACTIVATE_FAILURE(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ACTIVATE_FAILURE']

    @property
    def TRANSITION_ON_ACTIVATE_ERROR(self):
        """Message constant 'TRANSITION_ON_ACTIVATE_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ACTIVATE_ERROR']

    @property
    def TRANSITION_ON_DEACTIVATE_SUCCESS(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_DEACTIVATE_SUCCESS']

    @property
    def TRANSITION_ON_DEACTIVATE_FAILURE(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_DEACTIVATE_FAILURE']

    @property
    def TRANSITION_ON_DEACTIVATE_ERROR(self):
        """Message constant 'TRANSITION_ON_DEACTIVATE_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_DEACTIVATE_ERROR']

    @property
    def TRANSITION_ON_SHUTDOWN_SUCCESS(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_SHUTDOWN_SUCCESS']

    @property
    def TRANSITION_ON_SHUTDOWN_FAILURE(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_SHUTDOWN_FAILURE']

    @property
    def TRANSITION_ON_SHUTDOWN_ERROR(self):
        """Message constant 'TRANSITION_ON_SHUTDOWN_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_SHUTDOWN_ERROR']

    @property
    def TRANSITION_ON_ERROR_SUCCESS(self):
        """Message constant 'TRANSITION_ON_ERROR_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ERROR_SUCCESS']

    @property
    def TRANSITION_ON_ERROR_FAILURE(self):
        """Message constant 'TRANSITION_ON_ERROR_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ERROR_FAILURE']

    @property
    def TRANSITION_ON_ERROR_ERROR(self):
        """Message constant 'TRANSITION_ON_ERROR_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ON_ERROR_ERROR']

    @property
    def TRANSITION_CALLBACK_SUCCESS(self):
        """Message constant 'TRANSITION_CALLBACK_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_CALLBACK_SUCCESS']

    @property
    def TRANSITION_CALLBACK_FAILURE(self):
        """Message constant 'TRANSITION_CALLBACK_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_CALLBACK_FAILURE']

    @property
    def TRANSITION_CALLBACK_ERROR(self):
        """Message constant 'TRANSITION_CALLBACK_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_CALLBACK_ERROR']


class Transition(metaclass=Metaclass_Transition):
    """
    Message class 'Transition'.

    Constants:
      TRANSITION_CREATE
      TRANSITION_CONFIGURE
      TRANSITION_CLEANUP
      TRANSITION_ACTIVATE
      TRANSITION_DEACTIVATE
      TRANSITION_UNCONFIGURED_SHUTDOWN
      TRANSITION_INACTIVE_SHUTDOWN
      TRANSITION_ACTIVE_SHUTDOWN
      TRANSITION_DESTROY
      TRANSITION_ON_CONFIGURE_SUCCESS
      TRANSITION_ON_CONFIGURE_FAILURE
      TRANSITION_ON_CONFIGURE_ERROR
      TRANSITION_ON_CLEANUP_SUCCESS
      TRANSITION_ON_CLEANUP_FAILURE
      TRANSITION_ON_CLEANUP_ERROR
      TRANSITION_ON_ACTIVATE_SUCCESS
      TRANSITION_ON_ACTIVATE_FAILURE
      TRANSITION_ON_ACTIVATE_ERROR
      TRANSITION_ON_DEACTIVATE_SUCCESS
      TRANSITION_ON_DEACTIVATE_FAILURE
      TRANSITION_ON_DEACTIVATE_ERROR
      TRANSITION_ON_SHUTDOWN_SUCCESS
      TRANSITION_ON_SHUTDOWN_FAILURE
      TRANSITION_ON_SHUTDOWN_ERROR
      TRANSITION_ON_ERROR_SUCCESS
      TRANSITION_ON_ERROR_FAILURE
      TRANSITION_ON_ERROR_ERROR
      TRANSITION_CALLBACK_SUCCESS
      TRANSITION_CALLBACK_FAILURE
      TRANSITION_CALLBACK_ERROR
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
