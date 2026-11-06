/*
 * FUN_088585a8: partial interrupt-guarded state update view.
 *
 * Artificial lane probes show that all eight incoming integer lanes leave the
 * same zero-state call sequence. The target therefore has a supported void
 * input ABI independent of the parked caller. In that path it calls the
 * verified sceKernelCpuSuspendIntr and passes its returned flags to the
 * verified sceKernelCpuResumeIntr.
 *
 * Only one of three observed nonstack word sites changes control flow in an
 * 18-case artificial site sweep; it is a likely guard state. The game state
 * addresses, their byte field meaning, and ownership are not bound. This is
 * an uncompiled partial view, not a whole C candidate.
 */
void FUN_088585a8(void);
