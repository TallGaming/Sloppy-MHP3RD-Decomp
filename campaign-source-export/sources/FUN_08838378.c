/*
 * Purpose: retain the independently observed ABI field view for FUN_08838378.
 *
 * This is deliberately not a whole-function candidate.  Four callers provide
 * a pointer-like value in a0, but the target forwards entry a0 and may retain
 * a2/a3 at its first direct call.  The pointed-to object has no target-owned
 * dereference in the recovered straight-line metadata, so assigning it a
 * struct type would be unsupported.  The two direct dependencies have
 * independently recorded comparison and fill prototypes, but their global
 * operands and the target's branch outcomes still need target-level recovery.
 */
typedef struct FUN_08838378_input FUN_08838378_input;

/* Hypothesis only: all observed callers establish the first argument as a pointer. */
typedef int FUN_08838378_result;
typedef FUN_08838378_result (*FUN_08838378_signature_hypothesis)(
    FUN_08838378_input *input,
    unsigned int inherited_arg1,
    unsigned int inherited_arg2,
    unsigned int inherited_arg3);
