/*
 * FUN_088dbb14: store a 16-bit setting in a 36-byte entry and apply it to the object.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef short s16;

void FUN_088ed5ec(void *object, int value);

void FUN_088dbb14(u8 *entries, int index, int value)
{
    u8 *entry = entries + index * 0x24;

    *(s16 *)(entry + 0x0c) = value;
    FUN_088ed5ec(*(void **)entry, value);
}
