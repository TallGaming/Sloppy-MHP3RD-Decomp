/*
 * FUN_0894d3f4: initialize the global record at 0x09BF027C and clear byte 0x14.
 *
 * Main EBOOT, attempt-high-01 batch 4. The global record and field roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_089030a8(void *record, int a, int b, int c, int d);

void FUN_0894d3f4(u8 *record)
{
    FUN_089030a8((void *)0x09bf027c, 0, 0, 1, 1);
    record[0x14] = 0;
}
