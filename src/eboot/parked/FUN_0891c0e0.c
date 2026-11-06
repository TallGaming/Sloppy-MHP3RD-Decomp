/*
 * FUN_0891c0e0: reset four headers and initialize ten embedded entries.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Header and table roles are hypotheses.
 */

typedef unsigned char u8;void FUN_08902e04(void *,void *,int);void FUN_088f9ce4(void *,int);
void FUN_0891c0e0(u8 *record)
{int count=0;u8 *header=record,*entry;void **table;do{count++;header[0]=0xff;header[1]=0;header[2]=0;header[3]=0x40;header+=4;}while(count!=4);entry=record+0x10;table=(void **)0x08a04c78;count=0;do{FUN_08902e04(entry,table,1);count++;FUN_088f9ce4(entry,0);entry+=0x50;table+=6;}while(count!=10);}
