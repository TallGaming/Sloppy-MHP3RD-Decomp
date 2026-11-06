/*
 * FUN_088b86c0: toggle a state byte on four objects other than the selected one.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: selected-object and toggle-loop allocation remain shorter and different.
 */
typedef unsigned char u8; extern u8 *D_08aace80; extern void *D_09bb7a80; u8 *FUN_088b51b8(void *,int,int);
void FUN_088b86c0(void *unused,char clear){int i=0;u8 *selected=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],1);do{u8 *p=FUN_088b51b8(D_09bb7a80,i,1);if(p&&p!=selected)p[0x144e]=clear==1?0:1;i++;}while(i!=4);}
