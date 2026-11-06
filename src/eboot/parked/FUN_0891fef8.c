/*
 * FUN_0891fef8: classify remaining capacity for a matching save entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. Capacity role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef short s16;int FUN_0887dde0(void *,void *,int,int);int FUN_0887e9a8(void *,void *);
int FUN_0891fef8(void *unused,u16 *values,u8 *entry)
{int remaining,result;if(values[0]!=*(s16 *)(entry+2)||FUN_0887dde0(*(void **)0x08ab1568,entry,0,0)==0)return -1;remaining=((u8 *)0x089caf8e)[values[0]*0x14]-(s16)values[1];result=0;if(remaining>0){result=1;if(FUN_0887e9a8(*(void **)0x08ab1568,entry)<=remaining)result=2;}return result;}
