/*
 * FUN_08855800: remember the record in D_08a31e84, then call FUN_088f2098 on its part at 0x294.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08a31e84; /* Hypothesis: type from the access only. */
void FUN_088f2098(void *part);

void FUN_08855800(void *rec)
{
    D_08a31e84 = rec;
    FUN_088f2098((u8 *)rec + 0x294);
}
