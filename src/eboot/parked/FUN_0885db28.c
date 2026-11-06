/*
 * Purpose hypothesis: conditionally publish one of two status-byte values for
 * a selector record.  The leading context and signed record index are passed
 * to the verified selector predicate; a nonzero third lane selects zero
 * rather than bit six.
 *
 * This is only a field view.  No declared caller or callback/table binding
 * proves the target's owner-facing signature, its external return contract,
 * or the D_08aace80 record object's semantics.
 */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *context, s16 index);

void FUN_0885db28_field_view(void *context, s16 index, int mode)
{
    u8 *record = D_08aace80 + (index * 12);

    if (FUN_0885d808(context, index) != 0)
        record[2504] = mode == 0 ? 0x40 : 0;
}
