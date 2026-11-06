/*
 * FUN_08907bb4: reset four modes, three fields and two switches, then finalize a record.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Mode and field roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;
void FUN_08906800(void *record,int mode);void FUN_0890652c(void *record,int value);void FUN_089079b0(void *record);
void FUN_08907bb4(u8 *record)
{
    FUN_08906800(record,3);FUN_08906800(record,4);FUN_08906800(record,0x18);FUN_08906800(record,0x20);
    *(u16 *)(record+0x96)=1;*(u16 *)(record+6)=0;*(u16 *)(record+0x5a)=0;
    FUN_0890652c(record,1);FUN_0890652c(record,0);FUN_089079b0(record);record[0x9a]=0;
}
