/*
 * Purpose: retain the evidenced ABI field view for the Group B target while
 * its state-object layout and direct callee ownership are reconstructed.
 *
 * The sole direct caller supplies one live input lane to this target.  The
 * target in turn stages state-derived values and a sign-normalized selector
 * for FUN_0883bac8.  No complete C body is proposed: the target's state
 * object and the callee's callable prototype are still unproved.
 */

typedef short s16;

/* Hypothesis only: the observable input is selector-like and 16-bit signed. */
void FUN_0883bcbc_abi_view(s16 selector);
