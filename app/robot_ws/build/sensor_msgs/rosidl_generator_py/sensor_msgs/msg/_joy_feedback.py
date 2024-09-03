# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/JoyFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JoyFeedback(type):
    """Metaclass of message 'JoyFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_LED': 0,
        'TYPE_RUMBLE': 1,
        'TYPE_BUZZER': 2,
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
                'sensor_msgs.msg.JoyFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joy_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joy_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joy_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joy_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joy_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_LED': cls.__constants['TYPE_LED'],
            'TYPE_RUMBLE': cls.__constants['TYPE_RUMBLE'],
            'TYPE_BUZZER': cls.__constants['TYPE_BUZZER'],
        }

    @property
    def TYPE_LED(self):
        """Message constant 'TYPE_LED'."""
        return Metaclass_JoyFeedback.__constants['TYPE_LED']

    @property
    def TYPE_RUMBLE(self):
        """Message constant 'TYPE_RUMBLE'."""
        return Metaclass_JoyFeedback.__constants['TYPE_RUMBLE']

    @property
    def TYPE_BUZZER(self):
        """Message constant 'TYPE_BUZZER'."""
        return Metaclass_JoyFeedback.__constants['TYPE_BUZZER']


class JoyFeedback(metaclass=Metaclass_JoyFeedback):
    """
    Message class 'JoyFeedback'.

    Constants:
      TYPE_LED
      TYPE_RUMBLE
      TYPE_BUZZER
    """

    __slots__ = [
        '_type',
        '_id',
        '_intensity',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'id': 'uint8',
        'intensity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.id = kwargs.get('id', int())
        self.intensity = kwargs.get('intensity', float())

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
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.intensity != other.intensity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

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
    def intensity(self):
        """Message field 'intensity'."""
        return self._intensity

    @intensity.setter
    def intensity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'intensity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'intensity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._intensity = value
