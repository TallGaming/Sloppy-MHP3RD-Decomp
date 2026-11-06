/*
 * Purpose: preserve the demonstrated resolver-facing ABI of this audio
 * selector side-effect routine until the two target-owned word destinations
 * and returned-record field meanings are recovered.
 *
 * Hypothesis: category and index share the verified selector-record ABI with
 * FUN_0885c144.  Artificial probes reach one of the two resolver call sites
 * for categories 5..9 and 11..17; categories 0..4 and 10 did not do so.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern const u8 *FUN_0885c144(void *unused, u8 category, u16 index);

/*
 * Incomplete field view, deliberately not compiled as a whole candidate.
 * The actual body performs two word stores through an unresolved target-owned
 * base, then inspects byte and word fields of the selected record.  Their
 * layout and effects need caller-delay-slot and record-layout evidence.
 */
void FUN_0885cf58_partial_field_view(void *unused, u8 category, u16 index)
{
    const u8 *record;

    if ((category >= 5 && category <= 9) ||
        (category >= 11 && category <= 17)) {
        record = FUN_0885c144(unused, category, index);
        (void)record;
    }
}
