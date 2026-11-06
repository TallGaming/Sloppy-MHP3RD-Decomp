/*
 * FUN_0894a954: set or clear one slot mask and release the associated global entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Slot and mask roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;typedef unsigned int u32;
void FUN_0894a954(u8 *record,unsigned bit,u8 *slot)
{u8 mask=(u8)(1<<(bit&31)),index=slot[4];u8 *target=record+index*0x14;if(*(s16 *)(slot+6)!=0){target[0x10]|=mask;return;}target[0x10]&=(u8)~mask;target=*(u8 **)0x09da9600+0x130+index*0x30;if(target!=0)*(u32 *)(target+0x14)&=0xfffffffd;}
