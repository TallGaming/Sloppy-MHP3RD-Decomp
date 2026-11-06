/*
 * FUN_0885691c: clear a word and two flag bytes of a record.
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

void FUN_0885691c(void *rec)
{
    FIELD(rec, u8, 0x188) = 0;
    FIELD(rec, u8, 0x189) = 0;
    FIELD(rec, s32, 0x18c) = 0;
}
