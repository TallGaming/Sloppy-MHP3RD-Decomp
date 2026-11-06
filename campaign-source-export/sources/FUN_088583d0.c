/*
 * Purpose: retain the bounded recovery boundary for a no-argument state
 * initializer/checker whose signed result controls the caller's workspace
 * clearing path.
 *
 * The verified caller treats a nonnegative result as success.  Synthetic
 * target flow shows a bounded comparison whose equality path performs two
 * contiguous 32-bit writable-state updates and tail-dispatches the active
 * FUN_088582bc dependency.  The non-equality path has a different return and
 * update profile.  The identity, layout, and ownership of that state remain
 * unresolved; the tail dependency is still active and not an ABI source.
 */

struct Fun088583d0RecoveryBoundary {
    /* Two writable runs are observed only on the comparison-equality path. */
    unsigned int *untyped_state_runs;
    /* The caller proves only the sign interpretation of the final result. */
    int result_used_as_status;
};

/*
 * No callable definition is supplied: the global bindings, comparison
 * operands, non-equality return contract, and tail callee ABI are unproved.
 */
