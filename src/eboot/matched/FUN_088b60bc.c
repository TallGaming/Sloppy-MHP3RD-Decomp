/*
 * FUN_088b60bc: call FUN_08855564 twice on D_08a31e84 with the parts at 0x27 and 0x2F of ITEM.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08a31e84; /* Hypothesis: type from the access only. */
void FUN_08855564(void *rec, void *part);

void FUN_088b60bc(void *unused, u8 *item)
{
    void *rec = D_08a31e84;

    FUN_08855564(rec, item + 0x27);
    FUN_08855564(rec, item + 0x2f);
}
