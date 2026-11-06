/*
 * Purpose: retain the supported field and forwarding view for FUN_0885f11c.
 *
 * This is not a whole-function candidate. Synthetic runs show that the first
 * two integer lanes are forwarded unchanged to the neighbor at 0x0885efd4 on
 * the observed all-zero state. The target also reads shared mapped state and
 * has a no-call zero-return path when those synthetic reads are set to ones.
 * The alternate direct dependency at FUN_0885d1e0 has a verified declaration,
 * but the dispatch condition and ownership of the gap target remain unknown.
 */
#include <stdint.h>

typedef int FUN_0885f11c_Result;

extern int FUN_0885d1e0(unsigned int unused, const unsigned short *record);

/* The complete ABI and dispatch table binding require recovered caller context. */

