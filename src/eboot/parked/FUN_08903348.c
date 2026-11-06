/*
 * FUN_08903348: initialize six records, reset three pairs, then finalize them.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Record grouping is a hypothesis.
 */

typedef unsigned char u8;
void FUN_08903280(void *record); void FUN_088fad30(void *record,int value); void FUN_08902cd8(void *record);

void FUN_08903348(u8 *record)
{
    int index=0, offset=0; FUN_08903280(record); record[0x240]=1;
    do {
        FUN_088fad30(record+offset,0); FUN_088fad30(record+0xc0+offset,0); index++;
        FUN_088fad30(record+0x180+offset,0); offset+=0x60;
    } while(index!=2);
    FUN_08902cd8(record);
}
