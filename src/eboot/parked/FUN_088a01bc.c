/*
 * FUN_088a01bc: submit a large request when the object manager is ready.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size request form retains five operand-register differences.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_09bb7e78;
int FUN_088a0030(void);
u32 FUN_088cc364(void *, u32, u32, u32, u32, u32, int,
                 u32, u32, u32, u32, u32, int);

u32 FUN_088a01bc(u8 *object, u32 a, u32 b, u32 c, u32 d, u32 e,
                 u32 f, u32 g, u32 h)
{
    int ready = FUN_088a0030();
    u32 result = 0;

    if (ready != 0) {
        result = FUN_088cc364(D_09bb7e78, a, b, c, d, e, -1, f,
                             FIELD(object, u32, 0x278), g, g, h, 0);
    }
    return result;
}
