/*
 * FUN_0890000c: submit one record and toggle a global mode around the submission.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Names, record layout and call roles are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

extern void *D_09beb0bc;
int FUN_088fac54();
void FUN_088fa038(void *manager, int enabled);
void FUN_088ff8f0(void *manager, void *subrecord, int value, int field,
                  int x, int y, int a, int b, int c, int d);

void FUN_0890000c(u8 *record, int value, s16 x, s16 y)
{
    if (FUN_088fac54() != 0)
        FUN_088fa038(D_09beb0bc, 1);
    FUN_088ff8f0(D_09beb0bc, record + 0x20, value,
                 *(int *)(record + 0x4c), x, y, 0, -1, -1, 0);
    if (FUN_088fac54(record) != 0)
        FUN_088fa038(D_09beb0bc, 0);
}
