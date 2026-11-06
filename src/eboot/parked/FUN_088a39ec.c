/*
 * FUN_088a39ec: copy indexed table data into a virtual destination.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: table global and repeated virtual-call lowering differ.
 */
typedef unsigned char u8; typedef unsigned int u32;
extern u32 D_089e2800[]; typedef void *(*Method)(void *,int);
void FUN_0880c088(void *,void *,u32);
void FUN_088a39ec(u8 *o,int index,void *src)
{ void **m=*(void ***)o; if(((Method)m[0x1e])(o,index)!=0)
    FUN_0880c088(((Method)m[0x1e])(o,index),src,D_089e2800[index]); }
