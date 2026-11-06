/*
 * FUN_08854550: unresolved small initialization/dispatch wrapper field view.
 *
 * Target-local references show zero-argument setup/clear helpers
 * FUN_08858024, FUN_088598d0, FUN_088585a8, and FUN_0885af64 plus the
 * one-argument request helper FUN_08859fac.  Synthetic caller paths for
 * FUN_0885423c prove GPR4 is zero at both observed entries; they do not bind
 * a full two-parameter ABI, call order, returned value, or the unavailable
 * FUN_088585a8 interface.  This is deliberately not an executable body.
 */

/* PARKED: recover caller argument flow and the FUN_088585a8 ABI first. */
