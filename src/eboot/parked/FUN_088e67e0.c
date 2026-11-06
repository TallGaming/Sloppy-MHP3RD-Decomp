/*
 * FUN_088e67e0: signal two context events and release its synchronization object.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The context layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08960c10(u32 object, int event);
void FUN_08960b28(u32 object);

void FUN_088e67e0(void *context)
{
    FUN_08960c10(FIELD(context, u32, 0x1101590), 0x30);
    if (FIELD(context, char, 0x11015a0) != 0)
        FUN_08960c10(FIELD(context, u32, 0x110159c), 0x31);
    FUN_08960b28(FIELD(context, u32, 0x110158c));
}
