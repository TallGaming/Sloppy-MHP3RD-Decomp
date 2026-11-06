/*
 * Purpose: preserve the verified selector-dispatch portion while the
 * surrounding record layout and post-call control flow remain unresolved.
 * This is an uncompiled PARKED field view, not a whole-function candidate.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 FUN_0885f610(void *context, u32 selector);

/* Caller and synthetic dataflow both support these first two argument lanes. */
void FUN_0885f760(void *context, const u8 *record)
{
    u32 selector_class = FUN_0885f610(context, record[1]);

    (void)selector_class;
    /* PARKED: recover the post-classification branches and record ownership. */
}
