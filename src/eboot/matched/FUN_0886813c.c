/*
 * FUN_0886813c: call FUN_08867cc0 with slot 30 and entry INDEX of the 16-bit table D_089c7bf8.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u16 D_089c7bf8[]; /* Hypothesis: type from the access only. */
void FUN_08867cc0(void *rec, s32 slot, u16 value);

void FUN_0886813c(void *rec, u16 index)
{
    FUN_08867cc0(rec, 30, D_089c7bf8[index]);
}
