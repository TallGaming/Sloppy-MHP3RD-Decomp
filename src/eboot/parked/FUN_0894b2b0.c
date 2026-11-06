/*
 * FUN_0894b2b0: return a valid global entry for a small signed index.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Entry role is a hypothesis.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_08906550(void *);
void *FUN_0894b2b0(u8 *record)
{signed char index=*(signed char *)(record+10);u8 *entry;if(index>=5)return 0;entry=D_08aace80+index*0xa0+0x5daec;if(FUN_08906550(entry)!=0)return entry;return 0;}
