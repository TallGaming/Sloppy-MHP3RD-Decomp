/* Purpose: retain the caller-supported entry ABI while callee and object ownership remain unresolved. */
typedef unsigned char u8;

/*
 * Observed at all seven FUN_0883e974 sites: context is D_08a3345c, key is
 * a table-relative pointer, and selector is passed in an unsigned byte lane.
 * This is an uncompiled field view, not a whole-function candidate.
 */
extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);
