/*
 * Purpose: retain the supported ABI and resolver boundary for this 144-byte
 * audio-side dispatcher while its record-field effects remain unresolved.
 *
 * Hypothesis: the first argument is forwarded as the resolver's unused/context
 * lane; categories 5 through 17 reach the resolver in artificial probes.  The
 * post-resolution byte and word reads select effects not yet typed here.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern const u8 *FUN_0885c144(void *unused, u8 category, u16 index);

/*
 * Incomplete field view, deliberately not compiled as a whole candidate.
 * The target forwards (unused, category, index) to the resolver and has two
 * resolver call sites.  A non-null result is subsequently read as both byte
 * and word fields before the remaining side effect is known.
 */
void FUN_0885c708_partial_field_view(void *unused, u8 category, u16 index)
{
    const u8 *record;

    if (category >= 5 && category <= 17) {
        record = FUN_0885c144(unused, category, index);
        (void)record;
    }
}
