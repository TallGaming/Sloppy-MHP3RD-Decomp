/*
 * FUN_088c6e3c: compute and publish one owner-derived channel value with a selector.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged selector form has exact size but different register allocation.
 */
extern void *D_09bc1ac0; int FUN_088c4a24(void *,int,int); void FUN_088dbc38(void *,int,int,int);
void FUN_088c6e3c(unsigned char *owner,int channel,int selector,int value){int base;if(channel)base=*(int *)(owner+0x727d50);else{base=*(int *)(owner+0x727d54);if(!base)base=*(int *)(owner+0x727d50);}FUN_088dbc38(D_09bc1ac0,channel,selector,FUN_088c4a24(owner,value,base));}
