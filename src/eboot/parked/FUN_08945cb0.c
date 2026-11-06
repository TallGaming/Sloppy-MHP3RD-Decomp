/*
 * FUN_08945cb0: load forty half-words and count leading nonzero pairs.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Loaded table role is a hypothesis.
 */

typedef unsigned char u8;typedef short s16;void FUN_088bf828(void *,void *,int);
void FUN_08945cb0(u8 *record)
{s16 *entry=(s16 *)(record+0x158);int index=0;FUN_088bf828(*(void **)0x09bb7b60,entry,0x28);*(int *)(record+0x208)=0;do{s16 value=*entry;index++;entry+=2;if(value==0)return;(*(int *)(record+0x208))++;}while(index!=0x28);}
