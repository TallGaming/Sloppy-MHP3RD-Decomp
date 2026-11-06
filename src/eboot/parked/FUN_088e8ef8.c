/*
 * FUN_088e8ef8: return the low byte, halved when MODE is nonzero.
 *
 * Main EBOOT, G2 high-address branch slice. Parameter roles are hypotheses.
 */

typedef unsigned int u32;

u32 FUN_088e8ef8(void *unused_0, void *unused_1, int mode, u32 value)
{
    u32 result = value & 0xff;

    if (mode != 0)
        result >>= 1;
    return result;
}
