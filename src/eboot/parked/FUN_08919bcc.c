/*
 * FUN_08919bcc: find the largest mapped value across primary record groups.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Group and value roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);unsigned FUN_0891dc7c(void *,int);
unsigned FUN_08919bcc(void *context,unsigned selector)
{u8 *group=(u8 *)FUN_0891d4c0(context,0);unsigned largest=0;signed char group_index=0;if(group!=0){do{int index=*(s16 *)(group+(selector&0xff)*0x30);unsigned value;group_index++;if(index!=-1&&(value=FUN_0891dc7c(context,index),largest<value))largest=value;group=(u8 *)FUN_0891d4c0(context,group_index);}while(group!=0);}return largest;}
