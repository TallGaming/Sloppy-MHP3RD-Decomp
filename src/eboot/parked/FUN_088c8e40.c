/*
 * FUN_088c8e40: select and publish one of two global configuration pairs.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: configuration branches and unsymbolized globals lower longer and different.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_09bb7e70; extern void *D_09bc1ac0; extern int D_089681cc,D_089681d0,D_089681d4,D_089681d8; void FUN_088c3ef8(int,void *); void FUN_088dbc80(int,void *);
void FUN_088c8e40(void){if((*(u32 *)(D_08aace80+0x60474)&1)==0){FUN_088c3ef8(D_089681d4,D_09bb7e70);FUN_088dbc80(D_089681d8,D_09bc1ac0);}else{FUN_088c3ef8(D_089681cc,D_09bb7e70);FUN_088dbc80(D_089681d0,D_09bc1ac0);}}
