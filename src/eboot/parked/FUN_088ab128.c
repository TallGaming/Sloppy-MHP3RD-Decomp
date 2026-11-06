/*
 * FUN_088ab128: update four object fields only when the index changes.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two equivalent guard forms retain seven register/control differences.
 */
int FUN_088a49f4(void); void FUN_088ab0b8(void *,int,int,int);
void FUN_088ab128(void *o,int index,int a,int b)
{ int current=FUN_088a49f4(); if(current==index)return; FUN_088ab0b8(o,index,a,b); }
