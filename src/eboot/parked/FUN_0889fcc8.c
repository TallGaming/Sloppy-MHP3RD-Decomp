/*
 * FUN_0889fcc8: submit virtual object data and remember a short index.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual-call setup produces a longer, different frame.
 */

typedef unsigned char u8;
typedef short s16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef u32 (*Method0)(void *);
typedef u32 (*Method1)(void *, u32);
void FUN_088791f0(u32, u32, u32, u32, u32);

void FUN_0889fcc8(u32 a, u32 b, u8 *object, u32 index, u32 value)
{
    void **methods = *(void ***)object;
    u32 first = ((Method0)methods[0x11])(object);
    u32 second = ((Method1)methods[8])(object, index);

    FUN_088791f0(a, b, first, second, value);
    FIELD(object, s16, 0x18e) = index;
}
