/*
 * FUN_088db8e4: register a callback and lazily create two indexed owner blocks.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size setup retains two callback-address relocation differences.
 */
extern void LAB_088dbc68(void); void FUN_088ec5ec(int); void FUN_088ed69c(void *); void FUN_088db864(void *,int);
void FUN_088db8e4(void *owner){int i=0;FUN_088ec5ec(0x11);FUN_088ed69c(LAB_088dbc68);do{FUN_088db864(owner,i);i++;}while(i!=2);}
