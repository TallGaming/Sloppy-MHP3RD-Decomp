/*
 * FUN_088cd8f0: invoke an external action for every item in an owner-provided list.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual list traversal and external call lower shorter and different.
 */
typedef void *(*Get)(void *); void func_0x09d5a520(void *);
void FUN_088cd8f0(unsigned char *owner){void *source=*(void **)(owner+0x3030);unsigned char *list;int i;if(!source)return;list=((Get)(*(void ***)source)[2])(source);if(!list||*(short *)(list+2)<1)return;i=0;do{func_0x09d5a520(*(void ***)(list+4)[i]);i++;}while(i<*(short *)(list+2));}
