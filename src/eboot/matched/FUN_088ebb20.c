/*
 * FUN_088ebb20: test whether a low-byte index selects a non-null entry among four.
 *
 * Main EBOOT, G2 high-address branch slice. The table type is a hypothesis.
 */

typedef unsigned int u32;

int FUN_088ebb20(void **entries, u32 index)
{
    index &= 0xff;
    if (index < 4 && entries[index] != 0)
        return 1;
    return 0;
}
