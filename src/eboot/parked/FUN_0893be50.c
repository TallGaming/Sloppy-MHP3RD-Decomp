/*
 * FUN_0893be50: clear a record flag and reset state bytes after a successful refresh.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Flag and state roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;int FUN_0893babc(void);void FUN_0893bba8(void *);
void FUN_0893be50(u8 *record)
{*(u32 *)(record+0x48)&=0xffffffef;if(FUN_0893babc()==0)return;FUN_0893bba8(record);record[0x3a]=0;record[0x39]=0;record[0x3b]=0;}
