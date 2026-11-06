/*
 * FUN_0880cb14: count the leading zero bits of a word.
 *
 * Main EBOOT, address 0x0880cb14, 8 bytes: jr $ra; clz $v0, $a0.
 * 2 direct caller(s) in the Ghidra inventory.
 *
 * PARKED. Closest plain draft, not linked. The reference fills the jr delay
 * slot with the work. mwccpsp at -O2 (the unlocked candidate-O2 profile, all
 * 12 installed mwccpsp builds) does not fill delay slots; -O3 and -O4 fill
 * them. Source changes cannot fill the slot at -O2. See
 * docs/MATCH_16_SMALLEST.md.
 *
 * Hypothesis: the name, the parameters and the types are unknown.
 */

/*
 * clz is an Allegrex instruction. mwccpsp has no __builtin_clz: the draft
 * compiles to a call at every level. A second blocker, independent of the
 * delay slot.
 */
unsigned int FUN_0880cb14(unsigned int value)
{
    return __builtin_clz(value);
}
