/*
 * FUN_0891913c: return a selected half-word from the secondary record group.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Selector role is a hypothesis.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d510(void *);
int FUN_0891913c(u8 *record)
{signed char index=record[0x88];u8 *base;if(index==-1||(base=(u8 *)FUN_0891d510(record),base==0))return -1;return *(s16 *)(base+index*0x34+4);}
