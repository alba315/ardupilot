// MESSAGE POSITIONING_DATA PACKING

#define MAVLINK_MSG_ID_POSITIONING_DATA 227

typedef struct __mavlink_positioning_data_t
{
 uint32_t custom_mode; /*< A bitfield for use for autopilot-specific flags.*/
 uint32_t pulse_ID; /*< Un numero entero que identifique el mensaje que se esta mandando y llegue con el mismo a todos los ordenaodres con los que se comunique.*/
 uint8_t type; /*< Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)*/
 uint8_t autopilot; /*< Autopilot type / class. defined in MAV_AUTOPILOT ENUM*/
 uint8_t base_mode; /*< System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h*/
 char drone_ID[24]; /*< Identificador del dron, en nuestro caso se tratara del identificador de la controladora*/
} mavlink_positioning_data_t;

#define MAVLINK_MSG_ID_POSITIONING_DATA_LEN 35
#define MAVLINK_MSG_ID_227_LEN 35

#define MAVLINK_MSG_ID_POSITIONING_DATA_CRC 38
#define MAVLINK_MSG_ID_227_CRC 38

#define MAVLINK_MSG_POSITIONING_DATA_FIELD_DRONE_ID_LEN 24

#define MAVLINK_MESSAGE_INFO_POSITIONING_DATA { \
	"POSITIONING_DATA", \
	6, \
	{  { "custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_positioning_data_t, custom_mode) }, \
         { "pulse_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_positioning_data_t, pulse_ID) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_positioning_data_t, type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_positioning_data_t, autopilot) }, \
         { "base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_positioning_data_t, base_mode) }, \
         { "drone_ID", NULL, MAVLINK_TYPE_CHAR, 24, 11, offsetof(mavlink_positioning_data_t, drone_ID) }, \
         } \
}


/**
 * @brief Pack a positioning_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param type Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param base_mode System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h
 * @param custom_mode A bitfield for use for autopilot-specific flags.
 * @param drone_ID Identificador del dron, en nuestro caso se tratara del identificador de la controladora
 * @param pulse_ID Un numero entero que identifique el mensaje que se esta mandando y llegue con el mismo a todos los ordenaodres con los que se comunique.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_positioning_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, const char *drone_ID, uint32_t pulse_ID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITIONING_DATA_LEN];
	_mav_put_uint32_t(buf, 0, custom_mode);
	_mav_put_uint32_t(buf, 4, pulse_ID);
	_mav_put_uint8_t(buf, 8, type);
	_mav_put_uint8_t(buf, 9, autopilot);
	_mav_put_uint8_t(buf, 10, base_mode);
	_mav_put_char_array(buf, 11, drone_ID, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#else
	mavlink_positioning_data_t packet;
	packet.custom_mode = custom_mode;
	packet.pulse_ID = pulse_ID;
	packet.type = type;
	packet.autopilot = autopilot;
	packet.base_mode = base_mode;
	mav_array_memcpy(packet.drone_ID, drone_ID, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITIONING_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
}

/**
 * @brief Pack a positioning_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param type Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param base_mode System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h
 * @param custom_mode A bitfield for use for autopilot-specific flags.
 * @param drone_ID Identificador del dron, en nuestro caso se tratara del identificador de la controladora
 * @param pulse_ID Un numero entero que identifique el mensaje que se esta mandando y llegue con el mismo a todos los ordenaodres con los que se comunique.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_positioning_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t type,uint8_t autopilot,uint8_t base_mode,uint32_t custom_mode,const char *drone_ID,uint32_t pulse_ID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITIONING_DATA_LEN];
	_mav_put_uint32_t(buf, 0, custom_mode);
	_mav_put_uint32_t(buf, 4, pulse_ID);
	_mav_put_uint8_t(buf, 8, type);
	_mav_put_uint8_t(buf, 9, autopilot);
	_mav_put_uint8_t(buf, 10, base_mode);
	_mav_put_char_array(buf, 11, drone_ID, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#else
	mavlink_positioning_data_t packet;
	packet.custom_mode = custom_mode;
	packet.pulse_ID = pulse_ID;
	packet.type = type;
	packet.autopilot = autopilot;
	packet.base_mode = base_mode;
	mav_array_memcpy(packet.drone_ID, drone_ID, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITIONING_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
}

/**
 * @brief Encode a positioning_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param positioning_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_positioning_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_positioning_data_t* positioning_data)
{
	return mavlink_msg_positioning_data_pack(system_id, component_id, msg, positioning_data->type, positioning_data->autopilot, positioning_data->base_mode, positioning_data->custom_mode, positioning_data->drone_ID, positioning_data->pulse_ID);
}

/**
 * @brief Encode a positioning_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param positioning_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_positioning_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_positioning_data_t* positioning_data)
{
	return mavlink_msg_positioning_data_pack_chan(system_id, component_id, chan, msg, positioning_data->type, positioning_data->autopilot, positioning_data->base_mode, positioning_data->custom_mode, positioning_data->drone_ID, positioning_data->pulse_ID);
}

/**
 * @brief Send a positioning_data message
 * @param chan MAVLink channel to send the message
 *
 * @param type Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param base_mode System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h
 * @param custom_mode A bitfield for use for autopilot-specific flags.
 * @param drone_ID Identificador del dron, en nuestro caso se tratara del identificador de la controladora
 * @param pulse_ID Un numero entero que identifique el mensaje que se esta mandando y llegue con el mismo a todos los ordenaodres con los que se comunique.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_positioning_data_send(mavlink_channel_t chan, uint8_t type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, const char *drone_ID, uint32_t pulse_ID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITIONING_DATA_LEN];
	_mav_put_uint32_t(buf, 0, custom_mode);
	_mav_put_uint32_t(buf, 4, pulse_ID);
	_mav_put_uint8_t(buf, 8, type);
	_mav_put_uint8_t(buf, 9, autopilot);
	_mav_put_uint8_t(buf, 10, base_mode);
	_mav_put_char_array(buf, 11, drone_ID, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
#else
	mavlink_positioning_data_t packet;
	packet.custom_mode = custom_mode;
	packet.pulse_ID = pulse_ID;
	packet.type = type;
	packet.autopilot = autopilot;
	packet.base_mode = base_mode;
	mav_array_memcpy(packet.drone_ID, drone_ID, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, (const char *)&packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, (const char *)&packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POSITIONING_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_positioning_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, const char *drone_ID, uint32_t pulse_ID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, custom_mode);
	_mav_put_uint32_t(buf, 4, pulse_ID);
	_mav_put_uint8_t(buf, 8, type);
	_mav_put_uint8_t(buf, 9, autopilot);
	_mav_put_uint8_t(buf, 10, base_mode);
	_mav_put_char_array(buf, 11, drone_ID, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, buf, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
#else
	mavlink_positioning_data_t *packet = (mavlink_positioning_data_t *)msgbuf;
	packet->custom_mode = custom_mode;
	packet->pulse_ID = pulse_ID;
	packet->type = type;
	packet->autopilot = autopilot;
	packet->base_mode = base_mode;
	mav_array_memcpy(packet->drone_ID, drone_ID, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, (const char *)packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN, MAVLINK_MSG_ID_POSITIONING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITIONING_DATA, (const char *)packet, MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POSITIONING_DATA UNPACKING


/**
 * @brief Get field type from positioning_data message
 *
 * @return Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 */
static inline uint8_t mavlink_msg_positioning_data_get_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field autopilot from positioning_data message
 *
 * @return Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 */
static inline uint8_t mavlink_msg_positioning_data_get_autopilot(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field base_mode from positioning_data message
 *
 * @return System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h
 */
static inline uint8_t mavlink_msg_positioning_data_get_base_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field custom_mode from positioning_data message
 *
 * @return A bitfield for use for autopilot-specific flags.
 */
static inline uint32_t mavlink_msg_positioning_data_get_custom_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field drone_ID from positioning_data message
 *
 * @return Identificador del dron, en nuestro caso se tratara del identificador de la controladora
 */
static inline uint16_t mavlink_msg_positioning_data_get_drone_ID(const mavlink_message_t* msg, char *drone_ID)
{
	return _MAV_RETURN_char_array(msg, drone_ID, 24,  11);
}

/**
 * @brief Get field pulse_ID from positioning_data message
 *
 * @return Un numero entero que identifique el mensaje que se esta mandando y llegue con el mismo a todos los ordenaodres con los que se comunique.
 */
static inline uint32_t mavlink_msg_positioning_data_get_pulse_ID(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a positioning_data message into a struct
 *
 * @param msg The message to decode
 * @param positioning_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_positioning_data_decode(const mavlink_message_t* msg, mavlink_positioning_data_t* positioning_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	positioning_data->custom_mode = mavlink_msg_positioning_data_get_custom_mode(msg);
	positioning_data->pulse_ID = mavlink_msg_positioning_data_get_pulse_ID(msg);
	positioning_data->type = mavlink_msg_positioning_data_get_type(msg);
	positioning_data->autopilot = mavlink_msg_positioning_data_get_autopilot(msg);
	positioning_data->base_mode = mavlink_msg_positioning_data_get_base_mode(msg);
	mavlink_msg_positioning_data_get_drone_ID(msg, positioning_data->drone_ID);
#else
	memcpy(positioning_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POSITIONING_DATA_LEN);
#endif
}
