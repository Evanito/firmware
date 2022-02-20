/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_DEVICEONLY_PB_H_INCLUDED
#define PB_DEVICEONLY_PB_H_INCLUDED
#include <pb.h>
#include "channel.pb.h"
#include "mesh.pb.h"
#include "radioconfig.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ChannelFile {
    pb_size_t channels_count;
    Channel channels[8];
} ChannelFile;

typedef struct _DeviceState {
    bool has_my_node;
    MyNodeInfo my_node;
    bool has_owner;
    User owner;
    pb_size_t node_db_count;
    NodeInfo node_db[32];
    pb_size_t receive_queue_count;
    MeshPacket receive_queue[1];
    bool has_group_info;
    GroupInfo group_info;
    bool has_rx_text_message;
    MeshPacket rx_text_message;
    uint32_t version;
    bool no_save;
    bool did_gps_reset;
    char canned_message_plugin_message_part1[200];
    char canned_message_plugin_message_part2[200];
    char canned_message_plugin_message_part3[200];
    char canned_message_plugin_message_part4[200];
    char canned_message_plugin_message_part5[200];
} DeviceState;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define DeviceState_init_default                 {false, MyNodeInfo_init_default, false, User_init_default, 0, {NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default, NodeInfo_init_default}, 0, {MeshPacket_init_default}, false, GroupInfo_init_default, false, MeshPacket_init_default, 0, 0, 0, "", "", "", "", ""}
#define ChannelFile_init_default                 {0, {Channel_init_default, Channel_init_default, Channel_init_default, Channel_init_default, Channel_init_default, Channel_init_default, Channel_init_default, Channel_init_default}}
#define DeviceState_init_zero                    {false, MyNodeInfo_init_zero, false, User_init_zero, 0, {NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero, NodeInfo_init_zero}, 0, {MeshPacket_init_zero}, false, GroupInfo_init_zero, false, MeshPacket_init_zero, 0, 0, 0, "", "", "", "", ""}
#define ChannelFile_init_zero                    {0, {Channel_init_zero, Channel_init_zero, Channel_init_zero, Channel_init_zero, Channel_init_zero, Channel_init_zero, Channel_init_zero, Channel_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define ChannelFile_channels_tag                 1
#define DeviceState_my_node_tag                  2
#define DeviceState_owner_tag                    3
#define DeviceState_node_db_tag                  4
#define DeviceState_receive_queue_tag            5
#define DeviceState_group_info_tag               6
#define DeviceState_rx_text_message_tag          7
#define DeviceState_version_tag                  8
#define DeviceState_no_save_tag                  9
#define DeviceState_did_gps_reset_tag            11
#define DeviceState_canned_message_plugin_message_part1_tag 13
#define DeviceState_canned_message_plugin_message_part2_tag 14
#define DeviceState_canned_message_plugin_message_part3_tag 15
#define DeviceState_canned_message_plugin_message_part4_tag 16
#define DeviceState_canned_message_plugin_message_part5_tag 17

/* Struct field encoding specification for nanopb */
#define DeviceState_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  my_node,           2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  owner,             3) \
X(a, STATIC,   REPEATED, MESSAGE,  node_db,           4) \
X(a, STATIC,   REPEATED, MESSAGE,  receive_queue,     5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  group_info,        6) \
X(a, STATIC,   OPTIONAL, MESSAGE,  rx_text_message,   7) \
X(a, STATIC,   SINGULAR, UINT32,   version,           8) \
X(a, STATIC,   SINGULAR, BOOL,     no_save,           9) \
X(a, STATIC,   SINGULAR, BOOL,     did_gps_reset,    11) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_plugin_message_part1,  13) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_plugin_message_part2,  14) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_plugin_message_part3,  15) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_plugin_message_part4,  16) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_plugin_message_part5,  17)
#define DeviceState_CALLBACK NULL
#define DeviceState_DEFAULT NULL
#define DeviceState_my_node_MSGTYPE MyNodeInfo
#define DeviceState_owner_MSGTYPE User
#define DeviceState_node_db_MSGTYPE NodeInfo
#define DeviceState_receive_queue_MSGTYPE MeshPacket
#define DeviceState_group_info_MSGTYPE GroupInfo
#define DeviceState_rx_text_message_MSGTYPE MeshPacket

#define ChannelFile_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  channels,          1)
#define ChannelFile_CALLBACK NULL
#define ChannelFile_DEFAULT NULL
#define ChannelFile_channels_MSGTYPE Channel

extern const pb_msgdesc_t DeviceState_msg;
extern const pb_msgdesc_t ChannelFile_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define DeviceState_fields &DeviceState_msg
#define ChannelFile_fields &ChannelFile_msg

/* Maximum encoded size of messages (where known) */
#define DeviceState_size                         11174
#define ChannelFile_size                         832

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
