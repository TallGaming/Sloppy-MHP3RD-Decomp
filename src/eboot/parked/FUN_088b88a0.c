/*
 * FUN_088b88a0: reset an owner and install the callback selected by feature state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: callback selection has exact size but an unsymbolized global and control differences.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_08a33460; void FUN_088b877c(void *,int); void FUN_088b7380(void *); int FUN_08860c9c(void *); void FUN_088b7d2c(void *); void FUN_088b7c08(void *);
void FUN_088b88a0(void **owner){FUN_088b877c(owner,0);FUN_088b7380(owner);if(!FUN_08860c9c(D_08a33460))FUN_088b7d2c(owner);owner[0]=(*(u32 *)(D_08aace80+0x60474)&1)?FUN_088b7c08:FUN_088b7d2c;owner[1]=0;}
