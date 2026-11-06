/*
 * FUN_089498e4: allocate, initialize and enqueue one object record.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Object role is a hypothesis.
 */

int FUN_08955fec(void *);void FUN_08949820(void *,void *,unsigned short);void FUN_08955fb4(void *,void *);
int FUN_089498e4(void *object,unsigned short selector)
{int item=FUN_08955fec(*(void **)0x09bf5260);if(item==0)return -1;FUN_08949820((void *)item,object,selector);FUN_08955fb4(*(void **)0x09bf5260,(void *)item);return *(int *)(item+0x30);}
