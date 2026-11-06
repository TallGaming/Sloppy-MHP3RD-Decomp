/*
 * FUN_088f50cc: post message 33 with the low byte of VALUE.
 *
 * Main EBOOT, G2 high-address slice. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern void *D_09bb7bc0;

struct Msg_088f50cc
{
    u8 kind;
    u8 unknown_1;
    u16 a;
    u16 b;
    u16 c;
    u16 d;
};

void FUN_088c26bc(void *queue, s32 type, struct Msg_088f50cc *msg, s32 flag);

void FUN_088f50cc(void *unused, u16 value)
{
    struct Msg_088f50cc msg;

    msg.kind = 33;
    msg.a = 0;
    msg.b = value & 0xff;
    msg.c = 0;
    msg.d = 0;
    FUN_088c26bc(D_09bb7bc0, 6, &msg, 0);
}
