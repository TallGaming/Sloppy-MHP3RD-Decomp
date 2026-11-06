/*
 * FUN_088b53a8: invoke a virtual action on valid entries in two six-slot arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two array loops retain different control flow and register allocation.
 */
typedef unsigned char u8; typedef void (*Action)(void *);
int FUN_088b5098(void *,void *);
void FUN_088b53a8(u8 *owner){u8 *it=owner,*end=owner+0x18;do{void *p=*(void **)(it+8);if(FUN_088b5098(owner,p))((Action)(*(void ***)p)[5])(p);it+=4;}while(it!=end);it=owner;do{void *p=*(void **)(it+0x20);if(FUN_088b5098(owner,p))((Action)(*(void ***)p)[5])(p);it+=4;}while(it!=end);}
