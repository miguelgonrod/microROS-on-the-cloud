# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:srv/GetInteractiveMarkers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetInteractiveMarkers_Request(type):
    """Metaclass of message 'GetInteractiveMarkers_Request'."""

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
            module = import_type_support('visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'visualization_msgs.srv.GetInteractiveMarkers_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_interactive_markers__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_interactive_markers__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_interactive_markers__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_interactive_markers__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_interactive_markers__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetInteractiveMarkers_Request(metaclass=Metaclass_GetInteractiveMarkers_Request):
    """Message class 'GetInteractiveMarkers_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetInteractiveMarkers_Response(type):
    """Metaclass of message 'GetInteractiveMarkers_Response'."""

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
            module = import_type_support('visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'visualization_msgs.srv.GetInteractiveMarkers_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_interactive_markers__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_interactive_markers__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_interactive_markers__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_interactive_markers__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_interactive_markers__response

            from visualization_msgs.msg import InteractiveMarker
            if InteractiveMarker.__class__._TYPE_SUPPORT is None:
                InteractiveMarker.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetInteractiveMarkers_Response(metaclass=Metaclass_GetInteractiveMarkers_Response):
    """Message class 'GetInteractiveMarkers_Response'."""

    __slots__ = [
        '_sequence_number',
        '_markers',
    ]

    _fields_and_field_types = {
        'sequence_number': 'uint64',
        'markers': 'sequence<visualization_msgs/InteractiveMarker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'InteractiveMarker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sequence_number = kwargs.get('sequence_number', int())
        self.markers = kwargs.get('markers', [])

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
        if self.sequence_number != other.sequence_number:
            return False
        if self.markers != other.markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sequence_number(self):
        """Message field 'sequence_number'."""
        return self._sequence_number

    @sequence_number.setter
    def sequence_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_number' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sequence_number' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sequence_number = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from visualization_msgs.msg import InteractiveMarker
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
                 all(isinstance(v, InteractiveMarker) for v in value) and
                 True), \
                "The 'markers' field must be a set or sequence and each value of type 'InteractiveMarker'"
        self._markers = value


class Metaclass_GetInteractiveMarkers(type):
    """Metaclass of service 'GetInteractiveMarkers'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'visualization_msgs.srv.GetInteractiveMarkers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_interactive_markers

            from visualization_msgs.srv import _get_interactive_markers
            if _get_interactive_markers.Metaclass_GetInteractiveMarkers_Request._TYPE_SUPPORT is None:
                _get_interactive_markers.Metaclass_GetInteractiveMarkers_Request.__import_type_support__()
            if _get_interactive_markers.Metaclass_GetInteractiveMarkers_Response._TYPE_SUPPORT is None:
                _get_interactive_markers.Metaclass_GetInteractiveMarkers_Response.__import_type_support__()


class GetInteractiveMarkers(metaclass=Metaclass_GetInteractiveMarkers):
    from visualization_msgs.srv._get_interactive_markers import GetInteractiveMarkers_Request as Request
    from visualization_msgs.srv._get_interactive_markers import GetInteractiveMarkers_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
