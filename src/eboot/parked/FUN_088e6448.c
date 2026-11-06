/*
 * FUN_088e6448: store a generated 16-bit value in the global record.
 *
 * Main EBOOT, G2 high-address slice. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_08aace80;
u16 FUN_088e62f0(void *context, int kind);

void FUN_088e6448(void *context)
{
    FIELD(D_08aace80, u16, 0x514a) = FUN_088e62f0(context, 2);
}
