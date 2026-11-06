/*
 * FUN_088e68d4: service a timer callback and stop it after the second callback.
 *
 * Main EBOOT, G2 high-address slice. The callback signature and context layout are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_09bc1ed8;
void FUN_088e67e0(void *manager);

u32 FUN_088e68d4(void *unused_0, void *unused_1, void *unused_2, void *context)
{
    u32 count;
    u32 result;

    FUN_088e67e0(D_09bc1ed8);
    result = 0x411a;
    count = FIELD(context, u32, 0x1101598) + 1;
    FIELD(context, u32, 0x1101598) = count;
    if (count > 1)
        result = 0;
    return result;
}
