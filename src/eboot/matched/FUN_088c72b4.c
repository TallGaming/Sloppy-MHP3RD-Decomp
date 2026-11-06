/*
 * FUN_088c72b4: clear channel properties, then recompute one selected property.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned short u16; void FUN_088c6fe8(void *,int,u16,int,int); void FUN_088c6e3c(void *,int,int,int);
void FUN_088c72b4(void *owner,int channel,u16 value,int selector,int source){FUN_088c6fe8(owner,channel,value,0,0);FUN_088c6e3c(owner,channel,selector,source);}
