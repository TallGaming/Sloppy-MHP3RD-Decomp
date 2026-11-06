/*
 * FUN_0889fb2c: gather three virtual values and update an embedded transform.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual-call ordering and result-register allocation differ.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef u32 (*Method0)(void *);
void FUN_08879880(u32);
void FUN_0889eb30(u32, u32, u32, void *);

void FUN_0889fb2c(u8 *object)
{
    void **methods = *(void ***)object;
    u32 first = ((Method0)methods[0x11])(object);
    u32 a;
    u32 b;
    u32 c;

    FUN_08879880(first);
    a = ((Method0)methods[0x13])(object);
    b = ((Method0)methods[0x11])(object);
    c = ((Method0)methods[0x12])(object);
    FUN_0889eb30(a, b, c, object + 0x10);
}
