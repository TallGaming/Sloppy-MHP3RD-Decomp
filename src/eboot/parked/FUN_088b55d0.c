/*
 * FUN_088b55d0: submit valid entries from one six-slot array.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the single submission loop remains longer and differently allocated.
 */
typedef unsigned char u8; int FUN_088b5098(void *,void *); void FUN_088aba14(void *);
void FUN_088b55d0(u8 *owner){u8 *it=owner,*end=owner+0x18;do{void *p=*(void **)(it+0x38);if(FUN_088b5098(owner,p))FUN_088aba14(p);it+=4;}while(it!=end);}
