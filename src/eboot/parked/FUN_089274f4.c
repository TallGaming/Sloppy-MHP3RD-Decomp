/*
 * FUN_089274f4: test active-object flags and one state query.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. State meanings are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern u8 *D_09bc1ed8;void *FUN_088b51b8(void *,int,int);int FUN_0889f790(void *,int,int);
int FUN_089274f4(void)
{u8 *object=(u8 *)FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],0);if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)==0||object==0||(*(u32 *)(object+0xba0)&8)!=0||object[0x18c]==0xe||FUN_0889f790(object,0,0xd)!=0)return 0;return 1;}
