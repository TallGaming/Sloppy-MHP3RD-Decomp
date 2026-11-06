/*
 * Purpose: retain supported ABI and field evidence for FUN_0883592c.
 *
 * One current source caller passes object+0x17ad and object+0x2e8 in the
 * first two integer lanes. The target calls verified FUN_08830550 four times
 * and synthetic state shows a byte write at the first input base. No direct
 * synthetic memory read derives from either input, and forced predicate
 * results leave that byte and return bits unchanged. The predicate arguments
 * therefore appear global in the tested path. Their identities, complete
 * branch behavior, and object types remain unresolved.
 *
 * This is an uncompiled field/ABI view, not a whole C candidate.
 */
