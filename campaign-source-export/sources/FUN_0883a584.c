/*
 * Purpose: preserve the bounded evidence for FUN_0883a584 while its callable
 * interface and object ownership remain unknown.  This is an uncompiled
 * field/ABI view, not a whole candidate.
 *
 * The target calls the output-pair helper with one integer argument, then
 * calls the verified six-byte-record inequality helper with two integer
 * argument lanes.  It has two conditional paths and two returns.  Its local
 * effects include byte and halfword stores, but the receiving object bases
 * and branch predicates are not yet supported by caller data.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_0882e484(u32 *output_pair); /* PARKED helper ABI hypothesis */
extern int FUN_088305b4(const void *left, const void *right);

/*
 * A .data text-pointer run holds this entry at index 1 of 44, which explains
 * the absence of direct callers but does not establish table selection or a
 * common ABI.  Required next evidence is a dispatcher/table-owner recovery,
 * plus object-base recovery for the byte/halfword stores.  Do not infer a
 * callable signature from stale register lanes.
 */
