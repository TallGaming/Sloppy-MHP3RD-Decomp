/*
 * Purpose: document the supported call-level view of FUN_088335c0 while its
 * complete input and stack-object ABI is unresolved.
 *
 * This is intentionally not a build candidate.  Target-local control flow
 * reaches four helpers; only the pair-copy helper and six-byte predicate have
 * independently reviewed C interfaces.  The remaining helper interfaces and
 * the caller-established parameter ownership are required before a natural
 * whole-function candidate can be written.
 */

typedef unsigned int u32;

/* Reviewed interfaces used by the target's direct-call evidence. */
extern void FUN_0882e484(u32 *output);
extern int FUN_0883a8ac(const void *record);

/*
 * The target invokes the two declarations above, plus FUN_08838378 and
 * FUN_088399f0.  No callable prototype is asserted for either unresolved
 * dependency, and no incomplete fragment is presented as the target body.
 */
