/*
 * FUN_08884748: remember a buffer in D_08ab156c and clear its first 144 bytes (FUN_088ebb10).
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08ab156c; /* Hypothesis: type from the access only. */
void *FUN_088ebb10(void *dst, s32 value, u32 size); /* Hypothesis: memset-like */

void FUN_08884748(void *buffer)
{
    D_08ab156c = buffer;
    FUN_088ebb10(buffer, 0, 144);
}
