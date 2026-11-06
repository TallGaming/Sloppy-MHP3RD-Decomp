/*
 * FUN_08943910: return a decremented byte from one of three record tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Mode and table roles are hypotheses.
 */

typedef unsigned char u8;
signed char FUN_08943910(void *unused,signed char mode,unsigned index)
{u8 *entry;index&=0xffff;entry=(u8 *)0x08a151e0+index*0x10;if(mode==1|| (entry=(u8 *)0x08a15760+index*0x10,mode==0))return (signed char)(entry[10]-1);if(mode==2)return (signed char)(((u8 *)0x08a15cf2)[index*0x18]-1);return -1;}
