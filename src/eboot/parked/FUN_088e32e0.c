/*
 * FUN_088e32e0: classify the selected object through three ordered queries.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size ordered queries retain three global/external differences.
 */
typedef unsigned char u8; typedef int (*Query)(void *,int); extern u8 *D_08aace80; extern void *D_09bb7a80; void *FUN_088b51b8(void *,int,int); int func_0x09ceb270(void *); int FUN_0889f790(void *,int,int);
int FUN_088e32e0(void){u8 *p=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],0);if(func_0x09ceb270(p))return 1;if(((Query)(*(void ***)p)[85])(p,1))return 2;if(FUN_0889f790(p,0xd,0xf))return 3;if(p[0x62]==4||p[0x62]==6)return 0;return 0xff;}
