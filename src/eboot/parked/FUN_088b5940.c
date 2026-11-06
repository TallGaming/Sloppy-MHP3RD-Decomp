/*
 * FUN_088b5940: register each occupied primary slot and refresh owner state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: duplicate pointer-loop shape retains different frame allocation.
 */
typedef unsigned char u8; extern void *D_09bb7a5c; void FUN_088a1af0(void *,void *); void FUN_088a1e2c(void *,void *); void FUN_088b56f8(void *);
void FUN_088b5940(u8 *owner){u8 *it=owner,*end=owner+0x18;do{void *p=*(void **)(it+8);if(p){FUN_088a1af0(D_09bb7a5c,p);FUN_088a1e2c(D_09bb7a5c,p);*(void **)(it+0x50)=p;FUN_088b56f8(owner);}it+=4;}while(it!=end);}
