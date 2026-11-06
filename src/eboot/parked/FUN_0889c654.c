/*
 * FUN_0889c654: reset a graphics mode and append five command words.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: graphics context and command-cursor globals lack absolute symbols.
 */

typedef unsigned int u32;

extern void *D_08ab156c;
extern u32 *D_08a31e88;
void FUN_08883d94(void *context, int value);

void FUN_0889c654(void)
{
    u32 *commands;

    FUN_08883d94(D_08ab156c, 0);
    commands = D_08a31e88;
    D_08a31e88 = commands + 5;
    commands[0] = 0x5f000000;
    commands[1] = 0x60000000;
    commands[2] = 0xc0000000;
    commands[3] = 0x5cffffff;
    commands[4] = 0x17000001;
}
