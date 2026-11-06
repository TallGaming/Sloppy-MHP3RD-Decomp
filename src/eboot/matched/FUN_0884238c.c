/*
 * FUN_0884238c: return the signed byte at 0xF of the 20-byte entry chosen by byte 2 of an item.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_0896e2e0
{
    u8 unknown_00[15];
    s8 value_0f;
    u8 unknown_10[4];
};
extern const struct Entry_0896e2e0 D_0896e2e0[];

s8 FUN_0884238c(const u8 *item)
{
    return D_0896e2e0[item[2]].value_0f;
}
