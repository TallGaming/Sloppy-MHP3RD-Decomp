/*
 * Purpose: retain the supported selector-validation surface of FUN_0885c898.
 *
 * This is an uncompiled field view, not a whole-function candidate.  The
 * direct caller supplies a context, an object whose selector is byte +1, and
 * two further computed lanes.  The target resolves only selectors 9, 11, and
 * 15 through FUN_0885be6c, then takes additional paths dependent on the
 * resolved entry.  The ownership and exact meaning of the last two lanes and
 * the resolved entry flags are not yet independently proved.
 */
typedef unsigned char u8;
typedef int s32;

struct SelectorInput0885c898 {
    u8 unknown_00;
    u8 selector;
};

/* Hypothesis only: target returns zero for accepted selector families. */
s32 FUN_0885c898_field_view(void *context,
                            const struct SelectorInput0885c898 *input,
                            const void *first_related_lane,
                            const void *second_related_lane)
{
    switch (input->selector) {
    case 9:
    case 11:
    case 15:
        /* Actual body resolves input and inspects entry-derived state. */
        return 0;
    default:
        return -1;
    }
}
