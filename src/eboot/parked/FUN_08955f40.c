/*
 * FUN_08955f40: return an indexed subtable within an optional resource block.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Resource role is a hypothesis.
 */
extern unsigned char *D_08a31e84; int FUN_08864f48(int, int);
int FUN_08955f40(int unused, int index)
{
    int table;
    int base = 0;
    int result = 0;
    if ((*(unsigned short *)D_08a31e84 & 2) != 0) base = *(int *)(D_08a31e84 + 2);
    table = FUN_08864f48(base, 11);
    if (table != 0) result = table + *(int *)(index * 4 + table + 8);
    return result;
}
