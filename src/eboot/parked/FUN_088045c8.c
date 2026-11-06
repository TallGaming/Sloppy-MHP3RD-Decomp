/*
 * FUN_088045c8: return -1.
 *
 * Main EBOOT, address 0x088045c8, 8 bytes: jr $ra; li $v0, -1.
 * 0 direct caller(s) in the Ghidra inventory.
 *
 * PARKED. Closest plain draft, not linked. The reference fills the jr delay
 * slot with the work. mwccpsp at -O2 (the unlocked candidate-O2 profile, all
 * 12 installed mwccpsp builds) does not fill delay slots; -O3 and -O4 fill
 * them. Source changes cannot fill the slot at -O2. See
 * docs/MATCH_16_SMALLEST.md.
 *
 * Hypothesis: the name, the parameters and the types are unknown.
 */

int FUN_088045c8(void)
{
    return -1;
}
