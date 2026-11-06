/*
 * FUN_088c8b80: return an owner value, optionally scaled in active game modes.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size uncached value form retains ten float/global differences.
 */
extern void *D_09bb7e90; extern float D_089681bc; int FUN_088cca4c(void *);
int FUN_088c8b80(unsigned char *owner){if((*(unsigned *)(owner+0x1c)&0x80)==0||FUN_088cca4c(D_09bb7e90)==0)return *(int *)(owner+0x14);return (int)((float)*(int *)(owner+0x14)*D_089681bc);}
