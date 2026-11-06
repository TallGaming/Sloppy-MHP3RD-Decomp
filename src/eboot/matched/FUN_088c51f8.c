/*
 * FUN_088c51f8: clear three owner slots and notify their corresponding global indices.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
extern void *D_09bc1ac0; void FUN_088c51d4(void *,int); void FUN_088db764(void *,int);
void FUN_088c51f8(void *owner){int i=0;do{FUN_088c51d4(owner,i);FUN_088db764(D_09bc1ac0,i+0xf);i++;}while(i!=3);}
