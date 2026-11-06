/*
 * FUN_08906f08: derive a signed byte from a table and three record conditions.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Table and condition meanings are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8;
int FUN_08906a78(void *record,int value);
int FUN_08906f08(u8 *record)
{
    unsigned index=1;if((u8)(record[3]-1)<0x14)index=record[3];
    s8 result=*(s8 *)(0x089fd5ed+index*8);if(FUN_08906a78(record,0x15)!=0)result+=5;
    if(FUN_08906a78(record,0x16)!=0)result+=15;if(record[0x99]==3)result+=20;return result;
}
