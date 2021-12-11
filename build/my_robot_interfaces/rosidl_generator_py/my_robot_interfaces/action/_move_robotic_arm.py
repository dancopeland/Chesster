# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:action/MoveRoboticArm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveRoboticArm_Goal(type):
    """Metaclass of message 'MoveRoboticArm_Goal'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_Goal(metaclass=Metaclass_MoveRoboticArm_Goal):
    """Message class 'MoveRoboticArm_Goal'."""

    __slots__ = [
        '_request',
    ]

    _fields_and_field_types = {
        'request': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request = kwargs.get('request', bool())

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
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'request' field must be of type 'bool'"
        self._request = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_Result(type):
    """Metaclass of message 'MoveRoboticArm_Result'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_Result(metaclass=Metaclass_MoveRoboticArm_Result):
    """Message class 'MoveRoboticArm_Result'."""

    __slots__ = [
        '_result',
        '_final_servo_0_angle',
        '_final_servo_1_angle',
        '_final_servo_2_angle',
        '_final_servo_3_angle',
        '_final_servo_4_angle',
        '_final_servo_5_angle',
    ]

    _fields_and_field_types = {
        'result': 'string',
        'final_servo_0_angle': 'int64',
        'final_servo_1_angle': 'int64',
        'final_servo_2_angle': 'int64',
        'final_servo_3_angle': 'int64',
        'final_servo_4_angle': 'int64',
        'final_servo_5_angle': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())
        self.final_servo_0_angle = kwargs.get('final_servo_0_angle', int())
        self.final_servo_1_angle = kwargs.get('final_servo_1_angle', int())
        self.final_servo_2_angle = kwargs.get('final_servo_2_angle', int())
        self.final_servo_3_angle = kwargs.get('final_servo_3_angle', int())
        self.final_servo_4_angle = kwargs.get('final_servo_4_angle', int())
        self.final_servo_5_angle = kwargs.get('final_servo_5_angle', int())

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
        if self.result != other.result:
            return False
        if self.final_servo_0_angle != other.final_servo_0_angle:
            return False
        if self.final_servo_1_angle != other.final_servo_1_angle:
            return False
        if self.final_servo_2_angle != other.final_servo_2_angle:
            return False
        if self.final_servo_3_angle != other.final_servo_3_angle:
            return False
        if self.final_servo_4_angle != other.final_servo_4_angle:
            return False
        if self.final_servo_5_angle != other.final_servo_5_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value

    @property
    def final_servo_0_angle(self):
        """Message field 'final_servo_0_angle'."""
        return self._final_servo_0_angle

    @final_servo_0_angle.setter
    def final_servo_0_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_0_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_0_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_0_angle = value

    @property
    def final_servo_1_angle(self):
        """Message field 'final_servo_1_angle'."""
        return self._final_servo_1_angle

    @final_servo_1_angle.setter
    def final_servo_1_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_1_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_1_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_1_angle = value

    @property
    def final_servo_2_angle(self):
        """Message field 'final_servo_2_angle'."""
        return self._final_servo_2_angle

    @final_servo_2_angle.setter
    def final_servo_2_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_2_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_2_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_2_angle = value

    @property
    def final_servo_3_angle(self):
        """Message field 'final_servo_3_angle'."""
        return self._final_servo_3_angle

    @final_servo_3_angle.setter
    def final_servo_3_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_3_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_3_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_3_angle = value

    @property
    def final_servo_4_angle(self):
        """Message field 'final_servo_4_angle'."""
        return self._final_servo_4_angle

    @final_servo_4_angle.setter
    def final_servo_4_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_4_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_4_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_4_angle = value

    @property
    def final_servo_5_angle(self):
        """Message field 'final_servo_5_angle'."""
        return self._final_servo_5_angle

    @final_servo_5_angle.setter
    def final_servo_5_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_servo_5_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'final_servo_5_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._final_servo_5_angle = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_Feedback(type):
    """Metaclass of message 'MoveRoboticArm_Feedback'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_Feedback(metaclass=Metaclass_MoveRoboticArm_Feedback):
    """Message class 'MoveRoboticArm_Feedback'."""

    __slots__ = [
        '_status',
        '_servo_0_angle',
        '_servo_1_angle',
        '_servo_2_angle',
        '_servo_3_angle',
        '_servo_4_angle',
        '_servo_5_angle',
    ]

    _fields_and_field_types = {
        'status': 'string',
        'servo_0_angle': 'int64',
        'servo_1_angle': 'int64',
        'servo_2_angle': 'int64',
        'servo_3_angle': 'int64',
        'servo_4_angle': 'int64',
        'servo_5_angle': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', str())
        self.servo_0_angle = kwargs.get('servo_0_angle', int())
        self.servo_1_angle = kwargs.get('servo_1_angle', int())
        self.servo_2_angle = kwargs.get('servo_2_angle', int())
        self.servo_3_angle = kwargs.get('servo_3_angle', int())
        self.servo_4_angle = kwargs.get('servo_4_angle', int())
        self.servo_5_angle = kwargs.get('servo_5_angle', int())

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
        if self.status != other.status:
            return False
        if self.servo_0_angle != other.servo_0_angle:
            return False
        if self.servo_1_angle != other.servo_1_angle:
            return False
        if self.servo_2_angle != other.servo_2_angle:
            return False
        if self.servo_3_angle != other.servo_3_angle:
            return False
        if self.servo_4_angle != other.servo_4_angle:
            return False
        if self.servo_5_angle != other.servo_5_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @property
    def servo_0_angle(self):
        """Message field 'servo_0_angle'."""
        return self._servo_0_angle

    @servo_0_angle.setter
    def servo_0_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_0_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_0_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_0_angle = value

    @property
    def servo_1_angle(self):
        """Message field 'servo_1_angle'."""
        return self._servo_1_angle

    @servo_1_angle.setter
    def servo_1_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_1_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_1_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_1_angle = value

    @property
    def servo_2_angle(self):
        """Message field 'servo_2_angle'."""
        return self._servo_2_angle

    @servo_2_angle.setter
    def servo_2_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_2_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_2_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_2_angle = value

    @property
    def servo_3_angle(self):
        """Message field 'servo_3_angle'."""
        return self._servo_3_angle

    @servo_3_angle.setter
    def servo_3_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_3_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_3_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_3_angle = value

    @property
    def servo_4_angle(self):
        """Message field 'servo_4_angle'."""
        return self._servo_4_angle

    @servo_4_angle.setter
    def servo_4_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_4_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_4_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_4_angle = value

    @property
    def servo_5_angle(self):
        """Message field 'servo_5_angle'."""
        return self._servo_5_angle

    @servo_5_angle.setter
    def servo_5_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_5_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'servo_5_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._servo_5_angle = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_SendGoal_Request(type):
    """Metaclass of message 'MoveRoboticArm_SendGoal_Request'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__send_goal__request

            from my_robot_interfaces.action import MoveRoboticArm
            if MoveRoboticArm.Goal.__class__._TYPE_SUPPORT is None:
                MoveRoboticArm.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_SendGoal_Request(metaclass=Metaclass_MoveRoboticArm_SendGoal_Request):
    """Message class 'MoveRoboticArm_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'my_robot_interfaces/MoveRoboticArm_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_robot_interfaces', 'action'], 'MoveRoboticArm_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Goal
        self.goal = kwargs.get('goal', MoveRoboticArm_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Goal
            assert \
                isinstance(value, MoveRoboticArm_Goal), \
                "The 'goal' field must be a sub message of type 'MoveRoboticArm_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_SendGoal_Response(type):
    """Metaclass of message 'MoveRoboticArm_SendGoal_Response'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_SendGoal_Response(metaclass=Metaclass_MoveRoboticArm_SendGoal_Response):
    """Message class 'MoveRoboticArm_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MoveRoboticArm_SendGoal(type):
    """Metaclass of service 'MoveRoboticArm_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_robotic_arm__send_goal

            from my_robot_interfaces.action import _move_robotic_arm
            if _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal_Request._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal_Request.__import_type_support__()
            if _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal_Response._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal_Response.__import_type_support__()


