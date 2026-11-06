/*
 * FUN_088bd918: post message 30 to the queue D_09bb7bc0.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bb7bc0; /* Hypothesis: type from the access only. */
struct Msg_088bd888
{
    u8 kind;
    u8 unknown_1;
    u16 a;
    u16 b;
    u16 c;
};
void FUN_088c26bc(void *queue, s32 type, struct Msg_088bd888 *msg, s32 flag);

void FUN_088bd918(void)
{
    struct Msg_088bd888 msg;

    msg.kind = 30;
    msg.a = 0;
    msg.b = 0;
    msg.c = 0;
    FUN_088c26bc(D_09bb7bc0, 6, &msg, 0);
}
