/*
 * Purpose: retain the recovered wrapper/predicate section of FUN_08834ea0.
 *
 * This 55-word routine has a 32-byte frame and one exit.  It forwards its
 * observed incoming GPR lanes to the unresolved FUN_08839220 dependency, then
 * passes a derived pointer to the verified six-byte nonzero predicate
 * FUN_08830550.  The predicate result controls two branches and the routine
 * performs one byte store on its recovered paths.  A real direct call at
 * 0x088878b8 is preceded by a one-instruction wrapper region that preserves
 * the four GPR lanes; neither that wrapper nor the target proves their types
 * or whether additional EABI argument lanes are meaningful.
 *
 * FUN_08834e34 is not a direct dependency of this target, so its event-slot
 * registration ABI is intentionally not reused here.  This is an uncompiled
 * partial data/control-flow view, not a natural-C candidate.
 * The direct caller's post-call region normalizes v0 through an unsigned
 * threshold operation before later conditional branches.  Its result type
 * still cannot be distinguished from an integer, status, or pointer-derived
 * value.  FUN_08839220 itself conditionally calls
 * the same six-byte predicate, which further prevents treating it as a simple
 * pointer-return accessor.
 */

typedef unsigned char FUN_08834ea0_U8;

struct FUN_08834ea0_LocalState {
    FUN_08834ea0_U8 opaque[20];
};

extern int FUN_08830550(const signed char *values);

/* FUN_08839220's input and result contracts are unresolved.  Its result feeds
 * the predicate pointer construction; no callable declaration is asserted. */
static struct FUN_08834ea0_LocalState FUN_08834ea0_partial_local_state;
