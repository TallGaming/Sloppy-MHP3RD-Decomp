/*
 * FUN_08852774: unresolved rendering/batch-work routine field view.
 *
 * The verified FUN_08901000 wrapper establishes this address range as a
 * rendering submission family.  Target-local references include record byte
 * setters FUN_088e6ff0 and FUN_088e7048, a slot-zero record setter
 * FUN_08867d40, and the still-parked table resolver FUN_08867c30.  That is
 * useful family evidence, but does not establish the large target's complete
 * descriptor/object ABI or every call-site argument flow.  Retain this
 * purpose-commented field view instead of inventing an executable candidate.
 */

struct RenderRecord_08852774;

/*
 * No prototype is repeated here: historical source uses an incompatible
 * FUN_08867d40 attribution elsewhere, so only address-local reconciliation
 * may establish the actual target call ABI.
 */

/* PARKED: requires target-local caller, object-layout, and callee ABI proof. */
