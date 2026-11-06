/*
 * FUN_0891f4c4: initialize record state five from a signed mode byte.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_0891f4c4(u8 *record)
{record[0x15]=2;record[0x1c5]=9;record[0x1c0]=0;record[0x1c1]=0;record[0x1c6]=0;record[0x4ba]=0;FUN_0891f02c(record,1,5,*(signed char *)(record+0x8e2),0,0);FUN_0891f064(record,-1);record[0x8e0]=1;record[0x8e1]=0;return 1;}
