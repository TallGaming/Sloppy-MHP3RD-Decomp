/*
 * Purpose: retain recovered control/ABI evidence for FUN_0883ccdc.
 *
 * This is not a whole-function candidate and must not be compiled as one.
 * Its sole direct caller has five derived live integer lanes at the call.
 * Target-local dataflow establishes that input lane zero selects memory and
 * branch control; lane one reaches branch control, memory addressing and
 * callees; lanes two through seven reach callees under the PSP EABI.
 * The target is a branchy record update coordinator: it repeatedly calls
 * FUN_08867d40 and the verified table-to-slot writers FUN_08868104,
 * FUN_0886813c, FUN_08868174, FUN_088681ac, and FUN_088681e4. It also calls
 * the parked category-table submitter FUN_08867e64 and parked descriptor
 * submitter FUN_08904570. State ownership, branch predicates, and the
 * callable contracts of the unclassified dependencies remain unresolved.
 * Decoder metadata also distinguishes a small selector-style dependency
 * (FUN_0885f610), a table-dispatch dependency (FUN_0885be6c), and a framed
 * record-transform dependency (FUN_088ff8f0). Their exact callable types
 * are not inferred from those shapes.
 */

typedef struct Fun0883ccdcState Fun0883ccdcState;

/* Supported only as a first-lane state view; the full target ABI is open. */
void FUN_0883ccdc_abi_view(Fun0883ccdcState *state)
{
    (void)state;
}
