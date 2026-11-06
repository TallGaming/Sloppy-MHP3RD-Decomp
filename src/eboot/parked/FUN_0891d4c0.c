/*
 * FUN_0891d4c0: resolve an indexed offset through an optional global table.
 *
 * Main EBOOT, attempt-high-01 batch 2. The table layout and unused context are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u8 D_08a33e70;

void *FUN_0891d4c0(void *unused, u32 index)
{
    u8 *base = &D_08a33e70 + *(int *)0x08a33e90;
    int offset;

    if (base == 0)
        return 0;
    offset = *(int *)(base + (index & 0xff) * 0x10 + 0x0c);
    if (offset == 0)
        return 0;
    return &D_08a33e70 + offset;
}
