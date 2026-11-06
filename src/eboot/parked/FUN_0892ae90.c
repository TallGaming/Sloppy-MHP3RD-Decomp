/*
 * FUN_0892ae90: initialize state seven and optionally notify an overlay object.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;void FUN_0891f064(void *,int);void FUN_088fb314(void *,int);void FUN_08929b48(void *,int,int);void FUN_0891f02c(void *,int,int,int,int,int);
int FUN_0892ae90(u8 *record)
{record[0x15]=1;record[0x1c0]=0;record[0x1c1]=0;record[0x1c5]=4;record[0x4ba]=0;record[0x1c6]=0;FUN_0891f064(record,-1);FUN_088fb314(record+0x35c,1);record[0xc]=4;record[0xd]=0;FUN_08929b48(record,1,1);FUN_0891f02c(record,1,7,*(signed char *)(record+0xd),0,0);if((*(u32 *)(D_08aace80+0x60474)&1)!=0)((void (*)(void *))0x09c5fdf0)(*(void **)0x09c49568);return 1;}
