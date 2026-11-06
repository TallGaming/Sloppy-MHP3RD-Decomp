/*
 * Purpose: retain the evidence-backed, deliberately uncompiled field view for
 * FUN_08854abc while its parameter and return ABI remain unresolved.
 *
 * The target has two direct game callers and five direct outgoing calls.  Its
 * floating-point control flow includes ordered comparisons, additions,
 * subtractions, moves, and multiplications.  The known compiler-runtime
 * calls establish that at least one intermediate is widened to double and
 * narrowed again; the remaining runtime dependency is still unclassified.
 * This makes a guessed scalar signature or a no-op C body misleading.
 *
 * Both callers are short, float-heavy wrappers and each calls this target
 * exactly once. They are reached from the same two higher-level functions.
 * The only game dependency reached here is a compact comparison-and-adjustment
 * helper; four exits transfer there directly. This supports a piecewise scalar
 * transform as a behavioral category, but not its inputs, output, or fields.
 * The unclassified dependency has the multiword integer-control shape expected
 * of a software floating-point helper, but that resemblance is not sufficient
 * to name it or use a prototype for this target.
 */

typedef struct FUN_08854abc_unresolved_state {
    /* Object layout and ownership are not yet supported by caller evidence. */
    unsigned char unresolved;
} FUN_08854abc_unresolved_state;

/* No callable declaration: the target ABI is intentionally not fabricated. */
