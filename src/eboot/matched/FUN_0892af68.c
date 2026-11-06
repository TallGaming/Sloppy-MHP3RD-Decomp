/*
 * FUN_0892af68: clear a state unless a guarded mode is already active.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. Guard role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned int u32;int FUN_089225ec(void);void FUN_08929b48(void *,int,int);
void FUN_0892af68(u8 *record)
{if((*(u32 *)(record+8)&0xffff0000)==0x04000000&&FUN_089225ec()!=0)return;*(u32 *)(record+0x24)=1;FUN_08929b48(record,0,0);}
