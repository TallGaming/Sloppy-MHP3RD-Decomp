/*
 * FUN_088ce630: call FUN_088ce53c with the byte at 0x9A31 and 255.
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

void FUN_088ce53c(void *rec, u8 value, s32 limit);

void FUN_088ce630(void *rec)
{
    FUN_088ce53c(rec, FIELD(rec, u8, 0x9a31), 255);
}
