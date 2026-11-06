/*
 * FUN_088bf950: mark shutdown, notify subobjects, and invoke the owner's close method.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef void (*Close)(void *); void FUN_0891dccc(void *); void FUN_088f6524(void *);
void FUN_088bf950(unsigned char *owner){void *p;owner[0x25c5]=1;p=*(void **)(owner+0x1018);if(p)FUN_0891dccc(p);FUN_088f6524(owner+0x1820);p=*(void **)(owner+0x10);if(p)((Close)(*(void ***)p)[12])(p);}
