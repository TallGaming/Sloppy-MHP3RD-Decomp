/*
 * FUN_089115d4: submit one enabled child record when the overlay is ready.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Record roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern void *D_08a31e8c;void FUN_08856638(void *,int,void *,void *,int);
void FUN_089115d4(u8 *record)
{u8 *child;if(((int (*)(void))0x09c01f18)()==0)return;child=*(u8 **)(record+0x58);if((*(u32 *)(child+4)&4)==0)FUN_08856638(D_08a31e8c,8,child,child+0x10,0);}
