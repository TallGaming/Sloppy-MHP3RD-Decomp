/*
 * Purpose: preserve the supported forwarding view for FUN_0883ef44.
 *
 * This is an uncompiled field view, not a whole-function candidate. Synthetic
 * target execution establishes four direct calls in this order:
 *   FUN_08900bf0, FUN_08867d40, FUN_08904570, FUN_089048a8.
 * Only input lane a1 reaches the final callee (its lane 2), as a signed
 * 16-bit value. Input lane a2
 * reaches call lanes 2, 2, 4, and 5 respectively. Input lane a0 and all
 * tested caller-stack lanes have no observed effect. The other arguments are
 * loaded from unresolved fixed state. The target preserves final-callee
 * result bits, but its public return contract has no direct caller witness.
 * These bindings and the three parked callees' callable contracts must be
 * proven before forming natural C.
 */
typedef unsigned short u16;

extern void FUN_08900bf0(void *manager, int object, int second, int count,
                          int fourth, int fifth, int sixth, int third);
extern int FUN_08867d40(void *context, u16 index); /* Typed wrapper witness. */
/* The remaining callees are PARKED and have no confirmed callable contract. */

void FUN_0883ef44_forwarding_view(void *a0_unused, short a1_final, int a2_value)
{
    (void)a0_unused;
    (void)a1_final;
    (void)a2_value;
    /* Fixed-state operands and parked-callee signatures remain unresolved. */
}
