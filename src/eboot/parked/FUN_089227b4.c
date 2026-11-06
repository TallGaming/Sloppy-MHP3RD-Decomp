/*
 * FUN_089227b4: select a mode from global flag 0x200 and a secondary state byte.
 *
 * Main EBOOT, attempt-high-01 batch 3. Global layouts and mode meanings are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;
void FUN_0891f064(void *record, int mode);

void FUN_089227b4(void *record)
{
    int mode = -1;

    if ((*(u32 *)(D_08aace80 + 0x60474) & 0x200) != 0) {
        mode = 0x1d;
        if ((*(u8 **)0x08aacea0)[0x347c] != 1)
            mode = 0x1b;
    }
    FUN_0891f064(record, mode);
}
