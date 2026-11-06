/*
 * Purpose hypothesis: multiply a growable integer's packed 16-bit limbs by a
 * 16-bit factor, propagate the carry, and append a final carry limb.
 *
 * The record/header names are hypotheses.  Reference neighbors show that a
 * full record is replaced through FUN_0880d3d0, its header-and-limb payload is
 * copied from offset 12, then the old record is returned through FUN_0880d488.
 * The explicit half-word arithmetic is the recovered algorithm, not a
 * matching-only substitute for a wider integer type.
 */
typedef unsigned int u32;

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
void *FUN_0880c088(void *destination, const void *source, u32 size);
void FUN_0880d488(void *allocator, IntegerRecord *record);

IntegerRecord *FUN_0880ca04(void *allocator, IntegerRecord *record,
                            u32 factor, u32 carry)
{
    u32 index;
    u32 low_product;
    u32 high_product;

    for (index = 0; index < record->length; index++) {
        u32 limb = record->limbs[index];

        low_product = (limb & 0xffffU) * factor + carry;
        high_product = (limb >> 16) * factor + (low_product >> 16);
        record->limbs[index] = (high_product << 16) +
                               (low_product & 0xffffU);
        carry = high_product >> 16;
    }

    if (carry != 0) {
        if (record->length >= record->capacity) {
            IntegerRecord *expanded = FUN_0880d3d0(allocator,
                                                    record->pool_index + 1);
            FUN_0880c088((char *)expanded + 12, (char *)record + 12,
                          record->length * sizeof(u32) + 8);
            FUN_0880d488(allocator, record);
            record = expanded;
        }
        record->limbs[record->length] = carry;
        record->length += 1;
    }
    return record;
}
