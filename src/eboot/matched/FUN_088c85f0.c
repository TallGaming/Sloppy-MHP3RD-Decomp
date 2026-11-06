/*
 * FUN_088c85f0: publish one value across all twenty-five channels.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
extern void *D_09bb7e70; void FUN_088c3e58(void *,int,int); void FUN_088c3edc(void *,int,int,int);
void FUN_088c85f0(void *unused,int value,char suppress){int i=1;do{FUN_088c3e58(D_09bb7e70,i,value);i++;}while(i!=0x1a);if(suppress==0)FUN_088c3edc(D_09bb7e70,0,0x1000,(short)value);}
