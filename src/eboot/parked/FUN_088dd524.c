/*
 * FUN_088dd524: copy selected vector and short state fields within an owner record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: compiler loop formation makes selected field copies longer and different.
 */
typedef unsigned int u32; typedef unsigned short u16;
void FUN_088dd524(unsigned char *o,unsigned mask){int i;if(mask&1)for(i=0;i<4;i++)((u32 *)(o+0xb0))[i]=((u32 *)(o+0xa0))[i];if(mask&2)for(i=0;i<4;i++)((u32 *)(o+0xd0))[i]=((u32 *)(o+0xc0))[i];if(mask&4)*(u16 *)(o+0x106)=*(u16 *)(o+0x104);if(mask&8)*(u16 *)(o+0x10a)=*(u16 *)(o+0x108);if(mask&0x10)*(u16 *)(o+0x112)=*(u16 *)(o+0x110);if(mask&0x20)*(u16 *)(o+0x11a)=*(u16 *)(o+0x118);if(mask&0x40)*(u16 *)(o+0x122)=*(u16 *)(o+0x120);if(mask&0x80)*(u16 *)(o+0x12a)=*(u16 *)(o+0x128);}
