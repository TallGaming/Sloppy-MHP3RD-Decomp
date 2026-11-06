/*
 * Purpose: preserve the evidence-backed entry view for FUN_0883b2fc while its
 * branch ownership and complete object layouts remain unresolved.
 *
 * The sole direct caller constructs a six-byte local record and passes its
 * address in the first PSP EABI integer lane.  It also supplies two values
 * assembled from bytes, but only their low-16-bit use is corroborated here.
 * This is intentionally an uncompiled field view, not a whole-function
 * candidate or a callable declaration for unrelated callers.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Fun0883b2fcEntryView {
    const u8 *record;       /* caller local: six-byte record */
    u16 caller_word;        /* assembled by FUN_0883b7ac */
    u16 shared_word;        /* assembled from shared bytes by FUN_0883b7ac */
};

struct Fun0883b2fcSharedView {
    u8 unknown_00[8];
    u8 enabled;             /* conditional gate observed at +8 */
    u8 unknown_09[0x29];
    u16 first_key;          /* compared with entry.caller_word */
    u8 unknown_34[2];
    u16 second_key;         /* compared with entry.shared_word */
};

static void FUN_0883b2fc_field_view(struct Fun0883b2fcEntryView entry)
{
    /* Target reads the six-byte record through unaligned word fragments. */
    const u8 *record = entry.record;

    /* Target later calls the verified six-byte compare and nonzero helpers. */
    (void)record;
    (void)entry.caller_word;
    (void)entry.shared_word;

    /* The state subobject is reached through the pointer at D_09bf5250. */
    /* Its owner and the containing-object layout are not yet known. */
}
