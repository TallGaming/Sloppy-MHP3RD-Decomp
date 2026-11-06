/*
 * FUN_0891d3d8: reset a controller record and invoke its virtual initializer.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Field roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;int FUN_088bcd44(void *);
void FUN_0891d3d8(u32 *record)
{int i=0;u8 *bytes=(u8 *)record;record[9]=FUN_088bcd44(*(void **)0x09bb7b60)*0x708;bytes[0x2c]=0xff;record[5]=0;record[6]=0;record[7]=0;record[8]=0;bytes[0x28]=0;bytes[0x29]=0;*(u16 *)(bytes+0x2a)=0xffff;record[0xc]=0;do{record[0xd+i]=-1;record[0x18+i]=0;record[0x1a+i]=0;record[0xf+i]=0;*(u16 *)(bytes+0x44+i*2)=0xffff;record[0x12+i*3]=0;record[0x13+i*3]=0;record[0x14+i*3]=0;i++;}while(i!=2);bytes[0x75]=0xff;bytes[0x74]=0;((void (*)(void *))(*(u32 **)record)[3])(record);}
