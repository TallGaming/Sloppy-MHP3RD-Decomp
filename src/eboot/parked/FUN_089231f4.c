/*
 * FUN_089231f4: test two global flags and one manager blocker.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Flag roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern u8 *D_09bc1ed8;int FUN_088bdf28(void *);
int FUN_089231f4(void)
{if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)!=0)return 0;if((*(u32 *)(D_08aace80+0x60474)&1)!=0)return 0;return FUN_088bdf28(*(void **)0x09bb7b60)==0;}
