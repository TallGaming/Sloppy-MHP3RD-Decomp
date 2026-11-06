/*
 * FUN_0882cc30: update the parts at 0xF60 and 0x10A0, then call FUN_0882bc80.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0882cb40(void *rec, void *part);
void FUN_08875fbc(void *a, void *part);
void FUN_0882bc80(void *rec);

void FUN_0882cc30(u8 *rec)
{
    u8 *part = rec + 0xf60;

    FUN_0882cb40(rec, part);
    FUN_08875fbc(rec + 0x10a0, part);
    FUN_0882bc80(rec);
}
