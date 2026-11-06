/*
 * FUN_088401e0: selector-record-dependent operation with scalar float-to-
 * integer conversions.
 *
 * This is an uncompiled field view.  The sole direct caller supplies five
 * integer lanes.  The first lane is read at byte offset 4835; the second lane
 * is passed to FUN_0885be6c and therefore has the SelectorObject layout.
 * The resolver result is a record pointer (not a halfword).  Remaining calls
 * and the record's ownership are unresolved, so no whole C candidate is safe.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct SelectorObject0885be6c {
    u8 field_00;
    u8 selector;
    u16 index;
};

struct Context401e0 {
    u8 unknown[4835];
    u8 enabled_or_mode;
};

extern const u8 *FUN_0885be6c(void *unused_context,
                               const struct SelectorObject0885be6c *object);
extern u32 FUN_088fabf4(u8 *first, u8 *second, short x, short y);
extern void FUN_088fc270(void);
extern void FUN_088ff8f0(void);

u32 FUN_088401e0_field_view(struct Context401e0 *context,
                             const struct SelectorObject0885be6c *selector,
                             u32 lane2, u32 lane3, u32 lane4)
{
    const u8 *record;

    /* The target performs five float multiplies followed by truncation to
     * signed words; retain float as the actual machine value category. */
    if (context->enabled_or_mode == 0)
        return 0; /* Early-result convention is not yet caller-proved. */

    record = FUN_0885be6c(0, selector);
    if (record == 0)
        return 0; /* Null-path result convention is likewise provisional. */

    /* The first helper packs two signed coordinate sums using offsets +24/+26
     * from its record inputs.  Its target call lanes are not yet recovered. */
    (void)FUN_088fabf4((u8 *)record, 0, 0, 0);
    /* The remaining helper signatures, record field offsets, and return
     * propagation must come from FUN_0884ce48 or typed helper evidence. */
    FUN_088fc270();
    FUN_088ff8f0();
    (void)lane2; (void)lane3; (void)lane4;
    return 0;
}
