/*
 * FUN_0891d510: return the self-relative block at word 0x2C of D_08a33e70, or null when the offset is 0.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: D_08a33e70 holds self-relative block offsets. */
struct Header_08a33e70
{
    s32 offset;
    s32 unknown_04[10];
    s32 offset_2c;
};
extern struct Header_08a33e70 D_08a33e70;

void *FUN_0891d510(void)
{
    s32 offset = D_08a33e70.offset_2c;

    return offset ? (u8 *)&D_08a33e70 + offset : 0;
}
