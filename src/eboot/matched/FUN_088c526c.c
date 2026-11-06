/*
 * FUN_088c526c: test a virtual readiness state or an owner override flag.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef int (*Query)(void *); extern void *D_08a3387c;
int FUN_088c526c(unsigned char *owner){int ready=((Query)(*(void ***)D_08a3387c)[13])(D_08a3387c);return ready==1||*(int *)(owner+0x8d18)!=0;}
