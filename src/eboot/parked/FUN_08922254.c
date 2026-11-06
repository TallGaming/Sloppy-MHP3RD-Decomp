/*
 * FUN_08922254: reset option buffers and initialize four embedded entries.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Buffer and table roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0880c468(void *,int,unsigned);void FUN_089035c0(void *,void *);void FUN_08902e04(void *,void *,int);void FUN_089221e0(void *);
void FUN_08922254(u8 *record)
{int count=0;u8 *entry=record+0x99c;void **table=(void **)0x08a09c28;FUN_0880c468(record+0x8e2,0,10);FUN_0880c468(record+0x8ec,0,10);FUN_089035c0(record+0x8f8,(void *)0x08a095b0);do{count++;FUN_08902e04(entry,table,1);entry+=0x50;table+=6;}while(count!=4);FUN_089221e0(record);record[0x8ee]=0;record[0x8ec]=*(u8 *)0x089c76e3;record[0x8ed]=0;}
