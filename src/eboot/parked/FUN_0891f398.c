/*
 * FUN_0891f398: initialize the default active record state.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. State roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_0891f398(u8 *record)
{record[0x15]=2;record[0xc]=4;record[0x4bc]=0xff;record[0x4b6]=1;*(u16 *)(record+0x4c0)=1;record[0x1c0]=0;record[0x1c1]=0;record[0x1c5]=0;record[0xd]=0;record[0x1c6]=0;record[0x4bd]=0;record[0x4be]=0;*(u16 *)(record+0x4c2)=0;record[0x4c4]=0;record[0x56c]=0;FUN_0891f02c(record,1,2,0,0,0);FUN_0891f064(record,4);return 1;}
