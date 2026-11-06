/*
 * FUN_088ccf08: return the pointer at 0x3034, or the buffer at 0x3040 when it is null.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Rec_088ccf08
{
    u8 unknown_0000[0x3034];
    void *pointer_3034;
    u8 unknown_3038[8];
    u8 buffer_3040[4];
};

void *FUN_088ccf08(struct Rec_088ccf08 *rec)
{
    return rec->pointer_3034 ? rec->pointer_3034 : rec->buffer_3040;
}
