/*
 * FUN_088a0f24: initialize callback, child, and timing fields of an object.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: derived vtable lacks a symbol and four final stores differ in order.
 */

typedef unsigned char u8;
typedef unsigned int u32;
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern u8 D_0896ac98;

void FUN_088a0f24(u8 *object)
{
    int i;
    FIELD(object, void *, 0) = &D_0896ac98;
    FIELD(object, u32, 0x64) = 4;
    FIELD(object, u32, 0x54) = 0;
    FIELD(object, u32, 0x58) = 0;
    object[0x5f] = 0;
    object[0x5e] = 0;
    object[0x5d] = 0;
    object[0x5c] = 0;
    FIELD(object, u32, 0x280) = 0;
    FIELD(object, u32, 0x27c) = 0;
    for (i = 0; i < 2; i++) {
        FIELD(object, void *, 0x174 + i * 4) = 0;
    }
    FIELD(object, u32, 0x270) = 100;
    FIELD(object, u32, 0x268) = 12;
    FIELD(object, u32, 0x274) = 1;
    FIELD(object, u32, 0x26c) = 1;
}
