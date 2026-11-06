/*
 * FUN_08867d40: call FUN_08867cc0 with slot 0.
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

void FUN_08867d40(void *rec, u16 value)
{
    FUN_08867cc0(rec, 0, value);
}
