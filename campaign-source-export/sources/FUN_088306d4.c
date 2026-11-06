/*
 * Purpose: preserve the supported partial recovery for FUN_088306d4.
 * This is not a whole-function candidate and is not compiled.
 *
 * The 67-word Group-B target allocates a 2784-byte stack frame and creates a
 * local workspace reaching at least 2768 bytes from the stack base.  It makes six direct calls, including two
 * calls to unresolved FUN_08961110, ABI-incomplete legacy thunk
 * FUN_088ebb10, local unresolved helpers FUN_08830654 and FUN_08830678, and
 * unresolved FUN_0887cb2c.  Return values from both FUN_08961110 calls, the
 * legacy thunk, and FUN_08830654 affect later target work.  Its only direct caller supplies all primary
 * arguments through caller-derived state, so no complete object ownership or
 * signature can be established.
 */

typedef struct FUN_088306d4_PartialWorkspace {
    unsigned char opaque[2769];
} FUN_088306d4_PartialWorkspace;

/*
 * Target field/ABI observations:
 * - a local workspace is passed to multiple dependencies;
 * - the first dependency receives a zero-valued second integer argument;
 * - the legacy thunk has no proven forwarded signature and its return is used;
 * - local FUN_08830654 reads its first-argument field and returns a value;
 * - the target writes local stack slots and one saved-pointer field.
 *
 * No natural C body is supplied because dependency prototypes and workspace
 * layout remain unproven.  The only direct caller uses the target return in
 * a conditional path, so a void prototype is unsupported; the target has
 * two return sites and its exact result type is unresolved.
 */
