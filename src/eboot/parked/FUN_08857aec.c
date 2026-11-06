/*
 * Purpose: retain the bounded recovery evidence for the unresolved function
 * entry referenced by the writable D_0896a924 slot.
 *
 * This is deliberately an uncompiled field view, not an empty candidate.
 * No declared caller was found, the only address lead is an aligned writable
 * slot whose table/registration contract is unknown, and the target's two
 * outgoing paths include an unclassified tail destination plus a PARKED
 * allocator-release draft.  Those facts do not establish an argument or
 * return ABI, object layout, or game-code ownership.
 */

struct Fun08857aecRecoveryBoundary {
    /* The entry may be published through D_0896a924; slot ABI is unproved. */
    void *unresolved_slot_owner;
    /* The allocator-release dependency is present but has only PARKED ABI. */
    void *unresolved_allocator_context;
};

/*
 * Do not declare or compile a callable prototype until a real registration
 * site or an actual caller proves the slot's callable ABI and ownership.
 */
