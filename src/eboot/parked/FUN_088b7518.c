/*
 * FUN_088b7518: find the first eligible unblocked object while a feature is disabled.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual-query and large-offset byte-check scheduling remain longer.
 */
typedef unsigned char u8; typedef unsigned int u32; typedef int (*Query)(void *); extern u8 *D_08aace80; extern void *D_09bb7a80; void *FUN_088b5120(void *,int,int,int);
void *FUN_088b7518(void){int i;if(*(u32 *)(D_08aace80+0x60474)&1)return 0;i=0;do{u8 *p=FUN_088b5120(D_09bb7a80,i,0,0);i++;if(p&&((Query)(*(void ***)p)[77])(p)&&p[0x2fdb6]==0)return p;}while(i!=6);return 0;}
