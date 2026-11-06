/*
 * FUN_088f1f7c: choose one of three values and store the index at offset 0x0C.
 *
 * Main EBOOT, G2 high-address slice. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_09bc1ed8;
u32 FUN_088e62f0(void *context, int kind);

void FUN_088f1f7c(void *record)
{
    FIELD(record, u32, 0x0c) = FUN_088e62f0(D_09bc1ed8, 1) % 3;
}
