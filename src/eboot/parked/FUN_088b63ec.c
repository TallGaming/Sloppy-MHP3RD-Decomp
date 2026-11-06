/*
 * FUN_088b63ec: test whether all six selected objects pass an external query.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the unsymbolized owner global and external query retain five differences.
 */
extern void *D_09bb7a80; void *FUN_088b51b8(void *,int,int); int func_0x09ce9130(void *);
int FUN_088b63ec(void){int i=0;for(;;){void *p=FUN_088b51b8(D_09bb7a80,i,1);i++;if(p&&!func_0x09ce9130(p))return 0;if(i==6)return 1;}}
