/* Purpose: apply three transforms to one matrix in Y-Z-X order. */
extern void FUN_08875d78(unsigned int,void*,void*);extern void FUN_08875dd0(unsigned int,void*,void*);extern void FUN_08875e28(unsigned int,void*,void*);
void FUN_08875f50(unsigned int a,unsigned int b,unsigned int c,void*m){FUN_08875e28(c,m,m);FUN_08875d78(a,m,m);FUN_08875dd0(b,m,m);}
