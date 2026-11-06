/*
 * Purpose: retain the supported recovery boundary for FUN_08839da4.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * Eight direct callers show that this entry receives live PSP EABI GPR slots.
 * The target writes to input-derived state, has one conditional path, and
 * calls FUN_088ebb10 with a pointer derived from that state plus two caller
 * argument slots.  FUN_088ebb10 is a byte-matched forwarding thunk, but its
 * complete forwarded signature and result semantics are explicitly unproved.
 */

typedef struct FUN_08839da4_State FUN_08839da4_State;

/* ABI-incomplete legacy forwarding thunk; do not use as a callable interface. */
extern void FUN_088ebb10(void);

/*
 * The target has four live caller-facing slots in sampled sites.  Its state
 * layout and the exact forwarded arguments need source-context proof.
 */
void FUN_08839da4(FUN_08839da4_State *state,
                  void *arg1,
                  void *arg2,
                  void *arg3);
