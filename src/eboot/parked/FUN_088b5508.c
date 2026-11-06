/*
 * FUN_088b5508: submit valid entries from two six-slot arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the paired submission loops remain longer with different control flow.
 */
typedef unsigned char u8; int FUN_088b5098(void *,void *); void FUN_088aba14(void *);
void FUN_088b5508(u8 *owner){u8 *it=owner,*end=owner+0x18;do{void *p=*(void **)(it+8);if(FUN_088b5098(owner,p))FUN_088aba14(p);it+=4;}while(it!=end);it=owner;do{void *p=*(void **)(it+0x20);if(FUN_088b5098(owner,p))FUN_088aba14(p);it+=4;}while(it!=end);}
