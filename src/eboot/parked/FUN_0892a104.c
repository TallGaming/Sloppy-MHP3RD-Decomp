/*
 * FUN_0892a104: initialize state ten and its channel controller.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;void FUN_088fb314(void *,int);void FUN_08929b48(void *,int,int);void FUN_0891f064(void *,int);void FUN_0891f02c(void *,int,int,int,int,int);
int FUN_0892a104(u8 *record)
{record[0x15]=1;record[0x1c5]=14;*(u16 *)(record+0x10)=0x268;record[0xc]=4;record[0x1c0]=0;record[0x1c1]=0;record[0xd]=0;FUN_088fb314(record+0x35c,1);FUN_08929b48(record,1,1);FUN_0891f064(record,-1);FUN_0891f02c(record,1,10,*(signed char *)(record+0xd),0,0);return 1;}
