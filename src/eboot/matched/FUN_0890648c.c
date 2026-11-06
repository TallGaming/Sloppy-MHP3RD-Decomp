/*
 * FUN_0890648c: query a global object and map its low result bit to 2 or 3.
 *
 * The global object type and query meaning are hypotheses.
 */
typedef unsigned int u32;

extern void *D_09bc1ed8;
extern u32 FUN_088e62f0(void *object, int selector);

u32 FUN_0890648c(void)
{
    return (FUN_088e62f0(D_09bc1ed8, 1) & 1) + 2;
}
