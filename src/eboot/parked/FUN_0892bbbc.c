/*
 * FUN_0892bbbc: activate state two and reset its embedded entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State and entry roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;void FUN_08929b48(void *,int,int);void FUN_088f9ce4(void *,int);void FUN_08902688(void *,int);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
void FUN_0892bbbc(u8 *record,u8 value)
{record[0xd]=value;record[0x1c1]=value;record[0x1c0]=1;FUN_08929b48(record,1,1);record[0x1c6]=(record[0x1c6]&0xf9)|1;FUN_088f9ce4(record+0x4cc,0);FUN_08902688(record+0x4cc,1);*(u32 *)(record+0x4c8)=0;FUN_0891f02c(record,1,2,*(signed char *)(record+0x4be),0,*(signed char *)(record+0x56c));record[0x4b6]=0;FUN_0891f064(record,-1);}
