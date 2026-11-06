/*
 * FUN_0890df40: clear a 0x3070-byte array, reset counters and initialize twenty entries.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Array and entry layouts are hypotheses.
 */

typedef unsigned char u8;void FUN_0880c468(void *,int,unsigned);void FUN_0890d538(void *);
void FUN_0890df40(u8 *record)
{int index=0;*(int *)(record+0x3070)=0;*(int *)(record+0x3074)=0;*(int *)(record+0x3078)=0;FUN_0880c468(record,0,0x3070);do{index++;FUN_0890d538(record);record+=0x26c;}while(index!=0x14);}
