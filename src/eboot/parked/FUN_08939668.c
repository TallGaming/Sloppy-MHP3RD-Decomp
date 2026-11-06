/*
 * FUN_08939668: submit one enabled child after two overlay readiness checks.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Child role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned int u32;extern void *D_08a31e8c;void FUN_08856638(void *,int,void *,void *,int);
void FUN_08939668(u8 *record)
{u8 *child;if(((int (*)(void))0x09c01f18)()==0||((int (*)(void *))0x09c02010)(record)==0)return;child=*(u8 **)(record+0x58);if((*(u32 *)(child+4)&4)==0)FUN_08856638(D_08a31e8c,6,child,child+0x10,0);}
