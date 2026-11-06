/*
 * FUN_08906c14: select a signed result from a classification table and record mode.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Table and mode meanings are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8;
int FUN_08906a78(void *record,int value); int FUN_08906bb4(void *record);
int FUN_08906c14(u8 *record)
{
    int base=0;char adjusted=10;char mode;
    if(FUN_08906a78(record,0x17)!=0){int index=FUN_08906bb4(record);base=*(s8 *)(0x089fd428+index);adjusted=(char)base+10;}
    mode=record[0x98];if(mode==3)return adjusted;if(mode==9)return (s8)((char)base-10);return base;
}
