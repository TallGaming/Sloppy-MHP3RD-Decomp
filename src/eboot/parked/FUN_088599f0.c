/*
 * Purpose: retain an ABI-incomplete field and ownership view for FUN_088599f0.
 *
 * This is an uncompiled partial review, not a callable C candidate.  Target
 * callers establish that it is a shared service entry point.  One decoded
 * incoming call initializes all four observed integer argument slots with a
 * constant, stack pointer, constant, and memory-loaded value respectively.
 * The target reads all four integer entry slots before redefining them.  This
 * does not establish their types, widths beyond the ABI slot, or return
 * convention.  A parked caller's three-argument source is not ABI evidence.
 * The target directly forwards entry slot a1 as the source pointer and a2 as
 * the byte count to the verified copy wrapper, so those two roles are
 * independently supported.  The first and fourth slots remain unresolved.
 * The target performs one wait-semaphore and one
 * signal-semaphore import call, invokes an unresolved local helper, calls the
 * verified fill/copy wrappers, and has divergent interrupt and output paths.
 * Its read/write access to D_08a31df4 proves a shared four-byte lock-state
 * field, but not its enclosing object layout or parameter types.
 */

struct fun_088599f0_partial_view {
    unsigned int unresolved_selector;
    const void *unresolved_record;
    unsigned int unresolved_size_or_flags;
    unsigned int unresolved_fourth_argument;
    unsigned int shared_interrupt_state;
};

enum fun_088599f0_actions {
    FUN_088599F0_WAITS_FOR_SHARED_SERVICE,
    FUN_088599F0_PREPARES_OR_COPIES_A_RECORD,
    FUN_088599F0_SIGNALS_SHARED_SERVICE,
    FUN_088599F0_HAS_DIAGNOSTIC_OUTPUT_PATH
};
