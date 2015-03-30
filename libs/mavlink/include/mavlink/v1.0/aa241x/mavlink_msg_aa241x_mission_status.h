// MESSAGE AA241X_MISSION_STATUS PACKING

#define MAVLINK_MSG_ID_AA241X_MISSION_STATUS 151

typedef struct __mavlink_aa241x_mission_status_t
{
 float score; ///< Mission score (range from 0 to 100)
 float mission_time; ///< Mission time in minutes
 uint8_t can_start; ///< Whether or not mission is allowed to start: 0 = violation, 1 = start allowed
 uint8_t in_mission; ///< Mission state: 0 = not in mission, 1 = in mission
} mavlink_aa241x_mission_status_t;

#define MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN 10
#define MAVLINK_MSG_ID_151_LEN 10

#define MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC 94
#define MAVLINK_MSG_ID_151_CRC 94



#define MAVLINK_MESSAGE_INFO_AA241X_MISSION_STATUS { \
	"AA241X_MISSION_STATUS", \
	4, \
	{  { "score", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aa241x_mission_status_t, score) }, \
         { "mission_time", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aa241x_mission_status_t, mission_time) }, \
         { "can_start", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_aa241x_mission_status_t, can_start) }, \
         { "in_mission", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_aa241x_mission_status_t, in_mission) }, \
         } \
}


/**
 * @brief Pack a aa241x_mission_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param can_start Whether or not mission is allowed to start: 0 = violation, 1 = start allowed
 * @param in_mission Mission state: 0 = not in mission, 1 = in mission
 * @param score Mission score (range from 0 to 100)
 * @param mission_time Mission time in minutes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_mission_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t can_start, uint8_t in_mission, float score, float mission_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN];
	_mav_put_float(buf, 0, score);
	_mav_put_float(buf, 4, mission_time);
	_mav_put_uint8_t(buf, 8, can_start);
	_mav_put_uint8_t(buf, 9, in_mission);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#else
	mavlink_aa241x_mission_status_t packet;
	packet.score = score;
	packet.mission_time = mission_time;
	packet.can_start = can_start;
	packet.in_mission = in_mission;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AA241X_MISSION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a aa241x_mission_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param can_start Whether or not mission is allowed to start: 0 = violation, 1 = start allowed
 * @param in_mission Mission state: 0 = not in mission, 1 = in mission
 * @param score Mission score (range from 0 to 100)
 * @param mission_time Mission time in minutes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_mission_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t can_start,uint8_t in_mission,float score,float mission_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN];
	_mav_put_float(buf, 0, score);
	_mav_put_float(buf, 4, mission_time);
	_mav_put_uint8_t(buf, 8, can_start);
	_mav_put_uint8_t(buf, 9, in_mission);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#else
	mavlink_aa241x_mission_status_t packet;
	packet.score = score;
	packet.mission_time = mission_time;
	packet.can_start = can_start;
	packet.in_mission = in_mission;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AA241X_MISSION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
}

/**
 * @brief Encode a aa241x_mission_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_mission_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_mission_status_t* aa241x_mission_status)
{
	return mavlink_msg_aa241x_mission_status_pack(system_id, component_id, msg, aa241x_mission_status->can_start, aa241x_mission_status->in_mission, aa241x_mission_status->score, aa241x_mission_status->mission_time);
}

/**
 * @brief Encode a aa241x_mission_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_mission_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_mission_status_t* aa241x_mission_status)
{
	return mavlink_msg_aa241x_mission_status_pack_chan(system_id, component_id, chan, msg, aa241x_mission_status->can_start, aa241x_mission_status->in_mission, aa241x_mission_status->score, aa241x_mission_status->mission_time);
}

/**
 * @brief Send a aa241x_mission_status message
 * @param chan MAVLink channel to send the message
 *
 * @param can_start Whether or not mission is allowed to start: 0 = violation, 1 = start allowed
 * @param in_mission Mission state: 0 = not in mission, 1 = in mission
 * @param score Mission score (range from 0 to 100)
 * @param mission_time Mission time in minutes
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_mission_status_send(mavlink_channel_t chan, uint8_t can_start, uint8_t in_mission, float score, float mission_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN];
	_mav_put_float(buf, 0, score);
	_mav_put_float(buf, 4, mission_time);
	_mav_put_uint8_t(buf, 8, can_start);
	_mav_put_uint8_t(buf, 9, in_mission);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
#else
	mavlink_aa241x_mission_status_t packet;
	packet.score = score;
	packet.mission_time = mission_time;
	packet.can_start = can_start;
	packet.in_mission = in_mission;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_mission_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t can_start, uint8_t in_mission, float score, float mission_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, score);
	_mav_put_float(buf, 4, mission_time);
	_mav_put_uint8_t(buf, 8, can_start);
	_mav_put_uint8_t(buf, 9, in_mission);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, buf, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
#else
	mavlink_aa241x_mission_status_t *packet = (mavlink_aa241x_mission_status_t *)msgbuf;
	packet->score = score;
	packet->mission_time = mission_time;
	packet->can_start = can_start;
	packet->in_mission = in_mission;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, (const char *)packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_MISSION_STATUS, (const char *)packet, MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE AA241X_MISSION_STATUS UNPACKING


/**
 * @brief Get field can_start from aa241x_mission_status message
 *
 * @return Whether or not mission is allowed to start: 0 = violation, 1 = start allowed
 */
static inline uint8_t mavlink_msg_aa241x_mission_status_get_can_start(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field in_mission from aa241x_mission_status message
 *
 * @return Mission state: 0 = not in mission, 1 = in mission
 */
static inline uint8_t mavlink_msg_aa241x_mission_status_get_in_mission(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field score from aa241x_mission_status message
 *
 * @return Mission score (range from 0 to 100)
 */
static inline float mavlink_msg_aa241x_mission_status_get_score(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field mission_time from aa241x_mission_status message
 *
 * @return Mission time in minutes
 */
static inline float mavlink_msg_aa241x_mission_status_get_mission_time(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a aa241x_mission_status message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_mission_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_mission_status_decode(const mavlink_message_t* msg, mavlink_aa241x_mission_status_t* aa241x_mission_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	aa241x_mission_status->score = mavlink_msg_aa241x_mission_status_get_score(msg);
	aa241x_mission_status->mission_time = mavlink_msg_aa241x_mission_status_get_mission_time(msg);
	aa241x_mission_status->can_start = mavlink_msg_aa241x_mission_status_get_can_start(msg);
	aa241x_mission_status->in_mission = mavlink_msg_aa241x_mission_status_get_in_mission(msg);
#else
	memcpy(aa241x_mission_status, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_AA241X_MISSION_STATUS_LEN);
#endif
}
