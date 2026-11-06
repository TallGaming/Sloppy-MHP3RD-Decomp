typedef unsigned int u32;

/*
 * Purpose hypothesis: select one of two indexed 36-byte table records.
 *
 * Parked after direct pointer, integer-address, and reversed-branch forms.
 * The closest form matches the argument masks, tests, and index arithmetic,
 * but GCC places the branch bodies differently and materializes each base as
 * lui/ori of its final address; the reference uses lui/addiu from 0x089a0000.
 * Revisit when a readable table-base expression produces that address form.
 */
u32 FUN_0885f6a8(void *unused, u32 category, u32 index)
{
    category &= 0xff;
    index &= 0xffff;

    if (category >= 5) {
        if (category >= 18) {
            return 0;
        }
        return 0x089a0000 - 11136 + (index * 36);
    }
    return 0x089a0000 - 408 + (index * 36);
}
