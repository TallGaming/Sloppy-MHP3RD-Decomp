/*
 * FUN_0892c550: reset record buffers and initialize state two.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Buffer and state roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0880c468(void *,int,unsigned);void FUN_0891fac4(void *);void FUN_088f9ce4(void *,int);void FUN_0892c314(void);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_0892c550(u8 *record)
{record[0x4bc]=0xff;FUN_0880c468(record+0x61c,0,0x4c);FUN_0891fac4(record);record[0x15]=2;record[0x4b6]=1;record[0x1c5]=1;record[0x577]=0;record[0x56c]=0;record[0x1c6]=0;record[0x579]=0;FUN_088f9ce4(record+0x57c,0);FUN_088f9ce4(record+0x5cc,0);FUN_0892c314();FUN_0891f02c(record,1,2,0,0,0);FUN_0891f064(record,4);return 1;}
