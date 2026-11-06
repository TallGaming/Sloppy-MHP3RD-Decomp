/*
 * FUN_08855164: call FUN_088f20b4 on the part at 0x294, then register two handlers with FUN_0887c3c4.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088554ec();
void FUN_08855524();
void FUN_088f20b4(void *part);
void FUN_0887c3c4(void (*function)(), void *arg);

void FUN_08855164(u8 *rec)
{
    FUN_088f20b4(rec + 0x294);
    FUN_0887c3c4(FUN_088554ec, rec);
    FUN_0887c3c4(FUN_08855524, rec);
}
