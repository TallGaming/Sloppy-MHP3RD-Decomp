/*
 * FUN_08943d58: select a word from one of three indexed record tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Mode and table roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;
u32 FUN_08943d58(void *unused,signed char mode,unsigned index)
{u8 *entry;index&=0xffff;entry=(u8 *)0x08a151e0+index*0x10;if(mode==1||(entry=(u8 *)0x08a15760+index*0x10,mode==0))return *(u32 *)(entry+0xc);if(mode==2)return *(u32 *)(0x08a15cf4+index*0x18);return 0;}
