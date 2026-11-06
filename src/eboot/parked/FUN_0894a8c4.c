/*
 * FUN_0894a8c4: replace one selected slot and reset its previous global entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Slot and global-entry roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;void FUN_0894a0c0(void *,int);
void FUN_0894a8c4(u8 *record,void *value,signed char selector)
{u8 *slot=record+0x78+selector*0xc;if(slot[5]!=0xff){u8 *entry=*(u8 **)0x09da9600+0x130+slot[5]*0x30;*(u16 *)(entry+0x20)=0xffff;*(u32 *)(entry+0x14)&=0xfffffffd;}*(void **)slot=value;slot[5]=0xff;if(value==0){slot[4]=0;return;}slot[4]=1;FUN_0894a0c0(record,selector);}
