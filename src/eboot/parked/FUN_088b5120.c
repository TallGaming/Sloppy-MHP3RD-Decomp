/*
 * FUN_088b5120: select and optionally validate one of two six-object arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: array selection and optional validation lower differently.
 */
typedef unsigned char u8; int FUN_088b5098(void *,void *);
void *FUN_088b5120(u8 *o,unsigned index,signed char check,int alternate){void *p;if(index>=6)return 0;p=*(void **)(o+(alternate?0x38:0x20)+index*4);if(check==1&&!FUN_088b5098(o,p))return 0;return p;}
