/*
 * Purpose: document the reset-and-tail-dispatch shape of this state routine.
 *
 * This is an uncompiled partial ABI view, not a candidate implementation.
 * Scalar execution on artificial state confirms that every exercised path
 * resets the shared state value, clears the same shared 144-byte region used
 * by adjacent routines, and tail-dispatches with entry lane zero as its first
 * argument. Entry lane three is also dereferenced, so this routine cannot be
 * modeled as a one-argument wrapper. The target has three tail-dispatch
 * branches but the explored state matrix exposes only two argument sets.
 * Their field predicates and the full contract of the dispatch target remain
 * unresolved.
 */
typedef void (*UnresolvedTail)(void);

extern void FUN_08839fd4(int value);
extern void FUN_088ebb10(void);
extern void FUN_08839f10(void);

void FUN_08835bf4(void *record, void *unknown1, void *unknown2,
                  void *state_input);
