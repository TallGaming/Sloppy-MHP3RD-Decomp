/*
 * FUN_088a1540: initialize object-manager arrays, buffers, and status fields.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size initialization retains thirteen loop/store differences.
 */

typedef unsigned char u8;
typedef unsigned int u32;
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern u8 *D_09bb7a5c;
void FUN_088a0ff4(void *);
void FUN_088ebb10(void *, int, u32);

void FUN_088a1540(u8 *object)
{
    int i;
    FIELD(object, u32, 0x4e4) = 0;
    FIELD(object, u32, 0x4e8) = 0;
    D_09bb7a5c = object;
    FUN_088a0ff4(object);
    for (i = 0; i < 16; i++) {
        FIELD(object, u32, 0x28 + i * 4) = 0;
        FIELD(object, u32, 0x68 + i * 4) = 0;
    }
    FIELD(object, u32, 0xa8) = 0;
    FUN_088ebb10(object + 0x290, 0, 0xd8);
    FUN_088ebb10(object + 0x368, 0, 0xd8);
    FUN_088ebb10(object + 0x440, 0, 0x36);
    FUN_088ebb10(object + 0x476, 0xff, 0x6c);
    object[0xac] = 0;
    FUN_088ebb10(object + 0xb0, 0, 0x1b0);
    FIELD(object, u32, 0x280) = 0;
    for (i = 0; i < 8; i++) {
        FIELD(object, u32, 0x260 + i * 4) = 0;
    }
}
