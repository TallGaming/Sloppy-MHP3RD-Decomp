/* Purpose: apply three transforms to one matrix in Z-X-Y order. */
extern void FUN_08875d78(unsigned int,void*,void*);extern void FUN_08875dd0(unsigned int,void*,void*);extern void FUN_08875e28(unsigned int,void*,void*);
void FUN_08875ee8(unsigned int a,unsigned int b,unsigned int c,void*m){FUN_08875d78((unsigned int)m,m,m);FUN_08875dd0(b,m,m);FUN_08875e28(c,m,m);(void)a;}
