/*
 * FUN_088a02f8: return the u8 at offset 0x63 of a record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
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

u8 FUN_088a02f8(void *rec)
{
    return FIELD(rec, u8, 0x63);
}
