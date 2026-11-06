/*
 * FUN_088be2f8: validate a command byte against the current table mode.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: unsymbolized mode tables and switch lowering remain shorter and different.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 D_08a33e70[];
int FUN_088be2f8(void *unused,char command){int base=*(int *)D_08a33e70;int mode;if((*(u32 *)(D_08a33e70+base)&0x10000000)==0)return 0;mode=D_08a33e70[base+0x20];switch(mode){case 1:case 14:return command==11;case 2:case 3:case 4:case 15:case 16:case 17:return command==0;case 5:case 18:return command==10;case 12:case 19:return command==3;default:return 0;}}
