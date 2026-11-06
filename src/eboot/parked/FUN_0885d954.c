/*
 * Purpose hypothesis: when the selector predicate accepts a signed record
 * index, replace the low nibble of that record's status byte with four.
 *
 * This is a field view, not a whole callable candidate: no declared caller
 * establishes the owner of the leading context lane or the target's external
 * contract.  The byte result and the two forwarded lanes are observed only
 * through artificial target runs.
 */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *context, s16 index);

u8 FUN_0885d954_field_view(void *context, s16 index)
{
    u8 *record = D_08aace80 + (index * 12);

    if (FUN_0885d808(context, index) == 0)
        return 0;

    record[2504] = (record[2504] & 0xf0) | 4;
    return record[2504];
}
