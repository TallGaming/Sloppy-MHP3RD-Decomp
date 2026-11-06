/*
 * FUN_088c52d8: test a second virtual readiness state or an owner override flag.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef int (*Query)(void *,int); extern void *D_08a3387c;
int FUN_088c52d8(unsigned char *owner){int ready=((Query)(*(void ***)D_08a3387c)[15])(D_08a3387c,2);return ready==1||*(int *)(owner+0x8d18)!=0;}
