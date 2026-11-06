/* FUN_08959bf0: draw a partially filled colored rectangle.
 * Main EBOOT, attempt-high-01 241-512 byte batch 23. Node roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern void *D_09beb0bc;
u32 FUN_088fb754(void *, void *, void *);
void FUN_088fc270(void *, int, int, int, int, int, int, int, int);

void FUN_08959bf0(u8 *node, u8 *parent)
{
    u8 *style;
    u8 *transform;
    short x;
    short y;
    u32 alpha;
    float amount = *(float *)(node + 0x18);

    if (amount <= 0.0f) return;
    style = *(u8 **)(node + 4);
    transform = *(u8 **)(parent + 4);
    x = *(short *)(style + 0x38) + *(short *)(parent + 0x10);
    y = *(short *)(style + 0x3a) + *(short *)(parent + 0x12);
    if (transform == 0) alpha = style[0x37];
    else {
        x += *(short *)(transform + 0x18);
        y += *(short *)(transform + 0x1a);
        alpha = FUN_088fb754(D_09beb0bc, style + 0x34, transform + 0x14) >> 24;
    }
    FUN_088fc270(D_09beb0bc, x, y,
                 (short)((*(short *)(style + 0x24) - *(short *)(style + 0x20)) * amount),
                 (short)(*(short *)(style + 0x26) - *(short *)(style + 0x22)),
                 style[0x34], style[0x35], style[0x36], alpha);
}
