/*
 * FUN_0894abe0: advance a three-state byte when a high flag is active.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. The recovered boundary is incomplete.
 */

typedef unsigned char u8;typedef unsigned short u16;
void FUN_0894abe0(u8 *record)
{signed char state;if((*(u16 *)(record+0x4b18)&0x1000)==0)return;state=*(signed char *)(record+0x17)+1;record[0x17]=(u8)state;if(state>=3)record[0x17]=0;}
