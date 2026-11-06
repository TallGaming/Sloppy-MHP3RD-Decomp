/*
 * FUN_088bd46c: refresh an owner subobject with the current game mode when active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
extern void *D_09bb7e90; int FUN_088f5c80(void *); int FUN_088cca4c(void *); void FUN_08949ca4(void *,int);
int FUN_088bd46c(unsigned char *owner){int active=FUN_088f5c80(owner+0x1820);if(active)FUN_08949ca4(owner+0x21fc,FUN_088cca4c(D_09bb7e90));return active;}
