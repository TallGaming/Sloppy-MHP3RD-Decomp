/*
 * FUN_08916248: update child flags from a mask and report selected high bits.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Mask and child roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;
int FUN_08916248(u8 *record,u8 value)
{u32 count=*(u16 *)(*(u8 **)(record+0xdf4)+0x1e),mask=*(u32 *)(record+0x5d4)&*(u32 *)(record+0x5dc),index=0;u8 *entry=*(u8 **)(record+0xdfc);while(index<count){entry[3]=(mask&(1<<(index&31)))!=0?value:0;index++;entry+=0x10;}return (mask&0x78)!=0;}
