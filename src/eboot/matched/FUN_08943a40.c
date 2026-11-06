/*
 * FUN_08943a40: return byte_0a of 24-byte entry INDEX in D_08a15ce0.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_08a15ce0
{
    u8 unknown_00[2];
    u8 byte_02;
    u8 unknown_03[3];
    u16 half_06;
    u8 unknown_08[2];
    s8 byte_0a;
    s8 byte_0b;
    u16 half_0c;
    u16 half_0e;
    u8 unknown_10[8];
};
extern const struct Entry_08a15ce0 D_08a15ce0[];

s8 FUN_08943a40(void *unused, u16 index)
{
    return D_08a15ce0[index].byte_0a;
}
