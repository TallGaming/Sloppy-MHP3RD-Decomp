/*
 * FUN_0891787c: locate a record slot for a signed selector.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Slot roles are hypotheses.
 */

typedef unsigned char u8;void *FUN_0891d4c0(void *,int);void *FUN_0891d510(void *);
void *FUN_0891787c(u8 *context,short selector)
{int value=selector;u8 *base,*result=context+0x78;if(value!=10){if(value<2){base=(u8 *)FUN_0891d4c0(context,0);result=base+value*0x30;}else{base=(u8 *)FUN_0891d510(context);result=base+value*0x34-100;}if(base==0)result=0;}return result;}
