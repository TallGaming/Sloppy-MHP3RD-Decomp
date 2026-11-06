/*
 * FUN_088bb854: ensure a populated record has an object, then query its readiness.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: all ordinary operations match; one local jump target encoding differs.
 */
typedef unsigned char u8; typedef int (*Query)(void *); extern u8 *D_08aace80; void *FUN_088b51b8(void *,int,int); void *FUN_088bb550(void *,int); void FUN_088b56a4(void *,void *,int,int);
int FUN_088bb854(void *owner,int index){void *p;int result=1;if(D_08aace80[index*0xfc+0x30]){p=FUN_088b51b8(owner,index,0);if(!p){p=FUN_088bb550(owner,index);FUN_088b56a4(owner,p,index,1);}if(!((Query)(*(void ***)p)[37])(p))result=0;}return result;}
