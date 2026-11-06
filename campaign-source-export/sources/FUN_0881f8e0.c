/*
 * Purpose: retain the independently observed ABI and dispatch boundary of
 * FUN_0881f8e0, a 608-byte stateful routine with an unresolved indirect call.
 *
 * All four PSP integer entry slots are read before replacement.  The target
 * uses a large stack-resident state area, calls five still-PARKED helpers
 * (one twice), and performs one indirect dispatch.  The dispatched target is
 * loaded from a stack slot with no earlier local write, so it may be populated
 * by a preceding helper or inherited call state; neither case is yet proved.
 * Its two discovered callers do not establish concrete argument or result
 * types.
 *
 * This is intentionally an uncompiled partial ABI view.  Public unwind
 * sources have no equal- or near-size lead, so no source identity, callback
 * signature, or data ownership is asserted here.
 */

typedef unsigned int mhp3rd_word;

/* The indirect target's receiver and callback arguments are unbound.  These
 * word slots must be replaced with caller-proven state and callback types. */
extern mhp3rd_word FUN_0881f8e0(mhp3rd_word argument_0,
                                mhp3rd_word argument_1,
                                mhp3rd_word argument_2,
                                mhp3rd_word argument_3);
