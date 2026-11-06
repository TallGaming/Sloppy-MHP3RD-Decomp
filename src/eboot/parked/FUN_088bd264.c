/*
 * FUN_088bd264: accept invalid/out-of-range records or defer to an owner virtual check.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: guard simplification and virtual tail-call lowering are much shorter.
 */
typedef int (*Check)(void *);
int FUN_088bd264(unsigned char *owner,unsigned char *record){short id;if(!record)return 1;id=*(short *)(record+0xd14);if(id==-1||id>9999)return 1;{void *p=*(void **)(owner+0x1018);return ((Check)(*(void ***)p)[15])(p);}}
