/*
 * FUN_088b72c0: report whether any enabled secondary object passes a query.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global feature checks and external-query control flow remain different.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_09bb7a80; void *FUN_088b5120(void *,int,int,int); int func_0x09ceff38(void *);
int FUN_088b72c0(void){int i;if((*(u32 *)(D_08aace80+0x60474)&1)==0)return 0;i=0;do{void *p=FUN_088b5120(D_09bb7a80,i,1,0);i++;if(p&&func_0x09ceff38(p))return 1;}while(i!=6);return 0;}
