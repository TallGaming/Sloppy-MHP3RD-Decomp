/*
 * FUN_089225ec: test one global flag and one manager mode.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Mode meaning is a hypothesis.
 */

typedef unsigned int u32;extern unsigned char *D_08aace80;int FUN_088bc890(void *);
int FUN_089225ec(void)
{if((*(u32 *)(D_08aace80+0x60474)&1)!=0)return 0;return FUN_088bc890(*(void **)0x09bb7b60)==3;}
