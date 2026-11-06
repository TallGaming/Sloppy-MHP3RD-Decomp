/*
 * FUN_0891fa94: return the first half-word from an indexed global slot.
 *
 * Main EBOOT, attempt-high-01 batch 2. The unused context and slot type are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

extern void *D_08aace80;
s16 *FUN_0886cae0(void *manager, u8 index);

int FUN_0891fa94(void *unused, u8 index)
{
    s16 *slot = FUN_0886cae0(D_08aace80, index);
    return *slot;
}
