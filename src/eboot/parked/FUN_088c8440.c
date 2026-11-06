/*
 * FUN_088c8440: publish one value across channels, conditionally skipping channel twenty.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size conditional loop retains six global/control differences.
 */
extern void *D_09bb7b60; extern void *D_09bb7e70; int FUN_088be1c4(void *); void FUN_088c3e58(void *,int,int); void FUN_088c3edc(void *,int,int,int);
void FUN_088c8440(void *unused,int value,char suppress){int i=1;do{if(FUN_088be1c4(D_09bb7b60)==0||i!=0x14)FUN_088c3e58(D_09bb7e70,i,value);i++;}while(i!=0x1a);if(suppress==0)FUN_088c3edc(D_09bb7e70,0,0x1000,(short)value);}
