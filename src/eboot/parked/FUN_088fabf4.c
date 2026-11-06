/*
 * FUN_088fabf4: add two records' signed coordinate offsets and pack the result.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The coordinate fields are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef short s16;

u32 FUN_088fabf4(u8 *first, u8 *second, s16 x, s16 y)
{
    y += *(s16 *)(first + 0x1a);
    x += *(s16 *)(first + 0x18);
    if (second != 0) {
        y += *(s16 *)(second + 0x1a);
        x += *(s16 *)(second + 0x18);
    }
    return (u32)(u16)x | (u32)(u16)y << 16;
}
