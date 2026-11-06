/*
 * FUN_0894bad0: sum one derived value for every entry in the second group.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Group role is a hypothesis.
 */

typedef unsigned char u8;int FUN_0894ae7c(void *,int);
int FUN_0894bad0(u8 *record)
{signed char count=*(signed char *)(record+0xf);int index=0,total=0;if(count<1)return 0;do{total+=FUN_0894ae7c(record,(signed char)index);index++;}while(index!=count);return total;}
