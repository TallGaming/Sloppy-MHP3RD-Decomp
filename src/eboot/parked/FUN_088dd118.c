/*
 * FUN_088dd118: return the last nonnegative value in a 48-byte-stride list.
 *
 * Main EBOOT, G2 high-address branch slice. The record layout is a hypothesis.
 */

typedef unsigned char u8;
typedef int s32;

s32 FUN_088dd118(void *context)
{
    s32 *entry = *(s32 **)((u8 *)context + 0xe0);
    s32 value = *entry;

    if (value < 0)
        return 0;
    for (;;) {
        entry += 12;
        if (*entry < 0)
            break;
        value = *entry;
    }
    return value;
}
