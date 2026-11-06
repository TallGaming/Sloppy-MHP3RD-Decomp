/*
 * FUN_08901c48: build a local callback descriptor from two records and submit it.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Descriptor layout and argument roles are hypotheses.
 */

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
extern void *D_09beb0bc;
struct Local_08901c48 { void *table; int fourth; s8 dx; s8 dy; u8 fifth; int stack; u8 zero; s8 source_dx; };
void FUN_0890112c(void *manager, u16 *record, int sixth, int zero, int x, int y, int flag);

void FUN_08901c48(void *unused, u16 *record, u16 *source, int fourth,
                  u8 fifth, int sixth, s16 x, s16 y, int stack)
{
    struct Local_08901c48 local;

    *(void **)(record + 0x10) = &local;
    local.source_dx = (char)source[2] - (char)source[0];
    local.dy = (char)record[3] - (char)record[1];
    local.dx = (char)record[2] - (char)record[0];
    local.stack = stack;
    local.table = (void *)0x0896b3e0;
    local.zero = 0;
    local.fourth = fourth;
    local.fifth = fifth;
    FUN_0890112c(D_09beb0bc, record, sixth, 0, x, y, 0);
}
