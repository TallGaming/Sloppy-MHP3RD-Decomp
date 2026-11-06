/*
 * Purpose: retain the verified boundary facts for FUN_08859ea0 without
 * claiming a complete implementation.
 *
 * The only declared incoming call is FUN_0885a718.  The target saves four
 * callee-saved registers and has four conditional paths.  It directly calls
 * FUN_08858030, FUN_088ebb18, sceKernelCpuResumeIntr, and
 * sceKernelCpuSuspendIntr.  The last two use verified PSP import prototypes.
 * FUN_08858030 remains PARKED, so its parameter and result contracts cannot
 * support a truthful whole-function C candidate.  This file is deliberately
 * declaration-only and was not compiled as a behaviorless probe.
 *
 * Two artificial zero-initialized memory probes took the return path before
 * any external call.  This supports a state-gated path, but it does not
 * identify the state object, its field layout, or the function ABI.
 */

void FUN_08859ea0(void);
