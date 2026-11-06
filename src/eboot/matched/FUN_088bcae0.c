/*
 * FUN_088bcae0: return the address of the block that D_08a33e70 points to (self-relative).
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: D_08a33e70 holds the offset of a block relative to itself. */
struct Header_08a33e70
{
    s32 offset;
};
extern struct Header_08a33e70 D_08a33e70;

void *FUN_088bcae0(void)
{
    /* Match note: offset + base, the operand order of the reference addu. */
    return D_08a33e70.offset + (u8 *)&D_08a33e70;
}
