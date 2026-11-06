/*
 * FUN_088fa68c: map a signed key through a table, with 0x65 returning 0x48.
 *
 * Main EBOOT, G2 high-address branch slice. The key and table roles are hypotheses.
 */

typedef short s16;
typedef unsigned int u32;

u32 FUN_088fa68c(void *unused, s16 key)
{
    if (key != 0x65)
        return *(u32 *)(0x089f85cc + key * 4);
    return 0x48;
}
