/*
 * FUN_08867c18: return the address of block INDEX, from a table of offsets at 0x8 relative to the record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void *FUN_08867c18(void *rec, s32 index)
{
    s32 *offsets = (s32 *)((u8 *)rec + 8);

    /* Match note: offset + base, the operand order of the reference addu. */
    return offsets[index] + (u8 *)rec;
}
