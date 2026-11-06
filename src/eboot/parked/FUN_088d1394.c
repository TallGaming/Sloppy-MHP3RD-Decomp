/*
 * FUN_088d1394: process paired variable records while advancing two linked entries.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired linked-record loop remains much shorter with external-call differences.
 */
typedef unsigned char u8; void func_0x09c5ccb8(void *,void *,int);
void FUN_088d1394(void *unused,u8 *a,u8 *b,unsigned count){unsigned limit=(count&0xff)>>1,i=0;int index=0;if(!limit)return;do{func_0x09c5ccb8(a,b,index);i=(i+1)&0xff;a+=*(int *)(a+8);b+=0x10;index++;a+=*(int *)(a+8);}while(i!=limit);}
