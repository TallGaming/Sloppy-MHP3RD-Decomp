/*
 * Purpose: partial control/dataflow view for an unbound event-side helper.
 *
 * Target-specific evidence: the 180-byte entry has no direct callers, two
 * conditional paths, and only two direct calls.  The first is the verified
 * six-byte nonzero predicate, receiving the observed entry argument lane.
 * The predicate result controls a later branch.  The second is an unclassified shared helper
 * reached by eleven direct callers; its own only direct dependency is the
 * verified three-argument destination-returning byte-fill thunk.
 *
 * This is deliberately an uncompiled declaration view.  The target's entry
 * ABI beyond an observed first integer/pointer lane, the predicate input binding, both branch meanings, and the shared
 * helper's complete formal ABI are unresolved.  Neither event-registration
 * nor four-record-count semantics have a demonstrated target relation here,
 * so they are intentionally absent.
 */
typedef signed char s8;

/* Verified registered interface. */
int FUN_08830550(const s8 *values);

/* Unclassified shared helper; an empty parameter list preserves uncertainty. */
void FUN_088394dc();
