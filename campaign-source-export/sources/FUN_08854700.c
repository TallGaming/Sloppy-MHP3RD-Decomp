/*
 * FUN_08854700: partial input-dispatch view.
 *
 * The verified direct caller passes two unsigned 16-bit values.  Local control
 * flow contains state-dependent dispatch and one call to the unclassified
 * service at FUN_0885b02c.  Artificial zero-state probes complete for five
 * distinct input pairs and take that call. A 225-pair artificial grid remains
 * on one zero-state execution shape, so it cannot resolve the state fields.
 * The zero-state probe has 17 nonstack word reads but no nonstack writes.
 * Replaying artificial nonzero values at those read sites changes the observed
 * execution footprint, confirming that state provenance is required before
 * fields can be declared.
 * This is intentionally an uncompiled ABI view rather than a candidate.
 */
typedef unsigned short u16;

void FUN_08854700(u16 input_code, u16 input_value);
