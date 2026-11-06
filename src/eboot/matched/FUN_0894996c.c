/*
 * FUN_0894996c: post message 36 with one value and the low byte of another.
 *
 * Main EBOOT, attempt-high-01 batch 3. The message layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_09bb7bc0;
struct Msg_0894996c { u8 kind; u8 unknown_1; u16 a; u16 b; u16 c; };
void FUN_088c26bc(void *queue, int type, struct Msg_0894996c *message, int flag);

void FUN_0894996c(void *unused, u16 value, u16 low)
{
    struct Msg_0894996c message;

    message.kind = 0x24;
    message.a = 0;
    message.b = low & 0xff;
    message.c = value;
    FUN_088c26bc(D_09bb7bc0, 6, &message, 0);
}
