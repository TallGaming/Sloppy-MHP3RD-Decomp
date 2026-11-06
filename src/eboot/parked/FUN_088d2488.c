/*
 * FUN_088d2488: apply four transforms to a vector using two record fields.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size explicit-load transform sequence remains differently allocated.
 */
extern unsigned char *D_08a29198; void FUN_08875a78(void *,void *,void *); void FUN_08875dd0(int,void *,void *); void FUN_08875e28(int,void *,void *); void FUN_08875d78(int,void *,void *);
void FUN_088d2488(void *unused,void *vector,unsigned char *record){int b,a;FUN_08875a78(vector,vector,D_08a29198+0x1020);b=*(int *)(record+0x34);a=*(int *)(record+0x2c);FUN_08875dd0(0,vector,vector);FUN_08875e28(b,vector,vector);FUN_08875d78(a,vector,vector);}
