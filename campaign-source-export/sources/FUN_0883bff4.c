/*
 * Purpose: retain the independently observed EABI field view for a scalar
 * float-bound helper until the owning caller's state layout is recovered.
 *
 * The target has no direct callees.  It consumes the second integer lane and
 * the fifth EABI integer lane, normalizes two selector-like values to signed
 * 16-bit form, converts integer values to float, and performs repeated
 * float-bound tests.  Three observed float fields are at offsets 0, 4, and
 * 12 of an unresolved state lane; two further shared-state float fields are
 * involved.  The one caller locally derives all five staged lanes, but its
 * object bindings and the target's exact predicate meaning are not yet
 * proved.  The caller does use its zero/nonzero result for control flow.
 */

typedef short s16;

/* ABI field view only; this is not a candidate implementation. */
int FUN_0883bff4_abi_view(const void *state, s16 selector, int arg2,
                           int arg3, s16 limit_or_mode);
