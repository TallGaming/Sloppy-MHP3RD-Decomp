/*
 * FUN_0891f438: initialize record state six and clear its channel controller.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);void FUN_089031e8(void *,int);
int FUN_0891f438(u8 *record)
{record[0x1c5]=10;record[0xc]=8;record[0xe]=2;record[0x15]=2;record[0x1c0]=0;record[0x1c1]=0;record[0x4ba]=0;FUN_0891f02c(record,1,6,0,0,0);FUN_0891f064(record,-1);FUN_089031e8(record+0x35c,0);return 1;}
