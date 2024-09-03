# generated from rosidl_generator_py/resource/_idl.py.em
# with input from statistics_msgs:msg/MetricsMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MetricsMessage(type):
    """Metaclass of message 'MetricsMessage'."""

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
            module = import_type_support('statistics_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'statistics_msgs.msg.MetricsMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metrics_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metrics_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metrics_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metrics_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metrics_message

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from statistics_msgs.msg import StatisticDataPoint
            if StatisticDataPoint.__class__._TYPE_SUPPORT is None:
                StatisticDataPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MetricsMessage(metaclass=Metaclass_MetricsMessage):
    """Message class 'MetricsMessage'."""

    __slots__ = [
        '_measurement_source_name',
        '_metrics_source',
        '_unit',
        '_window_start',
        '_window_stop',
        '_statistics',
    ]

    _fields_and_field_types = {
        'measurement_source_name': 'string',
        'metrics_source': 'string',
        'unit': 'string',
        'window_start': 'builtin_interfaces/Time',
        'window_stop': 'builtin_interfaces/Time',
        'statistics': 'sequence<statistics_msgs/StatisticDataPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['statistics_msgs', 'msg'], 'StatisticDataPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.measurement_source_name = kwargs.get('measurement_source_name', str())
        self.metrics_source = kwargs.get('metrics_source', str())
        self.unit = kwargs.get('unit', str())
        from builtin_interfaces.msg import Time
        self.window_start = kwargs.get('window_start', Time())
        from builtin_interfaces.msg import Time
        self.window_stop = kwargs.get('window_stop', Time())
        self.statistics = kwargs.get('statistics', [])

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
        if self.measurement_source_name != other.measurement_source_name:
            return False
        if self.metrics_source != other.metrics_source:
            return False
        if self.unit != other.unit:
            return False
        if self.window_start != other.window_start:
            return False
        if self.window_stop != other.window_stop:
            return False
        if self.statistics != other.statistics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def measurement_source_name(self):
        """Message field 'measurement_source_name'."""
        return self._measurement_source_name

    @measurement_source_name.setter
    def measurement_source_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'measurement_source_name' field must be of type 'str'"
        self._measurement_source_name = value

    @builtins.property
    def metrics_source(self):
        """Message field 'metrics_source'."""
        return self._metrics_source

    @metrics_source.setter
    def metrics_source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'metrics_source' field must be of type 'str'"
        self._metrics_source = value

    @builtins.property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'unit' field must be of type 'str'"
        self._unit = value

    @builtins.property
    def window_start(self):
        """Message field 'window_start'."""
        return self._window_start

    @window_start.setter
    def window_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'window_start' field must be a sub message of type 'Time'"
        self._window_start = value

    @builtins.property
    def window_stop(self):
        """Message field 'window_stop'."""
        return self._window_stop

    @window_stop.setter
    def window_stop(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'window_stop' field must be a sub message of type 'Time'"
        self._window_stop = value

    @builtins.property
    def statistics(self):
        """Message field 'statistics'."""
        return self._statistics

    @statistics.setter
    def statistics(self, value):
        if __debug__:
            from statistics_msgs.msg import StatisticDataPoint
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
                 all(isinstance(v, StatisticDataPoint) for v in value) and
                 True), \
                "The 'statistics' field must be a set or sequence and each value of type 'StatisticDataPoint'"
        self._statistics = value
