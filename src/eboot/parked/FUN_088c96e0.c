/*
 * FUN_088c96e0: finish a sound event, optionally publishing its value before clearing flags.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: flag-update branches remain longer and differently allocated.
 */
typedef unsigned short u16; typedef unsigned int u32; extern void *D_09bb7e78; unsigned FUN_088c94e8(void *,int); void FUN_088c7380(void *,int); void FUN_088c6e3c(void *,int,int,int);
void FUN_088c96e0(unsigned char *record){u16 old=*(u16 *)(record+0xe);u32 flags=*(u32 *)(record+0x1c);if(old==FUN_088c94e8(record,0x1650))FUN_088c7380(D_09bb7e78,1);if((flags&0x22)==0||(flags&0x80)!=0){*(u16 *)(record+0x26)=0;*(u32 *)(record+0x1c)=flags&~8u;return;}*(u32 *)(record+0x1c)=flags&~0x22u;FUN_088c6e3c(D_09bb7e78,0,0xf,*(int *)(record+0x14));*(u16 *)(record+0x26)=0;*(u32 *)(record+0x1c)&=~8u;}
