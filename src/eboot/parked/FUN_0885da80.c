/* Purpose: update a selected control-bit pattern in one indexed audio record. */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *context, s16 index);

int FUN_0885da80(void *context, s16 index, int enabled)
{
    u8 *field = D_08aace80 + (index * 12) + 2504;

    if (!FUN_0885d808(context, index)) {
        return 0;
    }

    if (enabled) {
        return *field = *field & 0xdf;
    }

    return *field = (*field & 0x4f) | 0x20;
}
