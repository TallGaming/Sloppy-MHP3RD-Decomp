/*
 * Purpose hypothesis: multiply two packed-base-65536 integer records into a
 * freshly allocated result and trim high zero words.
 *
 * The half-word multiply/accumulate loops, result clearing, and final trim
 * resemble classic bignum code, but this is algorithm lineage only: no public
 * whole-unit source or byte-identical library proof has been established.
 * Header field names are recovered-layout hypotheses.
 */
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct IntegerRecord IntegerRecord;
struct IntegerRecord {
    IntegerRecord *next;
    u32 pool_index;
    u32 capacity;
    u32 copy_header;
    u32 length;
    u32 limbs[1];
};

IntegerRecord *FUN_0880d3d0(void *allocator, u32 pool_index);

IntegerRecord *FUN_0880cb68(void *allocator, IntegerRecord *left,
                            IntegerRecord *right)
{
    IntegerRecord *longer = left;
    IntegerRecord *shorter = right;
    IntegerRecord *result;
    u32 long_count = left->length;
    u32 short_count = right->length;
    u32 result_count;
    u32 i;

    if (long_count < short_count) {
        longer = right;
        shorter = left;
        long_count = right->length;
        short_count = left->length;
    }
    result_count = long_count + short_count;
    result = FUN_0880d3d0(allocator,
                           longer->pool_index + (longer->capacity < result_count));
    for (i = 0; i < result_count; i++)
        result->limbs[i] = 0;

    for (i = 0; i < short_count * 2; i++) {
        u16 *result_digits = (u16 *)result->limbs;
        u16 *longer_digits = (u16 *)longer->limbs;
        u16 *shorter_digits = (u16 *)shorter->limbs;
        u32 multiplier = shorter_digits[i];
        u32 j;
        u32 carry = 0;

        for (j = 0; j < long_count * 2; j++) {
            u32 product = result_digits[i + j] +
                          longer_digits[j] * multiplier + carry;

            result_digits[i + j] = (u16)product;
            carry = product >> 16;
        }
        result_digits[i + long_count * 2] += (u16)carry;
    }
    result->length = result_count;
    while (result->length > 0 && result->limbs[result->length - 1] == 0)
        result->length -= 1;
    return result;
}
