/*
 * FUN_0891f094: initialize six embedded entries from consecutive table records.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Entry and table roles are hypotheses.
 */

typedef unsigned char u8;void FUN_08902e04(void *,void *,int);
void FUN_0891f094(u8 *record)
{int count=0;u8 *entry=record+0xf7c,*table=(u8 *)0x08a07808;do{table+=0x18;count++;FUN_08902e04(entry,table,1);entry+=0x50;}while(count!=3);FUN_08902e04(record+0x106c,(void *)0x08a07820,1);FUN_08902e04(record+0x10bc,(void *)0x08a07838,1);FUN_08902e04(record+0x110c,(void *)0x08a06d7c,1);}
