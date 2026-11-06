/*
 * Purpose: retain the observed boundary for this uncompiled partial field
 * view. The sole caller does not use the return value. The target reads and
 * writes state, has an indirect call, and does not read incoming argument
 * registers. Event-slot registration at FUN_08839da4 proves only the record
 * layout family, not this target's callback callable ABI or object ownership.
 */
void FUN_08839e64(void);
