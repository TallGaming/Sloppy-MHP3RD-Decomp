/*
 * FUN_08955e20: find a six-byte table record by its signed key.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Table role is a hypothesis.
 */
typedef short s16;
extern s16 D_08a1bc10[];
s16 *FUN_08955e20(int unused, s16 key)
{
    s16 *record = D_08a1bc10;
    while (record[0] != 0) { if (record[0] == key) return record; record += 3; }
    return 0;
}
