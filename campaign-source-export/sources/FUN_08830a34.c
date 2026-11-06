/*
 * Purpose: preserve the supported partial ABI and field-access view for
 * FUN_08830a34.  This is not a whole-function candidate and is not compiled.
 *
 * The 49-word Group-B target consumes at least three integer arguments,
 * accesses an unresolved saved pointer at byte offsets 0, 3, 4, 7, 8, and
 * 11, and calls two unresolved dependencies.  The first call receives the
 * target's second and third arguments and its result selects a later path;
 * the second call is built from loaded state.  No direct static caller is
 * present, so callback or table ownership remains open.
 */

typedef struct FUN_08830a34_PartialRecord {
    unsigned char opaque[12];
} FUN_08830a34_PartialRecord;

/*
 * Candidate ABI, intentionally incomplete:
 *   int FUN_08830a34(void *state, const void *arg1, void *arg2);
 *
 * The target has unresolved global-like memory accesses, but their binding,
 * width, and PT_LOAD zero-fill status are not established.  Do not declare a
 * D_ADDRESS or compile a whole body until that evidence and the two callee
 * interfaces are recovered.
 */
