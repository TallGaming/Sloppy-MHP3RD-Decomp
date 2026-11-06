/*
 * FUN_088d1450: process paired linked records while advancing twice per iteration.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired linked-record loop remains shorter with external-call differences.
 */
typedef unsigned char u8; void func_0x09c00534(void *,void *);
void FUN_088d1450(void *unused,u8 *a,u8 *b,unsigned count){unsigned limit=(count&0xff)>>1,i=0;if(!limit)return;do{func_0x09c00534(a,b);i=(i+1)&0xff;a+=*(int *)(a+8);b+=0x10;a+=*(int *)(a+8);}while(i!=limit);}
