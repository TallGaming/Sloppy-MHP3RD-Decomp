/*
 * FUN_0881c740: return the 32-bit word at offset 0x4E0 of a record.
 *
 * Main EBOOT, address 0x0881c740, 8 bytes: jr $ra; lw $v0, 0x4E0($a0).
 * 3 direct caller(s) in the Ghidra inventory.
 *
 * PARKED. Closest plain draft, not linked. The reference fills the jr delay
 * slot with the work. mwccpsp at -O2 (the unlocked candidate-O2 profile, all
 * 12 installed mwccpsp builds) does not fill delay slots; -O3 and -O4 fill
 * them. Source changes cannot fill the slot at -O2. See
 * docs/MATCH_16_SMALLEST.md.
 *
 * Hypothesis: the name, the parameters and the types are unknown.
 */

typedef unsigned char u8;
typedef unsigned int u32;

/* Hypothesis: 0x4E0 unknown bytes come before the field. */
struct Record_0881c740
{
    u8 unknown_000[0x4E0];
    u32 value_4E0;
};

u32 FUN_0881c740(const struct Record_0881c740 *record)
{
    return record->value_4E0;
}
