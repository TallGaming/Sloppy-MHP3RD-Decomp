/*
 * FUN_08949ca4: find a matching active entry and initialize its timer.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. The recovered boundary is incomplete.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;
void FUN_08949ca4(u32 *slots,u16 value)
{int index=0;do{u8 *entry;index++;if(*(signed char *)(slots+1)!=0&&(entry=*(u8 **)slots)!=0&&*(u16 *)(entry+6)==(value&0xff)&&*(signed char *)(entry+4)!=0){if(*(short *)(entry+0x24)==0)*(u16 *)(entry+0x24)=100;return;}slots+=5;}while(index!=6);}
