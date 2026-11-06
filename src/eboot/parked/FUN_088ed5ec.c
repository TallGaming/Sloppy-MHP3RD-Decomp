/*
 * FUN_088ed5ec: clamp a value to 0..127 and store it with a scaled form.
 *
 * Main EBOOT, G2 high-address branch slice. The record fields are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088ed5ec(void *record, int value)
{
    int clamped = 0;

    if (value >= 0) {
        if (value < 0x80)
            clamped = value;
        else
            clamped = 0x7f;
    }
    *(int *)((u8 *)record + 0x6c) = clamped;
    *(u32 *)((u8 *)record + 0x70) = clamped * 0x8000 / 0x7f;
}
