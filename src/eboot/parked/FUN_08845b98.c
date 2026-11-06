/*
 * Purpose: retain the recovered dispatcher field-flow without inventing the
 * unresolved callee or object contracts.
 *
 * Its sole direct caller passes an object pointer in a0, then 1, 0 and 1 in
 * a1-a3.  The target's 32-byte frame preserves ra and s0-s3.  It repeatedly
 * uses the byte sequence at object+124 as an item: FUN_0883c4f8 tests it for
 * emptiness and FUN_0884238c derives its signed entry type.  A conditional
 * path then sends this item to PARKED FUN_08841e68, and another path calls
 * unclassified FUN_08845aac.  Its first lane is the original object pointer:
 * a dependency-level trace shows that helper tests byte 8 of that object and
 * reads byte 2 of the item it subsequently handles.
 *
 * This is not a compile candidate.  The return and side-effect contracts of
 * the two final actions are not independently established.
 */
typedef unsigned char u8;
typedef signed char s8;

typedef struct DispatchObjectView {
    u8 unknown_000[8];
    u8 helper_flag_008;
    u8 unknown_009[115];
    u8 item_07c[];
} DispatchObjectView;

static void FUN_08845b98_partial_flow(DispatchObjectView *object,
                                      int one_based_mode,
                                      void *unknown_lane2,
                                      int caller_flag)
{
    const u8 *item = object->item_07c;
    s8 item_type;

    item_type = 0; /* FUN_0884238c(item) on the nonempty branch. */
    if (one_based_mode == 1 && item[0] != 0) {
        (void)item_type;
    }
    (void)unknown_lane2;
    (void)caller_flag;
}
