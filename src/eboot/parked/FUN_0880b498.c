/*
 * FUN_0880b498: return the address of a global object.
 *
 * Main EBOOT, address 0x0880b498, 12 bytes: lui $v0, 0x0896; jr $ra; addiu $v0, $v0, 0x30C4.
 * 1 direct caller(s) in the Ghidra inventory.
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
 * Second blocker: the %hi/%lo pair needs a data symbol at 0x089630C4. The gate
 * makes only j and jal symbolic, so a C reference to data cannot link yet.
 */
extern char D_089630c4[];

char *FUN_0880b498(void)
{
    return D_089630c4;
}
