/*
 * Purpose: call the imported routine at this point in the game flow.
 * Hypothesis: the wrapper passes through its incoming argument registers.
 *
 * Attempt 1: a plain no-argument wrapper tail-calls the import.
 * Attempt 2: a variadic wrapper forces a call frame, but spills the argument
 * registers and makes a larger frame than the reference.
 *
 * Blocker: GCC 4.0.4 group B uses a sibling call for the plain wrapper. The
 * reference is a 16-byte non-leaf call frame with no observable argument work.
 * Revisit when the project has a supported, global tail-call policy change.
 */
extern void FUN_08960c30();

void FUN_08839200(void) {
    FUN_08960c30();
}
