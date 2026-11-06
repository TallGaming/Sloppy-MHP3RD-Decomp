/*
 * FUN_088b51b8: select and optionally validate one object from a six-entry array.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: array selection and optional validation remain shorter and different.
 */
typedef unsigned char u8; int FUN_088b5098(void *,void *);
void *FUN_088b51b8(u8 *o,unsigned index,signed char check){void *p;if(index>=6)return 0;p=*(void **)(o+8+index*4);if(check==1&&!FUN_088b5098(o,p))return 0;return p;}
