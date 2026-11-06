/*
 * FUN_088e3054: update owner short fields from global input or clear them.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: conditional short-field updates remain longer with global differences.
 */
typedef unsigned char u8; typedef unsigned short u16; extern u8 *D_08a29198; extern u8 *D_09bb7a60; int FUN_088e2f4c(void);
void FUN_088e3054(u8 *o){if(D_08a29198[0xdef]==0&&D_08a29198[0xc31]==0){if(FUN_088e2f4c()){*(u16 *)(o+0x124)=*(u16 *)(D_08a29198+0xdd0);*(u16 *)(o+0x126)=*(u16 *)(D_08a29198+0xdd2);*(u16 *)(o+0x13e)=*(u16 *)(D_08a29198+0xdd6);*(u16 *)(o+0x140)=*(u16 *)(D_08a29198+0xdd8);return;}if(D_09bb7a60[0x74]==0){*(u16 *)(o+0x124)=*(u16 *)(D_08a29198+0xdd0)&0x100;*(u16 *)(o+0x126)=*(u16 *)(D_08a29198+0xdd2)&0x100;return;}}*(u16 *)(o+0x124)=0;*(u16 *)(o+0x126)=0;}
