/*
 * FUN_088b6048: notify every available object in a six-slot secondary array.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the unsymbolized owner global and external call prevent exact relocation checks.
 */
extern void *D_09bb7a80; void *FUN_088b5120(void *,int,int,int); void func_0x09cb56c8(void *);
void FUN_088b6048(void){int i=0;do{void *p=FUN_088b5120(D_09bb7a80,i,1,0);i++;if(p)func_0x09cb56c8(p);}while(i!=6);}
