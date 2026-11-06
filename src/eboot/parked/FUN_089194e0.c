/*
 * FUN_089194e0: count the consecutive primary record groups.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Group role is a hypothesis.
 */

void *FUN_0891d4c0(void *,int);
int FUN_089194e0(void *context)
{void *entry=FUN_0891d4c0(context,0);int result=0;if(entry!=0){signed char count=0;do{count++;entry=FUN_0891d4c0(context,count);}while(entry!=0);result=count;}return result;}
