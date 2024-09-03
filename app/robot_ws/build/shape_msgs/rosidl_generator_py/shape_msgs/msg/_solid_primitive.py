# generated from rosidl_generator_py/resource/_idl.py.em
# with input from shape_msgs:msg/SolidPrimitive.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'dimensions'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolidPrimitive(type):
    """Metaclass of message 'SolidPrimitive'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOX': 1,
        'SPHERE': 2,
        'CYLINDER': 3,
        'CONE': 4,
        'PRISM': 5,
        'BOX_X': 0,
        'BOX_Y': 1,
        'BOX_Z': 2,
        'SPHERE_RADIUS': 0,
        'CYLINDER_HEIGHT': 0,
        'CYLINDER_RADIUS': 1,
        'CONE_HEIGHT': 0,
        'CONE_RADIUS': 1,
        'PRISM_HEIGHT': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shape_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shape_msgs.msg.SolidPrimitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solid_primitive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solid_primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solid_primitive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solid_primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solid_primitive

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOX': cls.__constants['BOX'],
            'SPHERE': cls.__constants['SPHERE'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'CONE': cls.__constants['CONE'],
            'PRISM': cls.__constants['PRISM'],
            'BOX_X': cls.__constants['BOX_X'],
            'BOX_Y': cls.__constants['BOX_Y'],
            'BOX_Z': cls.__constants['BOX_Z'],
            'SPHERE_RADIUS': cls.__constants['SPHERE_RADIUS'],
            'CYLINDER_HEIGHT': cls.__constants['CYLINDER_HEIGHT'],
            'CYLINDER_RADIUS': cls.__constants['CYLINDER_RADIUS'],
            'CONE_HEIGHT': cls.__constants['CONE_HEIGHT'],
            'CONE_RADIUS': cls.__constants['CONE_RADIUS'],
            'PRISM_HEIGHT': cls.__constants['PRISM_HEIGHT'],
        }

    @property
    def BOX(self):
        """Message constant 'BOX'."""
        return Metaclass_SolidPrimitive.__constants['BOX']

    @property
    def SPHERE(self):
        """Message constant 'SPHERE'."""
        return Metaclass_SolidPrimitive.__constants['SPHERE']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass_SolidPrimitive.__constants['CYLINDER']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_SolidPrimitive.__constants['CONE']

    @property
    def PRISM(self):
        """Message constant 'PRISM'."""
        return Metaclass_SolidPrimitive.__constants['PRISM']

    @property
    def BOX_X(self):
        """Message constant 'BOX_X'."""
        return Metaclass_SolidPrimitive.__constants['BOX_X']

    @property
    def BOX_Y(self):
        """Message constant 'BOX_Y'."""
        return Metaclass_SolidPrimitive.__constants['BOX_Y']

    @property
    def BOX_Z(self):
        """Message constant 'BOX_Z'."""
        return Metaclass_SolidPrimitive.__constants['BOX_Z']

    @property
    def SPHERE_RADIUS(self):
        """Message constant 'SPHERE_RADIUS'."""
        return Metaclass_SolidPrimitive.__constants['SPHERE_RADIUS']

    @property
    def CYLINDER_HEIGHT(self):
        """Message constant 'CYLINDER_HEIGHT'."""
        return Metaclass_SolidPrimitive.__constants['CYLINDER_HEIGHT']

    @property
    def CYLINDER_RADIUS(self):
        """Message constant 'CYLINDER_RADIUS'."""
        return Metaclass_SolidPrimitive.__constants['CYLINDER_RADIUS']

    @property
    def CONE_HEIGHT(self):
        """Message constant 'CONE_HEIGHT'."""
        return Metaclass_SolidPrimitive.__constants['CONE_HEIGHT']

    @property
    def CONE_RADIUS(self):
        """Message constant 'CONE_RADIUS'."""
        return Metaclass_SolidPrimitive.__constants['CONE_RADIUS']

    @property
    def PRISM_HEIGHT(self):
        """Message constant 'PRISM_HEIGHT'."""
        return Metaclass_SolidPrimitive.__constants['PRISM_HEIGHT']


class SolidPrimitive(metaclass=Metaclass_SolidPrimitive):
    """
    Message class 'SolidPrimitive'.

    Constants:
      BOX
      SPHERE
      CYLINDER
      CONE
      PRISM
      BOX_X
      BOX_Y
      BOX_Z
      SPHERE_RADIUS
      CYLINDER_HEIGHT
      CYLINDER_RADIUS
      CONE_HEIGHT
      CONE_RADIUS
      PRISM_HEIGHT
    """

    __slots__ = [
        '_type',
        '_dimensions',
        '_polygon',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'dimensions': 'sequence<double, 3>',
        'polygon': 'geometry_msgs/Polygon',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.dimensions = array.array('d', kwargs.get('dimensions', []))
        from geometry_msgs.msg import Polygon
        self.polygon = kwargs.get('polygon', Polygon())

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
        if self.dimensions != other.dimensions:
            return False
        if self.polygon != other.polygon:
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

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'dimensions' array.array() must have the type code of 'd'"
            assert len(value) <= 3, \
                "The 'dimensions' array.array() must have a size <= 3"
            self._dimensions = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dimensions' field must be a set or sequence with length <= 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dimensions = array.array('d', value)

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'polygon' field must be a sub message of type 'Polygon'"
        self._polygon = value
