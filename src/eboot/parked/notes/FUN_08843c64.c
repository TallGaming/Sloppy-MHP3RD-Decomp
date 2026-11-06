/*
 * Purpose: preserve the incomplete ABI and dataflow recovery for FUN_08843c64.
 *
 * This is deliberately not a candidate translation unit.  The verified local
 * flow has one direct transfer to FUN_088434a8; synthetic integer-lane probes
 * show that lanes 0, 1, and 3 through 7 reach that call unchanged, while its
 * lane 2 is derived independently of all eight tested integer input lanes.
 * The target is stack-frame-free but uses caller-reserved stack space, so the
 * missing callee prototype and the derived lane's storage/type prevent an
 * honest C signature.  The sole declared caller does not consume the integer
 * return lane in the checked post-call window.  Do not compile this fragment.
 */
