/*
 * FUN_089499b8: post message 37 with the low bytes of two values.
 *
 * Main EBOOT, attempt-high-01 batch 3. The message layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_09bb7bc0;
struct Msg_089499b8 { u8 kind; u8 unknown_1; u16 a; u16 b; u16 c; };
void FUN_088c26bc(void *queue, int type, struct Msg_089499b8 *message, int flag);

void FUN_089499b8(void *unused, u16 first, u16 second)
{
    struct Msg_089499b8 message;

    message.kind = 0x25;
    message.a = 0;
    message.b = second & 0xff;
    message.c = first & 0xff;
    FUN_088c26bc(D_09bb7bc0, 6, &message, 0);
}
