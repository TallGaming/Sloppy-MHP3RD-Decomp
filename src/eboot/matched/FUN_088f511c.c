/*
 * FUN_088f511c: raise the signed byte at 0x23C to the 16-bit value at offset 4 of SRC.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* The record layout is unknown: FIELD reads or writes a member of the given
 * type at a byte offset. Offsets and widths come from the reference code. */
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088f511c(void *rec, void *src)
{
    s16 value = FIELD(src, s16, 4);

    if (FIELD(rec, s8, 0x23c) < value)
        FIELD(rec, s8, 0x23c) = value;
}
