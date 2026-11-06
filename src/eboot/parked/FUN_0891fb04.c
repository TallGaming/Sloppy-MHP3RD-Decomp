/* FUN_0891fb04: validate an item and start its loader with mode-specific flags.
 * Main EBOOT, attempt-high-01 241-512 byte batch 10. Loader roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;extern void *D_09befbd4,*D_08a31df0;extern u8 D_089caf8e[];int FUN_08943e8c(void*,u16);int FUN_08943fb0(void*,u16*);int FUN_0883ee50(void*,int,u8,u8,int,int);
void FUN_0891fb04(int unused,int *status,int *result,u16 *item,u8 option){if(FUN_08943e8c(D_09befbd4,item[0])==0||FUN_08943fb0(D_09befbd4,item)==0)*status=10;else *status=0;if(*status==0){*result=FUN_0883ee50(D_08a31df0,(short)item[1],D_089caf8e[item[0]*20],option,0,1);return;}if(*status==10){*result=FUN_0883ee50(D_08a31df0,(short)item[1],D_089caf8e[item[0]*20],0,0,0);return;}}
