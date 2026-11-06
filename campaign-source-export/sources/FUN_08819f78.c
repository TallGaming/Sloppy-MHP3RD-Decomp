/*
 * Partial interface for a leaf runtime-state update.
 * All six direct call sites ignore the conventional return registers shortly
 * after the call.  The target itself reads only its first input register and
 * performs four reads plus one write through that opaque state pointer.
 * Branch predicates and field identities are not recovered, so this is not a
 * whole behavioral implementation or compilation candidate.
 */
typedef struct FUN_08819f78_state FUN_08819f78_state;

void FUN_08819f78(FUN_08819f78_state *state)
{
    (void)state;
    /* Recovery requires the state-field layout and all five branch predicates. */
}
