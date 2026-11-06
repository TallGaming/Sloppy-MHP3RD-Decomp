/*
 * FUN_088c80a4: compute an output handle and reject out-of-range distances in one mode.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size floating range check retains broad allocation differences.
 */
extern void *D_09bb7e70; extern float D_089681b8; int FUN_088c7f60(void); int FUN_088c3634(void *); float FUN_088760f4(int,int);
void FUN_088c80a4(int unused,int b,int a,int d,int *out,int mode){float distance;*out=FUN_088c7f60();if(FUN_088c3634(D_09bb7e70)!=2&&mode==1){distance=FUN_088760f4(a,b);if(distance<0.0f||distance>=D_089681b8)*out=0;}}
