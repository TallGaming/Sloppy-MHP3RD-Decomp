/*
 * FUN_088c97b8: compute and publish a sound value, then update record flags.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size value update retains three global/register differences.
 */
typedef unsigned short u16; typedef unsigned int u32; extern void *D_09bb7e78; unsigned FUN_088c94e8(void *,u16); void FUN_088c7130(void *,int,u16);
void FUN_088c97b8(unsigned char *record,u16 value){unsigned mapped=FUN_088c94e8(record,value);FUN_088c7130(D_09bb7e78,1,mapped);*(short *)(record+0xe)=mapped;*(u32 *)(record+0x1c)=(*(u32 *)(record+0x1c)&~0x20u)|2;}
