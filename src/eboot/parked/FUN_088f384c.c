/*
 * FUN_088f384c: mark the selected record byte and post message 29.
 *
 * Main EBOOT, G2 high-address slice. The record and message types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern u8 *D_08aace80;
extern void *D_09bb7bc0;

struct Msg_088f384c
{
    u8 kind;
    u8 unknown_1;
    u16 a;
    u16 b;
    u16 c;
};

void FUN_088c26bc(void *queue, s32 type, struct Msg_088f384c *msg, s32 flag);

void FUN_088f384c(u8 *record)
{
    struct Msg_088f384c msg;

    msg.a = 0;
    record[0x40 + D_08aace80[0x26]] = 1;
    msg.kind = 29;
    msg.b = 0;
    msg.c = 0;
    FUN_088c26bc(D_09bb7bc0, 6, &msg, 0);
}
