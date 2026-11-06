/*
 * FUN_0883ac70: test whether word 0x7E4 of the global record differs from a value.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: a global pointer to a record at 0x09BF5250. */
struct Rec_09bf5250
{
    u8 unknown_000[0x350];
    s32 value_350;
    u8 unknown_354[0x7e4 - 0x354];
    s32 value_7e4;
};
extern struct Rec_09bf5250 *D_09bf5250;

s32 FUN_0883ac70(s32 value)
{
    return D_09bf5250->value_7e4 != value;
}
