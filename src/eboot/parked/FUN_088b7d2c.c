/*
 * FUN_088b7d2c: prepare state, then invoke a virtual action on two six-slot arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired valid-object loops remain longer and differently allocated.
 */
typedef unsigned char u8; typedef void (*Action)(void *); void FUN_088b7bb0(void); int FUN_088b5098(void *,void *);
void FUN_088b7d2c(u8 *owner){int i;FUN_088b7bb0();for(i=0;i<6;i++){void *p=*(void **)(owner+8+i*4);if(FUN_088b5098(owner,p))((Action)(*(void ***)p)[4])(p);}for(i=0;i<6;i++){void *p=*(void **)(owner+0x20+i*4);if(FUN_088b5098(owner,p))((Action)(*(void ***)p)[4])(p);}}
