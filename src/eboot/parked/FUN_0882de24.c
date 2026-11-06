/*
 * Purpose: record the verified dispatch-wrapper portion of FUN_0882de24.
 *
 * This intentionally uncompiled diagnostic partial preserves the only
 * directly supported ABI: four opaque incoming arguments are forwarded to
 * FUN_08830550, and its nonzero result selects an event-0x8000 dispatch.
 * The target also assembles packed callback arguments with five lwl/lwr
 * pairs.  Their field ownership is unresolved and the locked assembler does
 * not accept those accesses, so this is not a whole matching candidate.
 */
extern void *FUN_08830550(const void *recipient, const void *packet,
                          int mode, int detail);
extern void FUN_0883942c(int event, const void *first, const void *second);
extern void FUN_0882e19c(const void *first, const void *second);

void FUN_0882de24(const void *recipient, const void *packet, int mode,
                  int detail)
{
    void *dispatch = FUN_08830550(recipient, packet, mode, detail);

    if (dispatch != 0) {
        /* Packed callback fields are not independently typed yet. */
        FUN_0883942c(0x8000, dispatch, 0);
    }
    FUN_0883942c(0, dispatch, 0);
}
