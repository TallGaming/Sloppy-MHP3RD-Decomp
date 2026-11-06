/*
 * FUN_08913dec: accept a record unless a selected state query succeeds.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. State meanings are hypotheses.
 */

typedef unsigned char u8;int FUN_0889f790(void *,int,int);
int FUN_08913dec(u8 *record)
{char state;int value=7,result=1;u8 *owner=*(u8 **)(record+0xc);state=*(char *)(owner+0x62);if((state==7||(value=10,state==1))&&FUN_0889f790(owner,4,value)!=0)result=0;return result;}
