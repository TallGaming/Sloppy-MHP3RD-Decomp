/*
 * FUN_0891954c: assign table values across all primary record groups.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Group and table roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);
void FUN_0891954c(void *context)
{u8 *group=(u8 *)FUN_0891d4c0(context,0);int table_index=0,group_offset=0;signed char group_index=0;if(group!=0){do{if(*(s16 *)group!=-1){u8 *entry=group,*table=(u8 *)0x08a33ea0+table_index*8;do{entry+=0x30;table_index++;*(s16 *)(group+group_offset+0x24)=*(s16 *)table;table+=8;}while(*(s16 *)entry!=-1);}group_index++;group=(u8 *)FUN_0891d4c0(context,group_index);group_offset+=0x30;}while(group!=0);}}
