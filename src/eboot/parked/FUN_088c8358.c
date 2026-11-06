/*
 * FUN_088c8358: dispatch an audio value with either a supplied or computed slot.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged dispatch remains shorter and differently allocated.
 */
extern void *D_09bb7e70; int FUN_088c4494(void *,int,int,int); void FUN_088c3d5c(void *,int,int,int,int);
void FUN_088c8358(int unused,int target,int a,int b,int c,int slot){if(slot==-1)slot=FUN_088c4494(D_09bb7e70,target,a,4);FUN_088c3d5c(D_09bb7e70,target,b,c,slot);}
