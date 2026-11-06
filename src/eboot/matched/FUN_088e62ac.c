/*
 * FUN_088e62ac: store a byte value as two 16-bit fields (0x10FA344, 0x10FA346).
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
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

void FUN_088e62ac(void *rec, u8 value)
{
    FIELD(rec, u16, 0x10fa344) = value;
    FIELD(rec, u16, 0x10fa346) = value;
}
