/*
 * FUN_088b7178: broadcast a byte to six secondary objects when a feature is enabled.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: feature/global loads and the external broadcast call remain different.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_09bb7a80; void *FUN_088b5120(void *,int,int,int); void func_0x09cf0bd8(void *,u8);
void FUN_088b7178(void *unused,u8 value){int i;if((*(u32 *)(D_08aace80+0x60474)&1)==0)return;i=0;do{void *p=FUN_088b5120(D_09bb7a80,i,1,0);i++;if(p)func_0x09cf0bd8(p,value);}while(i!=6);}
