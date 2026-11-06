/*
 * FUN_08926850: test availability through one of two global-mode paths.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Mode roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern void *D_09e5e1a8;int FUN_088b51b8(void *,int,int);int FUN_0889f790(void *,int,int);int FUN_089267a8(void);
int FUN_08926850(void)
{void *object;if((*(u32 *)(D_08aace80+0x60474)&1)==0){object=(void *)FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1);if(object!=0&&FUN_0889f790(object,0xc,10)==0)return 1;}else if(*(int *)D_09e5e1a8==0&&FUN_089267a8()!=0)return 1;return 0;}
