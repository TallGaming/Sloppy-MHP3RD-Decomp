/*
 * FUN_088e687c: configure and start the context timer, then clear its count.
 *
 * Main EBOOT, G2 high-address slice. The context layout and API signatures are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

u32 FUN_088e68d4();
void FUN_08960be0(u32 timer, u32 value, int unknown_2, int unknown_3,
                  void *callback, void *context);
void FUN_08960b18(u32 timer);

void FUN_088e687c(void *context, u32 value)
{
    FUN_08960be0(FIELD(context, u32, 0x1101594), value, 0, 0,
                 (void *)FUN_088e68d4, context);
    FUN_08960b18(FIELD(context, u32, 0x1101594));
    FIELD(context, u32, 0x1101598) = 0;
}
