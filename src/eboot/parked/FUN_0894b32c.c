/*
 * FUN_0894b32c: return a valid global entry for a bounded stored index.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Entry role is a hypothesis.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_08906550(void *);
void *FUN_0894b32c(u8 *record)
{int index=*(int *)(record+0x4a58);u8 *entry;if(index==-1||index>=0x19)return 0;entry=D_08aace80+index*0xa0+0x5daec;if(FUN_08906550(entry)!=0)return entry;return 0;}
