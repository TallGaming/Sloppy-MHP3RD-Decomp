/*
 * FUN_088bf570: latch a one-time flag, set an owner code, and request a mode change.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: decompilation truncates the post-call path and the draft is much shorter.
 */
typedef unsigned char u8; extern u8 *D_08aace80; extern void *D_09bb7e90; void FUN_088cf68c(void *,int);
void FUN_088bf570(u8 *owner){if(D_08aace80[0x6b1]==0){D_08aace80[0x6b1]=1;*(int *)(owner+0x21ec)=0x1518;FUN_088cf68c(D_09bb7e90,0x81);}}
