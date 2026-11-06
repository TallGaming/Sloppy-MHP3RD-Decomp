/*
 * FUN_0882fc48: return the address of offset 0x24 in the global block at 0x08A29EE8.
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

/* Hypothesis: only the offset 0x24 is known. */
struct Block_08a29ee8
{
    u8 unknown_00[0x24];
    u8 part_24[1];
};
extern struct Block_08a29ee8 D_08a29ee8;

void *FUN_0882fc48(void)
{
    /* Match note: byte-pointer arithmetic keeps the +0x24 as a separate
     * addiu, as in the reference; a field access folds it into %lo. */
    return (u8 *)&D_08a29ee8 + 0x24;
}
