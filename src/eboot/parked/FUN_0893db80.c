/*
 * FUN_0893db80: construct a temporary 160-byte record and submit it with two options.
 *
 * Main EBOOT, attempt-high-01 batch 3. The temporary record and call roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_08906304(void *temporary);
void FUN_089081e8(void *temporary, int value);
void FUN_08909f88(void *temporary, void *table, int a, int b, int c);

void FUN_0893db80(void *unused, int value)
{
    u8 temporary[160];

    FUN_08906304(temporary);
    FUN_089081e8(temporary, value + 0xa6);
    FUN_08909f88(temporary, (void *)0x08a10f00, 2, 0, 0);
}
