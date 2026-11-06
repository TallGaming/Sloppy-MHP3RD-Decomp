/*
 * FUN_088b61cc: pass a value to a virtual method on two six-object arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired virtual-call loops remain one instruction short and differently allocated.
 */
typedef void (*Set)(void *,unsigned);
void FUN_088b61cc(int owner,unsigned value){int *p;int first=0,second;int cursor=owner;do{p=*(int **)(cursor+8);first++;cursor+=4;if(p)((Set)(*(void ***)p)[75])(p,value);}while(first!=6);second=0;do{p=*(int **)(owner+0x20);second++;owner+=4;if(p)((Set)(*(void ***)p)[75])(p,value);}while(second!=6);}
