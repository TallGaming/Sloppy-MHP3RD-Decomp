/*
 * Purpose: retain an evidence-backed partial field/ABI view for the
 * FUN_08842bb4 coordinator without inventing the unresolved owner layout.
 *
 * Direct context finds callers FUN_088434a8 (three sites) and FUN_0884406c
 * (one site).  The small caller forwards lanes 0 and 1, explicitly supplies
 * zero in lane 2, and otherwise leaves its own higher lanes live.  A completed
 * large-caller artificial path also forwards lanes 0 and 1 and supplies zero
 * in lanes 2 and 3, while carrying a derived lane-2 value in a later EABI
 * slot.  These witnesses do not establish the missing formal signatures.
 * In completed artificial target paths, the coordinator calls
 * FUN_088ac55c, FUN_0885c878, FUN_0885be6c, and FUN_088a3984.  The second
 * incoming lane is forwarded to the first and final calls; the selector
 * resolver receives lane 1 plus a recovered in-object offset.  The selector
 * resolver's verified ABI uses byte selector +1 and u16 index +2, but this
 * target's containing object and the meaning of the added offset remain
 * unproved.  Thirteen global-read substitutions did not expose another
 * completed synthetic path.  A second 32-case synthetic state sweep varied
 * observed global and owner-field reads; it also retained one completed path.
 *
 * This is intentionally an uncompiled field view.  The target has twelve
 * direct dependencies, many PARKED, and the two caller contracts are not
 * recovered.  A whole C body would need fabricated function declarations,
 * selector-object ownership, and branch predicates.
 */

typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject08842bb4_view {
    u8 field_00;
    u8 selector;
    u16 index;
};

struct Coordinator08842bb4_view {
    u8 unknown_prefix[1144];
    struct SelectorObject08842bb4_view selector_object;
};

/* Supported local relationship, not executable source:
 * entry = FUN_0885be6c(unknown_context,
 *                      &owner->selector_object);
 * The remaining coordinator state transitions and dependency contracts are
 * unresolved.
 */
