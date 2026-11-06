/*
 * FUN_088bcb14: resolve an indexed pointer through the disabled-feature table chain.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: decompilation truncates the enabled path and table-chain lowering differs.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern u8 D_08a33e70[]; extern int D_08a33e88; extern u8 *D_09bc1ed8;
u8 *FUN_088bcb14(void *unused,int index){u8 *base=D_08a33e70;if(*(u32 *)(D_08aace80+0x60474)&1)return 0;return base+*(int *)(base+*(int *)(base+*(int *)(D_08a33e88+(int)base)+*(int *)(D_09bc1ed8+0x10fa34c)*4)+index*4);}
