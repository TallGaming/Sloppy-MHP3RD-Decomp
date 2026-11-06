/*
 * FUN_0889f8bc: initialize the fields, transforms, and color slots of an object.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: one initialization constant lacks a symbol and field scheduling differs.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u32 D_08967384;
void FUN_088ebb10(void *, int, unsigned int);

void FUN_0889f8bc(u8 *object)
{
    int i;

    FIELD(object, u32, 4) = 3;
    FIELD(object, u32, 8) = 0;
    FIELD(object, u32, 0x0c) = 0;
    FUN_088ebb10(object + 0x70, 0, 0x10);
    FUN_088ebb10(object + 0x80, 0, 0x10);
    FUN_088ebb10(object + 0x90, 0, 0x10);
    FIELD(object, u16, 0x194) = 0;
    FIELD(object, u32, 0xa0) = D_08967384;
    FIELD(object, u32, 0xa8) = D_08967384;
    FIELD(object, u32, 0xa4) = D_08967384;
    FIELD(object, u16, 0x192) = 0;
    FIELD(object, u16, 0x190) = 0;
    FIELD(object, u16, 0x18e) = 0;
    for (i = 0; i < 3; i++) {
        object[0x108 + i * 4] = 0xff;
        object[0x109 + i * 4] = 0xff;
        object[0x10a + i * 4] = 0xff;
        object[0x10b + i * 4] = 0xff;
    }
    FIELD(object, u32, 0x268) = 0x60;
    object[0x114] = 0xff;
    FIELD(object, u32, 0x26c) = 1;
    FIELD(object, u16, 0x140) = 0;
    FIELD(object, u16, 0x142) = 0;
}
