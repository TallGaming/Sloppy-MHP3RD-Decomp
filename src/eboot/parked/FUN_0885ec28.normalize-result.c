/*
 * Purpose: normalize negative dispatch results when the caller requests it.
 * The core dispatcher ABI beyond the observed first four lanes is provisional.
 */
typedef unsigned char u8;
typedef signed short s16;

extern int FUN_0885e3a0(void *context, const void *object, u8 selector, u8 operation);

int FUN_0885ec28(void *context, const void *object, u8 selector, u8 operation,
                u8 normalize_negative)
{
    int result = FUN_0885e3a0(context, object, selector, operation);

    if (result >= 0)
        return result;
    if (!normalize_negative)
        return 0;
    return (s16)(0u - (unsigned)result);
}
