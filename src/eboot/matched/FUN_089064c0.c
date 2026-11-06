/*
 * FUN_089064c0: reduce a global-object query to a signed 8-bit value modulo 34.
 *
 * The global object type and query meaning are hypotheses.
 */
typedef signed char s8;
typedef unsigned int u32;

extern void *D_09bc1ed8;
extern u32 FUN_088e62f0(void *object, int selector);

s8 FUN_089064c0(void)
{
    return (s8)(FUN_088e62f0(D_09bc1ed8, 1) % 34);
}
