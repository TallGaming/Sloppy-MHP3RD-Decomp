/*
 * FUN_088c36d8: fill one five-word channel record and publish its two values.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: cached record-address arithmetic is shorter and differently allocated.
 */
int thunk_FUN_088584d8(int); void thunk_FUN_088587a4(int,int); void thunk_FUN_0885afb8(int,int);
void FUN_088c36d8(int *owner,int index,int a,int b){int *slot=owner+index*5;slot[6]=a;slot[7]=b;slot[8]=owner[0]+thunk_FUN_088584d8(index);thunk_FUN_088587a4(index,slot[6]);thunk_FUN_0885afb8(index,slot[7]);}
