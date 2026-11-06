/*
 * FUN_08922738: choose one of two record modes and publish its converted setting.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Mode roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;int FUN_08922330(void *,int);void FUN_088c8ed8(void *,int);
void FUN_08922738(u8 *record)
{int offset=1;if((*(u32 *)(D_08aace80+0x60474)&1)==0)offset=9;D_08aace80[0x5fbd5]=(u8)FUN_08922330(record,*(signed char *)(record+0x8e2+offset));FUN_088c8ed8(*(void **)0x09bb7e78,*(signed char *)(D_08aace80+0x5fbd5));}
