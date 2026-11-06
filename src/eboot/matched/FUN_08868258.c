/*
 * FUN_08868258: call FUN_08867cc0 with slot 41.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08867cc0(void *rec, s32 slot, u16 value);

void FUN_08868258(void *rec, u16 value)
{
    FUN_08867cc0(rec, 41, value);
}
