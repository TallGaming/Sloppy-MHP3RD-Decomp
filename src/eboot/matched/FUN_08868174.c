/*
 * FUN_08868174: call FUN_08867cc0 with slot 32 and entry INDEX of the 16-bit table D_089c7a4c.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u16 D_089c7a4c[]; /* Hypothesis: type from the access only. */
void FUN_08867cc0(void *rec, s32 slot, u16 value);

void FUN_08868174(void *rec, u16 index)
{
    FUN_08867cc0(rec, 32, D_089c7a4c[index]);
}
