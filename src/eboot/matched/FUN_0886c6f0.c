/*
 * FUN_0886c6f0: clear three state bytes (0x2A, 0x6047A, 0x6047C).
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

void FUN_0886c6f0(void *rec)
{
    FIELD(rec, u8, 0x6047c) = 0;
    FIELD(rec, u8, 0x2a) = 0;
    FIELD(rec, u8, 0x6047a) = 0;
}
