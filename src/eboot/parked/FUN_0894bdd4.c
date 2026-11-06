/*
 * FUN_0894bdd4: sum one derived value for every entry in the third group.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Group role is a hypothesis.
 */

typedef unsigned char u8;int FUN_0894aefc(void *,int);
int FUN_0894bdd4(u8 *record)
{signed char count=*(signed char *)(record+0x11);int index=0,total=0;if(count<1)return 0;do{total+=FUN_0894aefc(record,(signed char)index);index++;}while(index!=count);return total;}
