/*
 * FUN_08906fb8: derive a signed byte from record state, a classifier and two tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Table and mode meanings are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8;
int FUN_08906a78(void *record,int value);int FUN_08906bb4(void *record);
int FUN_08906fb8(u8 *record)
{
    unsigned index=1;if((u8)(record[3]-1)<0x14)index=record[3];s8 base=*(s8 *)(0x089fd5ef+index*8),result=100;
    if(FUN_08906a78(record,0x18)==0){if(record[0x99]!=5)result=base;return result;}
    index=FUN_08906bb4(record);if(record[0x99]!=5)result=base+*(s8 *)(0x089fd420+index);return result;
}
