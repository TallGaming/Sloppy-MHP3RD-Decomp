/*
 * FUN_08918170: map a byte-selected state entry through FUN_0891dc7c.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. State role is a hypothesis.
 */

int *FUN_0891dc58(void *);int FUN_0891dc7c(void *,int);
int FUN_08918170(void *context,unsigned selector)
{int index=FUN_0891dc58(context)[selector&0xff];if(index==-1)return 0;return FUN_0891dc7c(context,index);}
