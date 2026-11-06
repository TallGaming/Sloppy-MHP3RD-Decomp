/*
 * Purpose: retain the supported local-record composition for FUN_0883b7ac.
 *
 * This uncompiled view is deliberately not a whole candidate.  Neither the
 * preparation routine nor the final consumer has a confirmed complete ABI,
 * and the reference-table scan found no direct caller for this entry.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Fun0883b7acLocalView {
    u8 prefix[2];
    u8 record[6];
};

static void FUN_0883b7ac_field_view(void)
{
    struct Fun0883b7acLocalView local;

    /* A parked preparation callee fills or selects the six-byte record. */
    /* Two verified byte-copy calls provide the prefix from a shared address. */
    /* The final parked callee receives local.record and two u16 lane values. */
    (void)local;
}
