/*
 * FUN_088b5480: invoke a virtual action on valid entries in a six-slot array.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the valid-entry loop remains longer and differently allocated.
 */
typedef unsigned char u8; typedef void (*Action)(void *);
int FUN_088b5098(void *,void *);
void FUN_088b5480(u8 *owner){u8 *it=owner,*end=owner+0x18;do{void *p=*(void **)(it+0x38);if(FUN_088b5098(owner,p))((Action)(*(void ***)p)[5])(p);it+=4;}while(it!=end);}