class MoveRoboticArm_SendGoal(metaclass=Metaclass_MoveRoboticArm_SendGoal):
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_SendGoal_Request as Request
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_GetResult_Request(type):
    """Metaclass of message 'MoveRoboticArm_GetResult_Request'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_GetResult_Request(metaclass=Metaclass_MoveRoboticArm_GetResult_Request):
    """Message class 'MoveRoboticArm_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_GetResult_Response(type):
    """Metaclass of message 'MoveRoboticArm_GetResult_Response'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__get_result__response

            from my_robot_interfaces.action import MoveRoboticArm
            if MoveRoboticArm.Result.__class__._TYPE_SUPPORT is None:
                MoveRoboticArm.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_GetResult_Response(metaclass=Metaclass_MoveRoboticArm_GetResult_Response):
    """Message class 'MoveRoboticArm_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'my_robot_interfaces/MoveRoboticArm_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_robot_interfaces', 'action'], 'MoveRoboticArm_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Result
        self.result = kwargs.get('result', MoveRoboticArm_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Result
            assert \
                isinstance(value, MoveRoboticArm_Result), \
                "The 'result' field must be a sub message of type 'MoveRoboticArm_Result'"
        self._result = value


class Metaclass_MoveRoboticArm_GetResult(type):
    """Metaclass of service 'MoveRoboticArm_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_robotic_arm__get_result

            from my_robot_interfaces.action import _move_robotic_arm
            if _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult_Request._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult_Request.__import_type_support__()
            if _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult_Response._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult_Response.__import_type_support__()


class MoveRoboticArm_GetResult(metaclass=Metaclass_MoveRoboticArm_GetResult):
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_GetResult_Request as Request
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRoboticArm_FeedbackMessage(type):
    """Metaclass of message 'MoveRoboticArm_FeedbackMessage'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_robotic_arm__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_robotic_arm__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_robotic_arm__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_robotic_arm__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_robotic_arm__feedback_message

            from my_robot_interfaces.action import MoveRoboticArm
            if MoveRoboticArm.Feedback.__class__._TYPE_SUPPORT is None:
                MoveRoboticArm.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRoboticArm_FeedbackMessage(metaclass=Metaclass_MoveRoboticArm_FeedbackMessage):
    """Message class 'MoveRoboticArm_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'my_robot_interfaces/MoveRoboticArm_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_robot_interfaces', 'action'], 'MoveRoboticArm_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Feedback
        self.feedback = kwargs.get('feedback', MoveRoboticArm_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Feedback
            assert \
                isinstance(value, MoveRoboticArm_Feedback), \
                "The 'feedback' field must be a sub message of type 'MoveRoboticArm_Feedback'"
        self._feedback = value


class Metaclass_MoveRoboticArm(type):
    """Metaclass of action 'MoveRoboticArm'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.action.MoveRoboticArm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__move_robotic_arm

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from my_robot_interfaces.action import _move_robotic_arm
            if _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_SendGoal.__import_type_support__()
            if _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_GetResult.__import_type_support__()
            if _move_robotic_arm.Metaclass_MoveRoboticArm_FeedbackMessage._TYPE_SUPPORT is None:
                _move_robotic_arm.Metaclass_MoveRoboticArm_FeedbackMessage.__import_type_support__()


class MoveRoboticArm(metaclass=Metaclass_MoveRoboticArm):

    # The goal message defined in the action definition.
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Goal as Goal
    # The result message defined in the action definition.
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Result as Result
    # The feedback message defined in the action definition.
    from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from my_robot_interfaces.action._move_robotic_arm import MoveRoboticArm_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
