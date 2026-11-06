/*
 * Purpose hypothesis: choose or update a shared six-byte record based on a
 * masked selector, an unresolved scalar lane, and an unaligned source record.
 * Both direct callers construct all three lanes before the call.
 *
 * This is an uncompiled ABI view, not a whole-function candidate.  Evidence
 * supports the low-bit selector use of a0, a2 as a six-byte source pointer,
 * shared-state binding D_09bf5250, and comparison through verified
 * FUN_088305b4.  The a1 role, record-owner layout, path effects, and return
 * semantics need source-context recovery.
 */
typedef unsigned int u32;

int FUN_088305b4(const void *left, const void *right);
int FUN_0883af38(u32 selector, int unresolved_lane, const void *source_record);
