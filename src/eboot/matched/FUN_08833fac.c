/*
 * FUN_08833fac: fill an 8-byte buffer (FUN_0882e484) and pass it to FUN_08833ea0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void *FUN_088ebb10(void *dst, s32 value, u32 size); /* Hypothesis: memset-like */
void FUN_0882e484(void *dst);
void FUN_08833ea0(void *buffer);

void FUN_08833fac(void)
{
    u8 buffer[8];

    FUN_088ebb10(buffer, 0, 8);
    FUN_0882e484(buffer);
    FUN_08833ea0(buffer);
}
