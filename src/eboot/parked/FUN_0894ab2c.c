/*
 * FUN_0894ab2c: release a stored handle and reset two global subsystems.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Handle and subsystem roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;extern u8 *D_09e5e1a8;void FUN_088b6614(void *,void *);void FUN_0882bac4(void *,int);
void FUN_0894ab2c(u8 *record)
{FUN_088b6614(*(void **)0x09bb7a80,*(void **)(record+0x4a5c));*(u32 *)(record+0x4a5c)=0;*(u16 *)(D_09e5e1a8+0x1a)=0x14;*(u32 *)D_09e5e1a8=0;FUN_0882bac4(*(void **)0x08a29198,0);record[0]=0;}
