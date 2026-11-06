/*
 * FUN_088b580c: acquire an object, configure it, and run its activation hooks.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: all ordinary words match; the external direct-call relocation is unresolved.
 */
typedef void (*Method)(void *); void *FUN_088b5120(); void func_0x09cf0844(void *,unsigned,unsigned); void FUN_08916248(void *,unsigned);
void *FUN_088b580c(void *owner,unsigned slot,unsigned a,unsigned b){void *p=FUN_088b5120(owner,slot,0);if(p){func_0x09cf0844(p,a,b);((Method)(*(void ***)p)[46])(p);((Method)(*(void ***)p)[3])(p);FUN_08916248(p,0xff);}return p;}
