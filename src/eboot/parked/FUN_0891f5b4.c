/*
 * FUN_0891f5b4: advance initialization and report the next requested action.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. State and action roles are hypotheses.
 */

typedef unsigned char u8;void FUN_088fb314(void *,int);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);void FUN_0883bac8(void *,int);
int FUN_0891f5b4(u8 *record)
{u8 *global;if(*(signed char *)(record+0x1c0)==0){record[0x1c0]=1;record[0x15]=2;record[0x1c6]=0;FUN_088fb314(record+0x35c,1);FUN_0891f02c(record,0,-1,0,0,0);FUN_0891f064(record,-1);}else if(*(signed char *)(record+0x1c0)!=1)return 0;global=*(u8 **)0x09e73180;if(*(signed char *)(global+0x14)!=0)return 0;if((global[0x18]&8)!=0){FUN_0883bac8(*(void **)0x08a31df0,3);return 4;}return 2;}
