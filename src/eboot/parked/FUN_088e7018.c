/*
 * FUN_088e7018: clamp a signed mode to 0..6 and store it at offset 0x12F.
 *
 * Main EBOOT, G2 high-address branch slice. The record and mode roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

void FUN_088e7018(void *record, int mode)
{
    if (mode < 0)
        mode = 0;
    else if (mode > 6)
        mode = 6;
    *(s8 *)((u8 *)record + 0x12f) = (s8)mode;
}
