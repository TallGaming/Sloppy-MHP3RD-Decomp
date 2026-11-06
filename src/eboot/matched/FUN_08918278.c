/*
 * FUN_08918278: set a record flag when the current group and target agree.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Flag role is a hypothesis.
 */

typedef unsigned char u8;int FUN_0891d4b4(void);void *FUN_0891d4c0(void *,int);
void FUN_08918278(u8 *record,void *target)
{if(FUN_0891d4b4()==0)return;if(FUN_0891d4c0(record,0)!=target)return;record[0x76]=1;}
