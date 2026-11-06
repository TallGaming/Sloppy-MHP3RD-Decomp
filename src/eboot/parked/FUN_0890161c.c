/*
 * FUN_0890161c: build a local callback descriptor and submit a seven-argument operation.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Descriptor layout and argument roles are hypotheses.
 */

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
extern void *D_09beb0bc;
struct Local_0890161c { void *table; u8 fifth; u8 fourth; int third; s8 dx; s8 dy; int stack; };
void FUN_0890112c(void *manager, u16 *record, int sixth, int zero, int x, int y, int flag);

void FUN_0890161c(void *unused, u16 *record, int third, u8 fourth, u8 fifth,
                  int sixth, s16 x, s16 y, int stack)
{
    struct Local_0890161c local;

    *(void **)(record + 0x10) = &local;
    local.dx = (char)record[2] - (char)record[0];
    local.dy = (char)record[3] - (char)record[1];
    local.table = (void *)0x0896b3c8;
    local.stack = stack;
    local.fifth = fifth;
    local.fourth = fourth;
    local.third = third;
    FUN_0890112c(D_09beb0bc, record, sixth, 0, x, y, 0);
}
