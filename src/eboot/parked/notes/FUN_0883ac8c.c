/*
 * Purpose hypothesis: inspect shared state and select a path according to a
 * six-byte status record.  The function is a zero-integer-argument helper
 * called directly by FUN_08831174.
 *
 * ABI evidence is sufficient to retain this declaration: the target reads no
 * incoming a0-a3 lane before defining it, and its one confirmed direct callee
 * is FUN_08830550(const signed char *).  The storage owner and the result
 * path are not yet established, so this is intentionally an uncompiled ABI
 * view rather than a whole-function candidate.
 */
typedef signed char s8;

int FUN_08830550(const s8 *values);
int FUN_0883ac8c(void);
