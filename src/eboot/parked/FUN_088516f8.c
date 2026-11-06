/*
 * FUN_088516f8: partial field view for a static descriptor-layout initializer.
 *
 * This is intentionally not a whole candidate.  The local field-flow review
 * proves four submissions to FUN_08900bf0 followed by two submissions to
 * FUN_08904570.  The first family uses four adjacent static regions with
 * counts 1, 9, 3, and 3; its shared "second" descriptor lane is the fifth
 * incoming integer lane.  The first dispatch forwards incoming lane 1 and
 * lane 4, while the second dispatch draws its descriptor lanes from static
 * fields.  The byte below is the only target-side store whose input and width
 * are independently established.  The remaining static stores require a
 * record-layout proof before natural C can express them honestly.
 */

typedef unsigned char u8;

extern u8 D_08970d3a;

void FUN_088516f8_field_view(void *unknown0, int dispatch_word,
                             int unknown2, u8 mode, int descriptor_word)
{
    (void)unknown0;
    (void)dispatch_word;
    (void)unknown2;
    (void)descriptor_word;

    /* Proven byte-width mode publication into the static descriptor region. */
    D_08970d3a = mode;
}
