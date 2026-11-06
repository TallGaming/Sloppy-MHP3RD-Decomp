/*
 * FUN_08887558: select KIND (FUN_088874dc), copy into the part at 0x1BC0 (FUN_088851dc), return the part.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088874dc(void *rec, u8 kind);
void FUN_088851dc(void *a, void *b, s32 c);

void *FUN_08887558(u8 *rec, u8 kind, s32 c)
{
    u8 *part = rec + 0x1bc0;

    FUN_088874dc(rec, kind);
    FUN_088851dc(rec + 0x24f0, part, c);
    return part;
}
