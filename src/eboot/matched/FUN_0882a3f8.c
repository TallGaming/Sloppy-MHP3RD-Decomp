/*
 * FUN_0882a3f8: return the state byte at 0xC8E.
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

u8 FUN_0882a3f8(struct Rec_0882a360 *rec)
{
    return rec->state_c8e;
}
