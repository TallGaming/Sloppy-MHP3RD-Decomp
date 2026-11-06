/*
 * Purpose: retain the recovered shape of FUN_0885a050 without claiming a
 * complete callable C candidate.  The target has a frame, conditional value
 * selection, global reads/writes, and one direct call.
 *
 * The sole direct callee is currently PARKED with no confirmed prototype.
 * Artificial flow runs show that three later EABI integer lanes reach that
 * call, but their semantic types must be recovered from a supported
 * caller/callee context before this partial view can become a compilable
 * whole-function candidate.
 */

void FUN_088599f0(); /* PARKED: declaration deliberately has no prototype. */

void FUN_0885a050(void)
{
    /*
     * Incomplete field view only: private target analysis confirms state
     * reads and writes around a conditional selection and the direct call.
     * Do not compile this fragment as a candidate: the state bindings and
     * outgoing-call ABI are not yet verified.
     */
    FUN_088599f0();
}
