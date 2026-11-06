/*
 * FUN_088b52e8: invoke one virtual method across two six-object arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef void (*Call)(void *);void *FUN_088b51b8(void *,unsigned,signed char);void *FUN_088b5120(void *,unsigned,signed char,int);
void FUN_088b52e8(void *o){int i;for(i=0;i<6;i++){void *p=FUN_088b51b8(o,i,1);if(p)((Call)(*(void ***)p)[50])(p);}for(i=0;i<6;i++){void *p=FUN_088b5120(o,i,1,0);if(p)((Call)(*(void ***)p)[50])(p);}}
