/*
 * FUN_08927fd8: reset state and mark the active object when selected mask bits are set.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. Mask and state roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;void FUN_0886c7fc(void *);void FUN_08921c00(void *);void FUN_0883bac8(void *,int);void *FUN_088b51b8(void *,int,int);
int FUN_08927fd8(u8 *record,unsigned mask)
{u8 *object;if((mask&0x6008)==0)return 0;FUN_0886c7fc(D_08aace80);FUN_08921c00(record);record[0x6d5]=0;FUN_0883bac8(*(void **)0x08a31df0,3);object=(u8 *)FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1);object[0xdd8]=8;return 4;}
