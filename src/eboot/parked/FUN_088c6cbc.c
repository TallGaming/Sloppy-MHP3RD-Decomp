/*
 * FUN_088c6cbc: compute and publish one owner-derived channel value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged branch form has exact size but different register allocation.
 */
extern void *D_09bc1ac0; int FUN_088c4a24(void *,int,int); void FUN_088dbb14(void *,int,int);
void FUN_088c6cbc(unsigned char *owner,int channel,int value){int base;if(channel)base=*(int *)(owner+0x727d50);else{base=*(int *)(owner+0x727d54);if(!base)base=*(int *)(owner+0x727d50);}FUN_088dbb14(D_09bc1ac0,channel,FUN_088c4a24(owner,value,base));}
