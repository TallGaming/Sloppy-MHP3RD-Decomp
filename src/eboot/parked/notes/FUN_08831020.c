/*
 * Purpose: uncompiled ABI and data-binding view for the no-argument global
 * initializer at FUN_08831020. This is not a whole candidate.
 *
 * Direct callers make no argument setup. The target is linear and calls two
 * ABI-incomplete reset-like dependencies, a parked registration dependency,
 * a parked shared-record consumer, a verified memcpy wrapper, and a final
 * parked initializer. D_08a291a0 and D_08a297c0 occur in the observed flow;
 * only the latter has an independently verified six-byte record contract.
 */
typedef unsigned char u8;

extern u8 D_08a291a0[];
extern u8 D_08a297c0[6];

void FUN_08831020(void);
