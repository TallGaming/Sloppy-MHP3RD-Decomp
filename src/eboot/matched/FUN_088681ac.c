/*
 * FUN_088681ac: call FUN_08867cc0 with slot 34 and entry INDEX of the 16-bit table D_089c78a0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u16 D_089c78a0[]; /* Hypothesis: type from the access only. */
void FUN_08867cc0(void *rec, s32 slot, u16 value);

void FUN_088681ac(void *rec, u16 index)
{
    FUN_08867cc0(rec, 34, D_089c78a0[index]);
}
