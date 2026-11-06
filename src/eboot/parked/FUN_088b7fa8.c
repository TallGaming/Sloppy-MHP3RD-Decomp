/*
 * FUN_088b7fa8: assemble a compact stack descriptor from one fixed-size record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: stack-descriptor layout and copy-loop lowering remain different.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; extern u8 *D_08aace80; void FUN_088b601c(void *,void *);
struct Descriptor{u32 packed;u8 pair[2];u16 values[3];u32 copy;void *pair_ptr;u32 copied_word;};
void FUN_088b7fa8(void *owner,int index){u8 *p=D_08aace80+index*0xfc+0x30;struct Descriptor d;int i;d.packed=((u32)*(u16 *)(p+0x4e)<<16)|((u32)p[0x76]<<8);d.pair[0]=p[0x50];d.pair[1]=p[0x51];for(i=0;i<3;i++)d.values[i]=*(u16 *)(p+0x52+i*2);d.copy=d.packed;d.pair_ptr=d.pair;d.copied_word=*(u32 *)&d.values[1];FUN_088b601c(owner,&d);}
