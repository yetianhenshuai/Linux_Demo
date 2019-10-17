/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Sun Sep 29 17:28:39 2019. */

#ifndef PB_SIMPLE_PB_H_INCLUDED
#define PB_SIMPLE_PB_H_INCLUDED
#include "pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MsgType {
    MsgType_simpleMessage = 0,
    MsgType_student = 1
} MsgType;
#define _MsgType_MIN MsgType_simpleMessage
#define _MsgType_MAX MsgType_student
#define _MsgType_ARRAYSIZE ((MsgType)(MsgType_student+1))

/* Struct definitions */
typedef struct _SimpleMessage {
    int32_t lucky_number;
/* @@protoc_insertion_point(struct:SimpleMessage) */
} SimpleMessage;

typedef struct _Student {
    bool has_stu_number;
    int32_t stu_number;
    bool has_name;
    int32_t name;
/* @@protoc_insertion_point(struct:Student) */
} Student;

/* Default values for struct fields */

/* Initializer values for message structs */
#define SimpleMessage_init_default               {0}
#define Student_init_default                     {false, 0, false, 0}
#define SimpleMessage_init_zero                  {0}
#define Student_init_zero                        {false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define SimpleMessage_lucky_number_tag           1
#define Student_stu_number_tag                   2
#define Student_name_tag                         3

/* Struct field encoding specification for nanopb */
extern const pb_field_t SimpleMessage_fields[2];
extern const pb_field_t Student_fields[3];

/* Maximum encoded size of messages (where known) */
#define SimpleMessage_size                       11
#define Student_size                             22

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SIMPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
