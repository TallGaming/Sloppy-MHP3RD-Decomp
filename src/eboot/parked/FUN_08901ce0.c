/*
 * FUN_08901ce0: prepare a table-selected local callback descriptor and submit it.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Table, descriptor and argument roles are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8; typedef short s16;
struct Local_08901ce0 { void *outer_table; void *inner_table; int value; u8 dx; u8 dy; u8 mode; s16 sx; s16 sy; };
void FUN_08900fc0(void *manager, void *entry, int a, int b, int c);

void FUN_08901ce0(void *manager, int index, int value, u8 mode)
{
    void *entry = (void *)(0x089f6ed4 + index * 0x10);
    s16 *source = *(s16 **)(0x089f6edc + index * 0x10);
    struct Local_08901ce0 local;

    local.sx = source[2] - source[0]; local.sy = source[3] - source[1];
    local.inner_table = (void *)0x0896b380; local.outer_table = (void *)0x0896b428;
    local.dx = local.sx; local.dy = local.sy; local.value = value; local.mode = mode;
    if (value == 0) {
        *(void **)(source + 0x10) = &local.outer_table;
        FUN_08900fc0(manager, entry, 0, 0, 0); return;
    }
    *(void **)(source + 0x10) = &local.inner_table;
    FUN_08900fc0(manager, entry, 0, 0, 0);
}
