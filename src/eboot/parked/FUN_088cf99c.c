/*
 * FUN_088cf99c: run an optional child update and a feature-gated owner update.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size optional updates retain three global/control differences.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; void FUN_088d0444(void); void FUN_088cdde0(void *);
void FUN_088cf99c(u8 *owner){u8 *child=*(u8 **)(owner+0x3034);if(child&&*(void **)(child+0x44))FUN_088d0444();if(*(u32 *)(D_08aace80+0x60474)&0x200)FUN_088cdde0(owner);}
