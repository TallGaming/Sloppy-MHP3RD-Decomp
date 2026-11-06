/*
 * FUN_0892a064: initialize state fifteen and reset its auxiliary subsystem.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_08929b48(void *,int,int);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);void FUN_0890899c(int);
int FUN_0892a064(u8 *record)
{record[0x15]=1;record[0x1c5]=15;record[0x1c0]=0;record[0x1c1]=0;record[0x1c6]=0;FUN_08929b48(record,1,1);record[0xc]=3;record[0xd]=0;record[0x4ba]=0;FUN_0891f02c(record,0,-1,0,0,0);FUN_0891f064(record,-1);FUN_0890899c(0);return 1;}
