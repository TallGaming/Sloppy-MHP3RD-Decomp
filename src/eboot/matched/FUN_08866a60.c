/*
 * FUN_08866a60: look up KIND with FUN_08866a48, then call FUN_0886675c.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u16 FUN_08866a48(void *rec, u8 kind);
void FUN_0886675c(void *rec, u8 kind, u16 value, s32 c, s32 d);

void FUN_08866a60(void *rec, u8 kind, s32 c)
{
    FUN_0886675c(rec, kind, FUN_08866a48(rec, kind), c, 0);
}
