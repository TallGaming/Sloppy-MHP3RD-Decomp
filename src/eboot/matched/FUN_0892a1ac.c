/*
 * FUN_0892a1ac: initialize state thirteen and clear its auxiliary flag.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_088fb314(void *,int);void FUN_0891f064(void *,int);void FUN_08929b48(void *,int,int);
int FUN_0892a1ac(u8 *record)
{record[0x15]=1;record[0x1c5]=13;record[0xc]=3;record[0x66a]=0;record[0x1c0]=0;record[0x1c1]=0;record[0xd]=0;FUN_088fb314(record+0x35c,1);FUN_0891f064(record,-1);FUN_08929b48(record,1,1);return 1;}
