/*
 * FUN_088be994: transfer or publish a pending state value, then clear it.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: pending-state branch scheduling remains longer and differently allocated.
 */
extern void *D_08a31e8c; void FUN_0885794c(void *); void FUN_0885691c(void *);
void FUN_088be994(unsigned char *owner){int value=*(int *)(owner+0x25c0);if(value>0){if(value<4){if(*(int *)(owner+0x25bc)==0){FUN_0885794c(D_08a31e8c);*(int *)(owner+0x25c0)=0;*(int *)(owner+0x25bc)=value;return;}}else if(value<7&&(unsigned)(*(int *)(owner+0x25bc)-4)>2){FUN_0885691c(D_08a31e8c);FUN_0885794c(D_08a31e8c);*(int *)(owner+0x25bc)=value;}}*(int *)(owner+0x25c0)=0;}
