/*
 * FUN_0894cf1c: add a flag selected from half-word 0x4B1A and submit it globally.
 *
 * Main EBOOT, attempt-high-01 batch 4. The flags and global manager are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

void FUN_0885235c(void *manager, int index, u32 value, int a, int b);

void FUN_0894cf1c(u8 *record, u32 value)
{
    u16 flags = *(u16 *)(record + 0x4b1a);
    u32 result = value | 0x800;

    if ((flags & 0x80) == 0) {
        result = value;
        if ((flags & 0x20) != 0)
            result = value | 0x1000;
    }
    FUN_0885235c(*(void **)0x08a31df0, *(s8 *)(record + 0x0b), result, -1, 0);
}
