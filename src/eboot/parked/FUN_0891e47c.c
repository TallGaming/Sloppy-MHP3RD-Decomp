/*
 * FUN_0891e47c: submit an active child when all overlay state checks pass.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. State meanings are hypotheses.
 */

typedef unsigned char u8;extern void *D_08a31e8c;int FUN_088a0030(void *);void FUN_08856638(void *,int,void *,void *,int);
void FUN_0891e47c(u8 *record)
{u8 *child;if(((int (*)(void))0x09c02010)()==0||*(int *)(record+0x5c)!=0x1c||*(int *)(record+0x60)!=1)return;child=*(u8 **)(record+0x58);if(child!=0&&FUN_088a0030(*(void **)(record+0xc))==1&&record[0x430]!=0)FUN_08856638(D_08a31e8c,8,child,child+0x10,1);}
