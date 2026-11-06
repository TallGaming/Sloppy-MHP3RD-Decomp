/*
 * FUN_0890e68c: destroy twenty embedded entries, remember the owner and clear it.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Layout roles are hypotheses.
 */

typedef unsigned char u8; void FUN_088f9cd0(void *); void FUN_0880c468(void *,int,unsigned);
void FUN_0890e68c(u8 *record)
{int count=20;u8 *entry=record;*(u8 **)0x09beb424=record;do{count--;FUN_088f9cd0(entry+0x21c);entry+=0x26c;}while(count!=0);FUN_0880c468(record,0,0x3070);}
