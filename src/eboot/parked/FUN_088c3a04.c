/*
 * FUN_088c3a04: initialize an audio controller and register its callback.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size initialization retains two callback-address differences.
 */
void FUN_08854edc(int,int,int,int); void FUN_0885423c(void); void thunk_FUN_08858728(int); void FUN_088c3944(void *,int,int); void FUN_088c3594(void *,int); void thunk_FUN_0885afa4(void *); void FUN_088c3258(void);
void FUN_088c3a04(int *owner,int a,int b){FUN_08854edc(a,0x12,0x11,0);FUN_0885423c();thunk_FUN_08858728(b);owner[0]=a;owner[1]=b;FUN_088c3944(owner,0,1);FUN_088c3594(owner,1);thunk_FUN_0885afa4(FUN_088c3258);}
