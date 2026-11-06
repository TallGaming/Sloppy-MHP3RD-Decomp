/*
 * FUN_088cb8a0: run the sound-system shutdown sequence while the owner is active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
extern void *D_09bc1ac0; extern void *D_09bb7e70; void FUN_088c64fc(void); void FUN_088dbb38(void *); void FUN_088c3dc8(void *); void FUN_088c46cc(void *); void FUN_088cb728(void *);
void FUN_088cb8a0(unsigned char *owner){if(owner[0x727da0]==0)return;FUN_088c64fc();FUN_088dbb38(D_09bc1ac0);FUN_088c3dc8(D_09bb7e70);FUN_088c46cc(owner);FUN_088cb728(owner);}
