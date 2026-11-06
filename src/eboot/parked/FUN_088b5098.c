/*
 * FUN_088b5098: validate an optional object through two virtual predicates.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: combined virtual predicate lowers to a longer control flow.
 */
typedef int (*Query)(void *);
int FUN_088b5098(void *unused,void *o){void **m;if(!o)return 0;m=*(void ***)o;return ((Query)m[0x29])(o)!=0&&((Query)m[0x15])(o)!=0;}
