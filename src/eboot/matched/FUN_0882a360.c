/*
 * FUN_0882a360: test whether the state byte at 0xC8E is 3 or 4.
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

/* Hypothesis: a record with a state byte at offset 0xC8E. */
struct Rec_0882a360
{
    u8 unknown_000[0xc8e];
    u8 state_c8e;
};

s32 FUN_0882a360(struct Rec_0882a360 *rec)
{
    /* Match note: the 32-bit local makes GCC test the range without a
     * byte mask (andi 0xff), as the reference does. */
    u32 state = rec->state_c8e;

    return state == 3 || state == 4;
}
